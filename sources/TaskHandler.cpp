//
// Created by Ettore Turini on 06/11/25.
//

#include "../includes/TaskHandler.h"

void TaskHandler::viewAlltasks() {
	for (int i = allTasks.size(); i > 0; i--) {
		std::cout << allTasks[i].getTitle() << std::endl;
	}
}
