//
// Created by Ettore Turini on 23/10/25.
//

#include "../includes/Task.h"

Task::Task() {
	std::string title;
	std::string description;
	time_t timestamp;
	int priority;

	//clearing the screen
	ClearScreen();

	std::cout << "	+-----------------------------------+" << std::endl;
	std::cout << "	|				ADD TASK			|" << std::endl;
	std::cout << "	|	write here the name of your		|" << std::endl;
	std::cout << "	|	new task.						|" << std::endl;
	std::cout << "	|									|" << std::endl;
	std::cout << "	|									|" << std::endl;
	std::cout << "	+-----------------------------------+" << std::endl;

	std::cin >> title;

	ClearScreen();

	std::cout << "	+-----------------------------------+" << std::endl;
	std::cout << "	|				ADD TASK			|" << std::endl;
	std::cout << "	|	write now a little descpription	|" << std::endl;
	std::cout << "	|	of what are you thinking to do	|" << std::endl;
	std::cout << "	|									|" << std::endl;
	std::cout << "	|									|" << std::endl;
	std::cout << "	+-----------------------------------+" << std::endl;

	std::cin >> description;

	ClearScreen();

	std::cout << "	+-----------------------------------+" << std::endl;
	std::cout << "	|				ADD TASK			|" << std::endl;
	std::cout << "	|	on a scale of one to ten how	|" << std::endl;
	std::cout << "	|	much is the priority of this	|" << std::endl;
	std::cout << "	|	task??							|" << std::endl;
	std::cout << "	|									|" << std::endl;
	std::cout << "	+-----------------------------------+" << std::endl;

	std::cin >> priority;
	timestamp = time(NULL);

	Title = title;
	Description = description;
	CreationTime = timestamp;
	Prioity = priority;
	Status = TODO;
}