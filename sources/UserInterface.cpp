//
// Created by Ettore Turini on 23/10/25.
//

#include "../includes/UserInterface.h"
#include "../includes/TaskHandler.h"

#include <string>
#include <cctype>

void UserInterface::DisplayMenu() {
	system("Clear");

	std::cout << "  +---------------------------------------+" << std::endl;
	std::cout << "  |              MENU                     |" << std::endl;
	std::cout << "  |     1. Add a new task.                |" << std::endl;
	std::cout << "  |     2. View ongoing tasks             |" << std::endl;
	std::cout << "  |     3. Check/Uncheck a task           |" << std::endl;
	std::cout << "  |     4. Exit                           |" << std::endl;
	std::cout << "  +---------------------------------------+" << std::endl;
}

void UserInterface::DisplayAddTask(std::string *title, std::string *description, std::string *priority, time_t *timestamp) {
	//clearing the screen
	system("Clear");

	std::cout << "  +-----------------------------------+" << std::endl;
	std::cout << "  |           ADD TASK                |" << std::endl;
	std::cout << "  |  Write here the name of your      |" << std::endl;
	std::cout << "  |  new task.                        |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  +-----------------------------------+" << std::endl;

	std::cin >> *title;

	system("Clear");

	std::cout << "  +-----------------------------------+" << std::endl;
	std::cout << "  |           ADD TASK                |" << std::endl;
	std::cout << "  |  Write now a little description   |" << std::endl;
	std::cout << "  |  of what you are thinking to do.  |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  +-----------------------------------+" << std::endl;

	std::cin >> *description;

	system("Clear");

	not_a_valid_priority:

	std::cout << "  +-----------------------------------+" << std::endl;
	std::cout << "  |           ADD TASK                |" << std::endl;
	std::cout << "  |  On a scale of zero to nine, how  |" << std::endl;
	std::cout << "  |  much is the priority of this     |" << std::endl;
	std::cout << "  |  task?                            |" << std::endl;
	std::cout << "  |                                   |" << std::endl;
	std::cout << "  +-----------------------------------+" << std::endl;

	std::cin >> *priority;

	if ((*priority).size() != 1 || std::isdigit((*priority)[0]) == false) {
		system("clear");
		std::cout << "Insert a valid number, from zero to nine, only one character!!" << std::endl;
		goto not_a_valid_priority;
	}

	*timestamp = time(NULL);
}

void UserInterface::DisplayViewTasks() {

}


int UserInterface::handleChoice(TaskHandler taskHandler) {
	char input;
	std::cin >> input;
	choices userChoice = static_cast<choices>(input);


	switch(userChoice) {
		case choices::add_task: {
			taskHandler.addNewtask();
			break;
		}
		case choices::view_tak: {
			taskHandler.viewAlltasks();
			break;
		}
		case choices::check_task: {
			taskHandler.completeTask();
			break;
		}
		case choices::exit:
			return -1;
		default:
			break;
	}
}
