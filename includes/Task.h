//
// Created by Ettore Turini on 23/10/25.
//

#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H

#define DONE 1
#define TODO 0

#include <string>
#include <iostream>
#include <list>


class Task {
private:
	std::string Title;
	std::string Description;
	std::string Priority;
	time_t CreationTime;
	bool Status;
public:
	Task();
	//~Task();

	std::string getTitle() {
		return Title;
	}
	std::string getDescription() {
		return Description;
	}
	time_t getTime() {
		return CreationTime;
	}
	std::string getPriority() {
		return Priority;
	}
	bool getStatus() {
		return Status;
	}

};

#endif //TODOLIST_TASK_H