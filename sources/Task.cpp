//
// Created by Ettore Turini on 23/10/25.
//

#include "../includes/Task.h"
#include "../includes/UserInterface.h"

Task::Task() {
	std::string title;
	std::string description;
	std::string priority;
	time_t timestamp;

	UserInterface::DisplayAddTask(&title, &description, &priority, &timestamp);
	Title = title;
	Description = description;
	CreationTime = timestamp;
	Priority = priority;
	Status = TODO;
}
