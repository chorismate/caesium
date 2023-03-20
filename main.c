/*
 * Caesium v0.1 - time management utility by Chorismate
 *
 * Warning:
 * I am a self-taught programmer who hates taking on dependencies.
 * This contains what amounts to more or less a simplified reimplementation of
 * ncurses. However, I have done my best to keep this code as readable as
 * possible. If you would like to suggest changes, email <me@chorismate.dev>.
 */

#define NAME "Caesium"
#define VERSION "0.1"
#define AUTHOR "Chorismate"

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const size_t TASKBLOCKSIZE = 64;
typedef struct {
  char *name;
  char *desc;
  time_t sdue;
} Task;

void alloctaskptrs(Task *task, size_t namelen, size_t desclen) {
  task->name = (char *)malloc(namelen * sizeof(char));
  task->desc = (char *)malloc(desclen * sizeof(char));
}
void freetaskptrs(Task *task) {
  free(task->name);
  task->name = NULL;
  free(task->desc);
  task->desc = NULL;
}

int main(void) {
  printf("Initalizing %s v%s by %s\n"
         "Need to allocate %zu tasks.\n",
         NAME, VERSION, AUTHOR, TASKBLOCKSIZE);
  size_t tasks = 0;
  size_t taskarraysize = TASKBLOCKSIZE;
  Task *taskarray = (Task *)malloc(TASKBLOCKSIZE * sizeof(Task));

  while (1) {
    /* TODO */
  }
}
