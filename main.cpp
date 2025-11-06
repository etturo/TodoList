#include <iostream>

#include "includes/Task.h"
#include "includes/TaskHandler.h"
#include "includes/UserInterface.h"

int main() {
	system("Clear");
	UserInterface *interface;
	TaskHandler task;
	interface->DisplayMenu();
	interface->handleChoice(task);

	return 0;
}