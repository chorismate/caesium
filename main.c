/*
 * Caesium v0.1 - time management utility by Chorismate
 * main.c
 */

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "main.h"

#include "core/tasks.h"
//#include "core/blocks.h"

const size_t TASKBLOCKSIZE = 64;

int main(void) {
	printf("Initalizing %s v%s by %s.\n", NAME, VERSION, AUTHOR);
	
	printf("Need to allocate %zu tasks.\n", TASKBLOCKSIZE);
	size_t tasks = 0;
	size_t taskarraysize = TASKBLOCKSIZE;
	Task *taskarray = (Task *) malloc(TASKBLOCKSIZE * sizeof(Task));
	
	while(1) {
		for(size_t i=0; i<tasks; i++) {
			if(i == SIZE_MAX) {
				fprintf(stderr, "How much memory does your computer have?");
				exit(1);
			}
			printf(
				"%zu. %s (due %lld epoch time)",
				i+1, taskarray[i].name, taskarray[i].sdue
			);
			// TODO use human-readable notation
		}
		
		/* prompt for action */
		/* TODO */
	}
}
