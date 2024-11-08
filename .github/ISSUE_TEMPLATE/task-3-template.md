---
name: 'Task 3: Implement `subArray()` Function'
about: Task 3 for Students
title: 'Task 3: Implement `subArray()` Function'
labels: enhancement
assignees: ''

---

**Description**

For this task, create a function named `subArray()` whose purpose is
to dynamically allocate a new array that will contain a sub portion of
the input array as indicated.  This function takes the `start`
index and the `length` of the sub portion of the input array
to be copied.  The function should return an `int*` result which
will be the base address of the new dynamically allocated array
you create.

**Suggested Solution**

1. Dynamically allocate an array of integer values. The new array should be
   `length` in size as it will hold that many values copied from the
   input array. You are required
   to use the C++ `new` keyword for dynamic allocation in all assignments
   for this class (do not use old `malloc` / `calloc` C functions).
2. This time is probably best to write a for loop that iterates over the
   indexes 0 to `length - 1`, which will be the indexes of the array you
   are going to return.
   - You need to copy from the input starting from the `start` index, so basically
     if you use `start + i` where `i` is the index into the array you are copying
	 into, you will calculate the correct index to copy from the input array.
 3. This function should return an `int*`, e.g. a pointer data type that points
    to an `int`.  The base address of the array you allocate in step 1 is
	the `int*` that you need to return.

**Additional Requirements**

- You are required to correctly dynamically allocate and use an array of integers
  that will be intitialized as described and whose base address will be returned
  from this function.
- You are required to use `new` to dynamically allocate memory, do not
  use old C allocation functions (`malloc` / `calloc`).
- You need to correctly copy the asked for sub portion of the input array into
  the new dynamically allocated array that you return.

