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
 * @file memory.c
 * @brief Abstraction of memory read and write operations
 *
 * This implementation file provides an abstraction of reading and
 * writing to memory via function calls. There is also a globally
 * allocated buffer array used for manipulation.
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#include "memory.h"
/***********************************************************
 Function Definitions
 ***********************************************************/
void set_value(char * ptr, unsigned int index, char value) {
    ptr[index] = value;
}

void clear_value(char * ptr, unsigned int index) {
    set_value(ptr, index, 0);
}

char get_value(char * ptr, unsigned int index) {
    return ptr[index];
}

void set_all(char * ptr, char value, unsigned int size) {
    unsigned int i;
    for (i = 0; i < size; i++) {
        set_value(ptr, i, value);
    }
}

void clear_all(char * ptr, unsigned int size) {
    set_all(ptr, 0, size);
}

/**
 *  This function takes two byte pointers (one source and one destination) and a length of bytes to move from the source location to the destination.
 *  The behavior should handle overlap of source and destination. Copy should occur, with no data corruption.
 *  All operations need to be performed using pointer arithmetic, not array indexing
 *  Should return a pointer to the destination (dst).
 * @param src
 * @param dst
 * @param length
 * @return dst
 */
uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length) {
    return src;
}

/**
 *   This function takes two byte pointers (one source and one destination) and a length of bytes to copy from the source location to the destination.
 *   The behavior is undefined if there is overlap of source and destination. Copy should still occur, but will likely corrupt your data.
 *   All operations need to be performed using pointer arithmetic, not array indexing
 *   Should return a pointer to the destination (dst).
 * @param src
 * @param dst
 * @param length
 * @return 
 */
uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length) {
    return src;
}

/**
 *   This should take a pointer to a source memory location, a length in bytes and set all locations of that memory to a given value.
 *   All operations need to be performed using pointer arithmetic, not array indexing
 *   Should return a pointer to the source (src).
 *   should NOT reuse the set_all() function
 * @param src
 * @param length
 * @param value
 * @return 
 */
uint8_t * my_memset(uint8_t * src, size_t length, uint8_t value) {
    return src;
}

/**
 *   This should take a pointer to a memory location, a length in bytes and zero out all of the memory.
 *   All operations need to be performed using pointer arithmetic, not array indexing
 *   Should return a pointer to the source (src).
 *   Should NOT reuse the clear_all() function
 * @param src
 * @param length
 * @return 
 */
uint8_t * my_memzero(uint8_t * src, size_t length) {
    return src;
}

/**
 *  This should take a pointer to a memory location and a length in bytes and reverse the order of all of the bytes.
 *  All operations need to be performed using pointer arithmetic, not array indexing
 *  Should return a pointer to the source.
 * @param src
 * @param length
 * @return 
 */
uint8_t * my_reverse(uint8_t * src, size_t length) {
    return src;
}

/**
 *   This should take number of words to allocate in dynamic memory
 *   All operations need to be performed using pointer arithmetic, not array indexing
 *   Should return a pointer to memory if successful, or a Null Pointer if not successful
 * @param length
 * @return 
 */
int32_t * reserve_words(size_t length) {
    return 0;
}

/**
 *  Should free a dynamic memory allocation by providing the pointer src to the function
 *  All operations need to be performed using pointer arithmetic, not array indexing
 * @param src
 */
void free_words(uint32_t * src) {

}
