#include"../header/header.h"
int main(void)
{
	unsigned int num,s,d,p,snum,dnum,n;
	swap_bits_within (num, s, d);
	swap_bits_between (snum, dnum, s, d);
	copy_bits (snum, dnum, n, s, d);
	toggle_even_bits (num);
	toggle_odd_bits (num);
	//test_set_bit(num, p);
	left_rotate_bits(num, n);
	right_rotate_bits(num, n);
	count_set_bits(num);
	count_clear_bits(num);
	count_leading_set_bits(num);
	count_leading_clear_bits(num);
	count_trailing_set_bits(num);
	count_trailing_clear_bits(num);
	set_bits(dnum, p, n, snum);
	invert_bits(snum, p, n);
	get_bits(snum, p, n);
	return 0;
}
