# Caesium
Caesium is a simple command-line utility for time management.


## Installation
You'll have to figure it out yourself and build from source.
Sorry.
Before you can compile it with `make`, I have to be able to compile it manually.


## Usage
```
$ ./caesium
```


## Roadmap

### Early development
- Tasks module `tasks.c` and `tasks.h` usable by end of April
- Blocks module `blocks.c` and `blocks.h` usable by end of April
- Able to build with `make` by end of April

### Alpha
- Able to match tasks to free (non-blocked) time by end of May
- Task priorities by end of May

### Beta
- Simplistic auto-scheduling by end of Q3 2023

### Production
- Complete auto-scheduling by end of Q4 2023


## Licensing
Caesium is [unlicensed](https://unlicense.org/) and is therefore in the
worldwide public domain. I want to write software, not to sue people over
licenses, which, after all, are legal constructs.

Do whatever (but be nice).

## FAQ

### Why isn't there a graphical interface?
Because Caesium is currently in a very early development stage.

### C and Python in one project!?
I'm implementing the wrapper, user interface, and manual scheduler in Python
because those aren't nearly as performance-critical. The automatic scheduler
will be implemented in C.

### Why is it called Caesium?
I like naming my softwares after elements, and caesium the element is used in
atomic clocks.
