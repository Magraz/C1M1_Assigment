/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Statistical Functions Header
 * @brief This header file includes functions related to statistical operations.
 *
 *
 * @author Manuel Agraz Vallejo
 * @date 08/13/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function makes of use of most functions declared on the stats.h header file in order to print
 * their results.
 * @param arr_size An unsigned integer as the size of the array
 * @param arr_data An unsigned char pointer to an n-element data array
 *
 *
 * @return No return values
 */
void print_statistics(unsigned int arr_size, unsigned char * arr_data);

/**
 * @brief Given an array of data and a length, prints the array to the screen.
 *
 * This function will print the array as a one-dimensional vector.
 *
 * @param arr_size An unsigned integer as the size of the array
 * @param arr_data An unsigned char pointer to an n-element data array
 *
 *
 * @return No return values
 */
void print_array(unsigned int arr_size, unsigned char * arr_data);

/**
 * @brief Given an array of data and a length, returns the median value.
 *
 * This function will sort the array and find the median value.
 *
 * @param arr_size An unsigned integer as the size of the array
 * @param arr_data An unsigned char pointer to an n-element data array
 *
 *
 * @return The median value of the array.
 */
unsigned char find_median(unsigned int arr_size, unsigned char * arr_data);

/**
 * @brief Given an array of data and a length, returns the mean.
 *
 * This function will sum all of the values in the array and divide them by the number of
 * elements in the array, to output the mean of said array.
 *
 * @param arr_size An unsigned integer as the size of the array
 * @param arr_data An unsigned char pointer to an n-element data array
 *
 *
 * @return The mean of the array.
 */
float find_mean(unsigned int arr_size, unsigned char * arr_data);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * This function will sort all of the elements in the array from higher to lower, and
 * will determine the maximum value.
 *
 * @param arr_size An unsigned integer as the size of the array
 * @param arr_data An unsigned char pointer to an n-element data array
 *
 *
 * @return The maximum value of the array.
 */
unsigned char find_maximum(unsigned int arr_size, unsigned char * arr_data);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * This function will sort all of the elements in the array from higher to lower, and
 * will determine the minimum value.
 *
 * @param arr_size An unsigned integer as the size of the array
 * @param arr_data An unsigned char pointer to an n-element data array
 *
 *
 * @return The minimum value of the array.
 */
unsigned char find_minimum(unsigned int arr_size, unsigned char * arr_data);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * Each change is represented by a i -> i+1 swap. By counting the amount of changes we can tell if the array is still not completely ordered.
 * We iterate through the array and perform changes until the amount of changes on a complete array iteration is 0. 
 *
 * @param arr_size An unsigned integer as the size of the array
 * @param arr_data An unsigned char pointer to an n-element data array
 *
 *
 * @return It sorts the array through a pointer, the function returns no value.
 */
void sort_array(unsigned int arr_size, unsigned char * arr_data);


#endif /* __STATS_H__ */
