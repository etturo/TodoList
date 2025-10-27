#include <iostream>

#include "includes/Task.h"
#include "includes/UserInterface.h"

int main() {
	UserInterface *interface;
	interface->DisplayMenu();
	interface->handleChoice();

	return 0;
}