---
name: 'Task 2: Implement `growArray()` Function'
about: Task 2 for Students
title: 'Task 2: Implement `growArray()` Function'
labels: enhancement
assignees: ''

---

**Description**

In task 2, write a function that will dynamically allocate
a new array that is twice the size of the input array.  It should
copy and duplicate each value of the input array into the new
array, and return a pointer to an int which will be the
base address of the dynamically allocated array you created
to be returned.

**Suggested Solution**

1. Dynamically allocate an array of integer values.  This array should be twice
   as large as the `numValues`, the size of the input array.  You are required
   to use the C++ `new` keyword for dynamic allocation in all assignments
   for this class (do not use old `malloc` / `calloc` C functions).
2. Iterate over the indexes from 0 to `numValues-1` of the input array.
   - Copy over the value from the input to the correct 2 locations of the new
     array that you dynamically allocated.
 3. This function should return an `int*`, e.g. a pointer data type that points
    to an `int`.  The base address of the array you allocate in step 1 is
	the `int*` that you need to return.

**Additional Requirements**

- You are required to correctly dynamically allocate and use an array of integers
  that will be intitialized as described and whose base address will be returned
  from this function.
- You are required to use `new` to dynamically allocate memory, do not
  use old C allocation functions (`malloc` / `calloc`).
- You need to correctly copy and duplicate each value from the input array into
  the new dynamically allocated array you create.

