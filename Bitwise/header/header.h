#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int swap_bits_within(unsigned int num, unsigned int s, unsigned int d);
int swap_bits_between (unsigned int snum, unsigned int dnum, unsigned int s, unsigned int d);
unsigned int copy_bits (unsigned int snum, unsigned int dnum, unsigned int n, unsigned int s, unsigned int d);
unsigned int toggle_even_bits (unsigned int num);
unsigned int toggle_odd_bits (unsigned int num);
//#define test_set_bit (number, bit) ((number)|=(1<<bit))
unsigned int left_rotate_bits (unsigned int num, unsigned int n);
unsigned int right_rotate_bits (unsigned int num, unsigned int n);
unsigned int count_set_bits (unsigned int num);
unsigned int count_clear_bits (unsigned int num);
unsigned int count_leading_set_bits(unsigned int num);
unsigned int count_leading_clear_bits(unsigned int num);
unsigned int count_trailing_set_bits (unsigned int num);
unsigned int count_trailing_clear_bits (unsigned int num);
unsigned int set_bits (unsigned int dnum, unsigned int p, unsigned int n, unsigned int snum);
unsigned int invert_bits (unsigned int snum, unsigned int p, unsigned int n);
unsigned int get_bits (unsigned int snum, unsigned int p, unsigned int n);
