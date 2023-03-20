/*
 * Caesium v0.1 - time management utility by Chorismate
 *
 * Warning:
 * I am a self-taught programmer who hates taking on dependencies.
 * This contains what amounts to more or less a simplified reimplementation of
 * ncurses. However, I have done my best to keep this code as readable as
 * possible. If you would like to suggest changes, email <me@chorismate.dev>.
 */

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "main.h"

#include "core/tasks.h"
#include "core/blocks.h"

const size_t TASKBLOCKSIZE = 64;

int main(void) {
	printf(
		"Initalizing %s v%s by %s\n"
		"Need to allocate %zu tasks.\n",
		NAME, VERSION, AUTHOR, TASKBLOCKSIZE
	);
	size_t tasks = 0;
	size_t taskarraysize = TASKBLOCKSIZE;
	Task *taskarray = (Task *)malloc(TASKBLOCKSIZE * sizeof(Task));
	
	while (1) {
		/* TODO */
	}
}
