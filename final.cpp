#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>

char** createPlayingField(int rows, int columns);
void printPlayingField(char** field, int rows, int columns);
int counterNeighbors(char** field, int rows, int columns, int row, int column);
bool checkingEnd(char** field, char** nextField, int rows, int columns, int& aliveCells);
void swapField(char**& field, char**& nextField);
int gameProcess(char**& field, char**& nextField, int rows, int columns, int& aliveCells);
void deletePlayingField(char** field, int rows);

int main()
{
	std::ofstream field{ "field.txt" };
	if (field.is_open())
	{
		field << "20 30" << std::endl;
		field << "2 3" << std::endl;
		field << "2 4" << std::endl;
		field << "3 4" << std::endl;
		field << "3 5" << std::endl;
		field << "3 6" << std::endl;
		field << "3 7" << std::endl;
		field << "5 0" << std::endl;
		field << "5 1" << std::endl;
		field << "5 2" << std::endl;
		field << "6 2";
	}
	field.close();

	std::ifstream fieldOut{ "field.txt" };
	if (fieldOut.is_open())
	{
		int rows{};
		int columns{};

		fieldOut >> rows;
		fieldOut >> columns;

		char** playingField{ createPlayingField(rows, columns) }; // текущее поле
		for (int row{}; row < rows; ++row) {
			for (int column{}; column < columns; ++column) {
				playingField[row][column] = '-';
			}
		}

		int row{};
		int column{};

		while (fieldOut >> row >> column) {
			playingField[row][column] = '*';
		}

		char** nextField{ createPlayingField(rows, columns) }; // следующее поле

		printPlayingField(playingField, rows, columns);
		Sleep(3000);
		std::system("cls");
		int aliveCells{};
		do {
			aliveCells = gameProcess(playingField, nextField, rows, columns, aliveCells);
			Sleep(3000);
			std::system("cls");

		} while (aliveCells != 0);

		deletePlayingField(playingField, rows);
		deletePlayingField(nextField, rows);

	}
	fieldOut.close();

	return EXIT_SUCCESS;
}

char** createPlayingField(int rows, int columns)
{
	char** playingField{ new char* [rows] };
	for (int row{}; row < rows; ++row) {
		playingField[row] = new char[columns];
	}

	return playingField;
}

void printPlayingField(char** field, int rows, int columns)
{
	static int generation{ 1 };
	int liveCellCounter{};
	std::cout << "Playing Field: " << std::endl;
	for (int row{}; row < rows; ++row) {
		for (int column{}; column < columns; ++column) {
			std::cout << field[row][column];
			if (field[row][column] == '*') { ++liveCellCounter; };
		}
		std::cout << '\n';
	}
	std::cout << "Generation: " << generation << '\t' << "Alive cells: " << liveCellCounter << "\n\n";
	++generation;
}

int counterNeighbors(char** field, int rows, int columns, int row, int column)
{
	int counter{ 0 };

	for (int neighborRow{ -1 }; neighborRow <= 1; ++neighborRow) {
		for (int neighborColumn{ -1 }; neighborColumn <= 1; ++neighborColumn) {
			// проверка на саму клетку
			if (neighborRow == 0 && neighborColumn == 0) {
				continue;
			}

			int nRow = row + neighborRow;
			int nColumn = column + neighborColumn;

			//проверка границы поля 
			if (nRow >= 0 && nRow < rows && nColumn >= 0 && nColumn < columns) {
				if (field[nRow][nColumn] == '*') {
					++counter;
				}
			}
		}
	}

	return counter;
}

bool checkingEnd(char** field, char** nextField, int rows, int columns, int& aliveCells) {
	aliveCells = 0;
	for (int row{}; row < rows; ++row) {
		for (int column{}; column < columns; ++column) {
			if (nextField[row][column] == '*') { ++aliveCells; };
		}
	}

	if (aliveCells == 0) {
		std::cout << "All cells are dead. Game over!!!" << std::endl;
		return false;
	}

	bool fieldsEqual = true;
	for (int row = 0; row < rows && fieldsEqual; ++row) {
		for (int column = 0; column < columns; ++column) {
			if (field[row][column] != nextField[row][column]) {
				fieldsEqual = false;
				break;
			}
		}
	}

	if (fieldsEqual) {
		std::cout << "The world has stagnated. Game over!!!" << std::endl;
		return false;
	}

	return true;

}

/*void swapField(char** field, char** nextField, int rows, int columns)
{
	for (int row{}; row < rows; ++row) {
		for (int column{}; column < columns; ++column) {
			char temp = field[row][column];
			field[row][column] = nextField[row][column];
			nextField[row][column] = temp;
		}
	}
}
*/

void swapField(char**& field, char**& nextField)
{
	char** temp = field;
	field = nextField;
	nextField = temp;
}

int gameProcess(char**& field, char**& nextField, int rows, int columns, int& aliveCells)
{

	for (int row{}; row < rows; ++row) {
		for (int column{}; column < columns; ++column) {
			int neighbords = counterNeighbors(field, rows, columns, row, column);

			//Для мертвой клетки
			if (field[row][column] == '-') {
				if (neighbords == 3) {
					nextField[row][column] = '*';
				}
				else {
					nextField[row][column] = '-';
				}
			}
			//Для живой клетки
			if (field[row][column] == '*') {
				if (neighbords == 2 || neighbords == 3) {
					nextField[row][column] = '*';
				}
				else {
					nextField[row][column] = '-';
				}
			}
		}
	}

	printPlayingField(nextField, rows, columns);

	if (!checkingEnd(field, nextField, rows, columns, aliveCells)) {
		aliveCells = 0; // остановка игры
	}

	swapField(field, nextField);

	return aliveCells;
}

void deletePlayingField(char** field, int rows) {
	for (int row{}; row < rows; ++row) {
		delete[] field[row];
	}
	delete[] field;
}
