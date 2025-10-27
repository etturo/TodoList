//
// Created by Ettore Turini on 23/10/25.
//

#ifndef TODOLIST_USERINTERFACE_H
#define TODOLIST_USERINTERFACE_H

#include <iostream>

enum class choices {
	add_task = '1',
	view_tak = '2',
	check_task = '3',
	exit = '4'
};

class UserInterface {
public:
	void DisplayMenu();
	int handleChoice();
};


#endif //TODOLIST_USERI NTERFACE_H