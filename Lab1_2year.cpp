
#include "pch.h"
#include <iostream>
#include"Base.h"
#include"triangle.h"
#include"tetragon.h"
#include"pentagon.h"
#include"list_realisation.h"

int main() {
	list_realisation<Base> my_list;
	triangle ababa;
	triangle*pointer_to_triangle = &ababa;
	my_list.addEl(pointer_to_triangle);
	my_list.printList();
}