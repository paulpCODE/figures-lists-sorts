
#include "pch.h"
#include <iostream>
#include"list_realisation.h"

using std::cout;
using std::endl;

void menu(list_realisation *list, int &input);
void sortsMenu(list_realisation *list, int &input);
void chooseParametr(int & input);

int main() {
	int input;
	list_realisation my_list;
	menu(&my_list, input);

	return 0;
}



void menu(list_realisation *list, int & input)
{
	cout << "\n\n\t\t Menu" << endl;
	cout << "\t Press 1 to create a triangle" << endl;
	cout << "\t Press 2 to create a tetragon" << endl;
	cout << "\t Press 3 to create a pentagon" << endl;
	cout << "\t Press 4 print your list" << endl;
	cout << "\t Press 5 to delete element from list" << endl;
	cout << "\t Press 6 to delete your list" << endl;
	cout << "\t Press 7 to sort your list" << endl;
	cout << "\t Press 0 to exit from Menu" << endl;
	std::cin >> input;

	switch (input) {
	case 1:
		list->addElTriangle();
		break;
	case 2:
		list->addElTetragon();
		break;
	case 3:
		list->addElPentagon();
		break;
	case 4:
		list->printList();
		break;
	case 5:
		list->printList();
		list->searchToDelete();
		break;
	case 6:
		list->deletelist();
		break;
	case 7:
		sortsMenu(list, input);
		break;
	case 0:
		return;
	default:
		break;
	}
	cout << endl;
	system("pause");
	system("cls");
	menu(list, input);
}

void sortsMenu(list_realisation * list, int &input) {
	cout << "\t\tChoose the sort:" << endl;
	cout << "\tPress 1 to use an insertion sort" << endl;
	cout << "\tPress 2 to use a merge sort" << endl;
	cout << "\tPress 3 to use a quick sort" << endl;
	cout << "\tPress 0 to exit from sorts menu" << endl;
	std::cin >> input;
	switch (input)
	{
	case 1:
		chooseParametr(input);
		list->insertionSort(input);
		break;
	case 2:
		chooseParametr(input);
		list->mergeSort(input);
		break;
	case 3:
		chooseParametr(input);
		list->quickSort(input);
		break;
	case 0:
		return;
	default:
		break;
	}
}

void chooseParametr(int &input) {
	cout << "\t\tChoose the parametr for sort:" << endl;
	cout << "\tPress 1 to sort by area" << endl;
	cout << "\tPress 2 to sort by perimetr" << endl;
	std::cin >> input;
}




