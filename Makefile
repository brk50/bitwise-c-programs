all:
	gcc bitwise_playground.c check_even_odd.c swap_using_xor.c count_set_bits.c check_pow_of_two.c toggle_kth_bit.c -o bitwise_playground

run: all
	./bitwise_playground

clean:
	rm -f bitwise_playground
