/** @file assg11-library.cpp
 *
 * @brief Implementation file for Assignment 11: Pointers and Dynamic Memory Allocation
 *
 * @author Jane Programmer
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   November 08, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */

/** @brief Convert inches to meters and factor into feet/inches
 *
 * This function is not reallly a good example of a function as we do
 * two separate tasks in one function here.  This function takes in
 * a measurement in terms of totalInches as the first parameter.  It also
 * expects two other parameters that should be passed in as pointers to
 * integers.  The first task of the function is to convert the totalInches
 * into measurements as feet and inches, and return these in the pointer
 * parameters provided.  Since these are pointers (and not reference
 * parameters) you will need to access them (dereference) appropriately to
 * assign and return the needed values in them.
 *
 * Secondly this function asks you to convert only the whole number of
 * feet into obtained into meters.  Use the formula to convert feet to meters
 * which is
 *    meters = feet * 0.3048
 *
 *
 * @param totalInches A regular integer value, the total number of inches measured
 * @param feet A pointer to an integer, the number of feet in the total inches
 *    given is returned in this pointer parameter.
 * @param inches A pointer to an integer, the number of inches that remain after
 *    calculating the number of feet is returned in this parameter.
 *
 * @returns double Returns the result of converting the whole number of feet
 *    (ignoring the left over inches) of the original measurement given.
 */
// task 1 implementation goes here

/** @brief Grow a given array doubling its size
 *
 * This function dynamically allocates an array that is twice as
 * big as the array passed in as a parameter.  It copies each value
 * into the new array twice, duplicating it.  And it returns a pointer
 * to the new array back to the caller.  So fr example, if the values
 * passed in has numValues of 3 and the values {1, 2, 3}, then we will
 * dynamically create an array of size 6 and put in the values
 * {1, 1, 2, 2, 3, 3} into the array to be returned.
 *
 * @param numValues The number of values in the array passed int that is to be
 *   grown by this function.
 * @param values An array of integer values that we will copy into a new
 *   array that is twice as big as this array.
 *
 * @returns int* Returns the (base address) of the array of values that is
 *   dynamically allocated and initialized in this function.  This function
 *   assumes the caller takes ownership of the dynamically allocated array
 *   that is returned, and that it will deallocate it once it is finished
 *   using the returned array.
 */
// task 2 implementation goes here

/** @brief Return a sub portion of an array
 *
 * This function dynamically allocates a new array and returns it.
 * It copies in the sub portion of the given input values from the
 * starting index for the number of values indicated.
 *
 * NOTE: This function assumes that the passed in array is of an adequate
 * size so that the start and length sub portion being accessed and copy are
 * valid.
 *
 * @param start The starting index to copy values from the original into
 *   the newly dynamically allocated sub array.
 * @param length The number of values (the length) of the sub portion of the
 *   array being copied.
 * @param values An array of integer values that we will copy into a new
 *   array that is twice as big as this array.
 *
 * @returns int* Returns the (base address) of the array of values that is
 *   dynamically allocated and the sub portion copied into it from the
 *   given array of values. This function assumes the caller takes ownership
 *   of the dynamically allocated array that is returned, and that it will
 *   deallocate it once it is finished using the returned array.
 */
// task 3 implementation goes here
