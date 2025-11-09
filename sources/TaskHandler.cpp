//
// Created by Ettore Turini on 06/11/25.
//

#include "../includes/TaskHandler.h"

TaskHandler::TaskHandler() {
}

void TaskHandler::viewAlltasks() {
	std::cout << "  +-----------------------------------+" << std::endl;
	if (allTasks.size() == 0) {
		std::cout << "No task to-do... great work" << std::endl;
		return ;
	}
	for (int i = allTasks.size(); i > 0; i--) {
		std::cout << "  |     ";
		std::cout << allTasks[i].getTitle() << std::endl;
	}
	std::cout << "  +-----------------------------------+" << std::endl;
}

void TaskHandler::addNewtask() {
	Task *newTask = new Task();

	allTasks.push_back(*newTask);
}

void TaskHandler::completeTask() {
}
