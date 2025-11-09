//
// Created by Ettore Turini on 23/10/25.
//

#ifndef TODOLIST_USERINTERFACE_H
#define TODOLIST_USERINTERFACE_H

#include <iostream>

#include "Task.h"
#include "TaskHandler.h"

enum class choices {
	add_task = '1',
	view_tak = '2',
	check_task = '3',
	exit = '4'
};

class UserInterface {
public:
	static void DisplayMenu();
	static void DisplayAddTask(std::string *title, std::string *description, std::string *priority, time_t *timestamp);
	static void DisplayViewTasks();
	static void DisplayCheckTask();
	static void DisplayTaskRecap();

	int handleChoice(TaskHandler taskHandler);
};


#endif //TODOLIST_USERI NTERFACE_H