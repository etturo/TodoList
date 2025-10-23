//
// Created by Ettore Turini on 23/10/25.
//

#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H

#include <string>


class Task {
private:
	std::string Title;
	std::string Description;
	std::string CreationData;
	int Prioity;
	bool Status;
protected:
	std::string getTitle() {
		return Title;
	}
	std::string getDescription() {
		return Description;
	}
	std::string getData() {
		return CreationData;
	}
	int getPriority() {
		return Prioity;
	}
	bool getStatus() {
		return Status;
	}
public:
	Task(std::string title, std::string description, std::string data, int priority, bool status);


};


#endif //TODOLIST_TASK_H