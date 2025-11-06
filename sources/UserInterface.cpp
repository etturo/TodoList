//
// Created by Ettore Turini on 23/10/25.
//

#include "../includes/UserInterface.h"
#include "../includes/Task.h"
#include "../includes/TaskHandler.h"

void UserInterface::DisplayMenu() {
	std::cout << "  +---------------------------------------+" << std::endl;
	std::cout << "  |              MENU                     |" << std::endl;
	std::cout << "  |     1. Add a new task.                |" << std::endl;
	std::cout << "  |     2. View ongoing tasks             |" << std::endl;
	std::cout << "  |     3. Check/Uncheck a task           |" << std::endl;
	std::cout << "  |     4. Exit                           |" << std::endl;
	std::cout << "  +---------------------------------------+" << std::endl;
}

int UserInterface::handleChoice() {
	char input;
	std::cin >> input;
	choices userChoice = static_cast<choices>(input);


	switch(userChoice) {
		case choices::add_task: {
			Task new_task;
		}
		case choices::view_tak: {
			TaskHandler::viewAlltasks();
		}

		case choices::check_task:

		case choices::exit:
			return -1;
	}
}