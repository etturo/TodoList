//
// Created by Ettore Turini on 27/10/25.
//

#include "../includes/ClearScreen.h"

#include <unistd.h>
#include <term.h>

void ClearScreen() {
	//TODO far funzionare il clear
	if (!cur_term)
	{
		int result;
		setupterm( NULL, STDOUT_FILENO, &result );
		if (result <= 0) return;
	}

	putp( tigetstr( "clear" ) );
}
