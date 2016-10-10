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

#define SIMPLE_VECTOR_INT_INIT_CAPACITY 8

typedef struct simple_vector_int {
  int * data;
  int size;
  int capacity;
} simple_vector_int;


simple_vector_int * simple_vector_int_init();
void simple_vector_int_push(simple_vector_int * v, int item);
void simple_vector_int_resize(simple_vector_int * v);
void simple_vector_int_free(simple_vector_int * v);
