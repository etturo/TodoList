//
// Created by Ettore Turini on 06/11/25.
//

#ifndef TODOLIST_TASKHANDLER_H
#define TODOLIST_TASKHANDLER_H

#include "Task.h"

class TaskHandler {
private:
	std::vector<Task> allTasks;
public:
	TaskHandler();
	void insertNewTask(Task task);
	void viewAlltasks();
	void addNewtask();
	void completeTask();

};


#endif //TODOLIST_TASKHANDLER_H