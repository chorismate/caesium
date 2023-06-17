# Internals of Caesium
This is a very early development verison. Code may not conform to these specifications.

## Languages used
### Python
Python is used in the user interface and core program.

### C
C is used in the auto-scheduler, which necessarily performs large amounts of computation.

## Timeframes
Caesium splits each day into *timeframes* - by default, each timeframe is one minute, though this is configurable.
Caesium stores a set number of timeframes forward in time - by default, this is 576000 timeframes (400 days, slightly over one year).
Elapsed timeframes are deleted.

## Blocks
Blocks are timeframes which are allocated to a set event and cannot be allocated for other uses.
Blocks currently cannot be moved.

## Tasks
Tasks are added to the *unallocated task list* and left to the user to assign.
Assigned tasks currently become blocks.

## Recurring blocks
A recurring block is automatically allocated onto new frames

## Auto-scheduling
Not yet.
Once implemented, auto-scheduling will automatically schedule all tasks in the unallocated task list, if possible.
