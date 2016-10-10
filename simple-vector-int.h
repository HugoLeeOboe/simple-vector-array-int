// Supa-lightweight implementation of an vector array of int elements
//
// A vector array is a dynamically-sized data structure that grows to accomodate
// its contents. Unlike the linked list, a vector's data can be accessed
// using pointer arithmetic.
//
// This implementation is meant for quick stdin processing. There is no built-in
// support for deleting elements. Nobody is perfect...
//
// (C) 2016 Hugh Young, Tuning Fork Productions
// This code is made freely available under the WTFPL: http://wtfpl.net

#pragma once

#define VECTOR_INT_INIT_CAPACITY 8

typedef struct vector_int {
  int * data;
  int size;
  int capacity;
} vector_int;


vector_int * vector_int_init();
void vector_int_push(vector_int * v, int item);
void vector_int_resize(vector_int * v);
void vector_int_free(vector_int * v);
