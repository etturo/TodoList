#include "includes/TaskHandler.h"
#include "includes/UserInterface.h"

int main() {
	UserInterface interface;
	TaskHandler taskHandler;

	bool end = false;

	while (!end) {
		interface.DisplayMenu();
		if (interface.handleChoice(taskHandler) < 0)
			end = true;
	}
	return 0;
}