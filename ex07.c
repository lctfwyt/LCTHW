#include <stdio.h>

int main(int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2;
	
	printf("You have %d bugs at the imaginary rate of %f.\n",
			bugs, bug_rate);
	
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	// long universe_of_defects = 9223372036854775808;
		// warning, print -9223372036854775808 (-2^63)
	// unsigned long universe_of_defects = 9223372036854775808;
		// warning, but print 9223372036854775808
	printf("The entire universe has %ld bugs.\n",
	// if unsigned, use %lu
			universe_of_defects);
	
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n",
			expected_bugs);
	
	double part_of_universe = expected_bugs /universe_of_defects;
	printf("That is only a %e portion of the universe.\n",
			part_of_universe);
	
	// this makes no sense, just a demo of something weird
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte; // equals '\0'
	printf("Which means you should care %d%%.\n",
			care_percentage);
	
	// printf("%c", nul_byte);   // print nothing 
	// printf("%s\n", nul_byte); // warning, print (null), no error in valgrind
	
	return 0;
}
