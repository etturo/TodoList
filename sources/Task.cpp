//
// Created by Ettore Turini on 23/10/25.
//

#include "../includes/Task.h"

#include "../includes/TaskHandler.h"

Task::Task() {
	std::string title;
	std::string description;
	std::string priority;
	time_t timestamp;

	//clearing the screen
	system("Clear");

	std::cout << "  +-----------------------------------+" << std::endl;
	std::cout << "  |           ADD TASK                |" << std::endl;
	std::cout << "  |  Write here the name of your      |" << std::endl;
	std::cout << "  |  new task.                        |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  +-----------------------------------+" << std::endl;

	std::cin >> title;

	system("Clear");

	std::cout << "  +-----------------------------------+" << std::endl;
	std::cout << "  |           ADD TASK                |" << std::endl;
	std::cout << "  |  Write now a little description   |" << std::endl;
	std::cout << "  |  of what you are thinking to do.  |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  +-----------------------------------+" << std::endl;

	std::cin >> description;

	system("Clear");

	not_a_valid_priority:

	std::cout << "  +-----------------------------------+" << std::endl;
	std::cout << "  |           ADD TASK                |" << std::endl;
	std::cout << "  |  On a scale of zero to nine, how   |" << std::endl;
	std::cout << "  |  much is the priority of this     |" << std::endl;
	std::cout << "  |  task?                            |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  +-----------------------------------+" << std::endl;

	std::cin >> priority;

	if (priority[1] != '\0' || isdigit(priority[0]) == false) {
		system("clear");
		std::cout << "Insert a valid number, from zero to nine, only one character!!" << std::endl;
		goto not_a_valid_priority;
	}

	timestamp = time(NULL);

	Title = title;
	Description = description;
	CreationTime = timestamp;
	Priority = priority;
	Status = TODO;

	TaskHandler::insertNewTask(this);
}
