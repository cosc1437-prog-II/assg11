---
name: 'Task 1: Implement `toMetersAndFeetInches()` Function'
about: Task 1 for Students
title: 'Task 1: Implement `toMetersAndFeetInches()` Function'
labels: enhancement, good first issue
assignees: ''

---

**Description**

Write a function named `toMetersAndFeetInches()`.  This function takes 3 
parameters as input.  The first named `totalInches` is a regular
value parameter.  But the second and third, named `feet` and `inches`
should be pointer to integers, and are actually used to return results
from this function (like a reference parameter).  This function
should return a `double` result as the actual return value.

The function should first determine the number of feet and inches
from the given `totalInches` input.  For example, if 28 total
inches are given as input, this is equivalent to 2 feet 4 inches.

The function should also convert the whole number of feet into
the equivalent number of meters using the formula

$$
meters = feet * 0.3048
$$

and return the number of meters as the result from the function.

**Suggested Solution**


**Additional Requirements**

- You are required to pass in pointers to integers as the second and third
  parameters named `feet` and `inches` respectively.
- You must  correctly use the pointer parameters, you need to use
  the dereference operator since these are pointer data types in order
  to access their values.
- The results of calculated the feet and inches from the input total
  inches will be returned in the given pointer parameter variables.
- You need to calculate the equivalent number of meters from only the
  whole number of feet found from the total inches input.

