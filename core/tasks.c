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