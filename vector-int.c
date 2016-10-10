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

#include "vector-int.h"
#include <stdlib.h>

/// Returns a newly allocated vector of size 8.
vector_int * vector_int_init()
{
  vector_int * v = (vector_int *) malloc(sizeof(vector_int));
  v->size = 0;
  v->capacity = VECTOR_INT_INIT_CAPACITY;
  v->data = (int *) malloc(sizeof(int) * v->capacity);
  return v;
}

/// Double the size of the array (called by push)
void vector_int_resize(vector_int * v)
{
  int * data = (int *) realloc(v->data, sizeof(int) * v->capacity * 2);
  if (data) {
    v->data = data;
    v->capacity *= 2;
  } else {
    // TODO: initialize nuclear meltdown
  }
}

/// Push a new element to the array
void vector_int_push(vector_int * v, int item)
{
  if (v->size >= v->capacity) {
    vector_int_resize(v);
  }

  v->data[v->size] = item;
  v->size++;
}

/// Free the container and its data
void vector_int_free(vector_int * v)
{
  free(v->data);
  free(v);
}
