//
// Created by Ettore Turini on 06/11/25.
//

#ifndef TODOLIST_TASKHANDLER_H
#define TODOLIST_TASKHANDLER_H

#include <list>

#include "Task.h"


class TaskHandler {
private:
	std::vector<Task> allTasks;
public:
	TaskHandler() {
		allTasks.empty();
	}
	void insertNewTask(Task task);
	void viewAlltasks();
};


#endif //TODOLIST_TASKHANDLER_H