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
 * @file Statistical Functions
 * @brief The code implements multiple statistical functions to be performed upon a test array.
 *
 * The code implements mean, median, maximum, minimum and sorting functions. Accessing the array through pointers, so that it can be modified inside a function.
 *
 * @author Manuel Agraz Vallejo
 * @date 08/12/2020
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 
  /* Statistics and Printing Functions Go Here */
  
}

/* Function implementation code */
void print_array(unsigned int arr_size, unsigned char * arr_data){
  
}

void sort_array(unsigned int arr_size, unsigned char * arr_data){
  
}

unsigned char find_median(unsigned int arr_size, unsigned char * arr_data){
  
}

float find_mean(unsigned int arr_size, unsigned char * arr_data){
  
}

unsigned char find_maximum(unsigned int arr_size, unsigned char * arr_data){
  
}

unsigned char find_minimum(unsigned int arr_size, unsigned char * arr_data){
 
}

void print_statistics(unsigned int arr_size, unsigned char * arr_data){

}
