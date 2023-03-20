#ifndef __TASKS_H__
#define __TASKS_H__

void alloctaskptrs(Task *task, size_t namelen, size_t desclen);
void freetaskptrs(Task *task);

#endif
