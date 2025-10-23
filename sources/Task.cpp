//
// Created by Ettore Turini on 23/10/25.
//

#include "../includes/Task.h"

Task::Task(std::string title, std::string description, std::string data, int priority, bool status) {
	Title = title;
	Description = description;
	CreationData = data;
	Prioity = priority;
	Status = status;
}
