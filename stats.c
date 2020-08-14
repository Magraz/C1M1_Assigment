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

  unsigned int test_size = sizeof test / sizeof test[0]; //calculate the size of the test array
  /* Statistics and Printing Functions Go Here */
  print_statistics(test_size, test); //sorts the array, prints the array, finally calculates  and prints the mean, maximum, minimum and median.
}

/* Function implementation code */
void print_array(unsigned int arr_size, unsigned char * arr_data){
  for(int i = 0; i < arr_size; i++){
    printf("%4d   %4d\n",i+1,*(arr_data + i));
  }
}

void sort_array(unsigned int arr_size, unsigned char * arr_data){
  char changes = 1; //stores the amount of swaps done through the sorting
  char temp = 0;     //temporarily stores a value to swap on next iteration
  unsigned char * temp_data = arr_data;
  while(changes != 0){
    changes = 0;          //reinitialize the changes counter
    temp_data = arr_data; //reinitialize the array address iteration
    for(char i = 0; i < arr_size; i++){
      temp = *temp_data;
      if(*temp_data<*(temp_data + 1) && ((i + 1) != SIZE)){ //we check if the i-indexed value is smaller than the (i+1)-indexed value.
        *temp_data = *(temp_data + 1);
        *(temp_data + 1) = temp;
        ++temp_data; 
        ++changes; //register a change
        continue;
      };
      ++temp_data;
    }
  }
}

unsigned char find_median(unsigned int arr_size, unsigned char * arr_data){
  sort_array(arr_size,arr_data);
  int arr_mid = arr_size / 2;
  return *(arr_data + arr_mid);
}

float find_mean(unsigned int arr_size, unsigned char * arr_data){
  float sum = 0.0;
  for(int i = 0; i < arr_size; i++){
    sum += *(arr_data + i);
  }
  return sum / arr_size;
}

unsigned char find_maximum(unsigned int arr_size, unsigned char * arr_data){
  sort_array(arr_size, arr_data); //sorted from high to low
  return *(arr_data);
}

unsigned char find_minimum(unsigned int arr_size, unsigned char * arr_data){
  sort_array(arr_size, arr_data); //sorted from high to low
  return *(arr_data + arr_size - 1);
}

void print_statistics(unsigned int arr_size, unsigned char * arr_data){
  sort_array(arr_size,arr_data);
  printf("Sorted array \n");
  print_array(arr_size,arr_data);
  printf("Median:  %4d\n",find_median(arr_size,arr_data));
  printf("Mean:    %4.2f\n",find_mean(arr_size,arr_data));
  printf("Maximum: %4d\n",find_maximum(arr_size,arr_data));
  printf("Minimum: %4d\n",find_minimum(arr_size,arr_data));
}
