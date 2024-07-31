#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	generate_for_c00(void)
{
	int randomnumber;
    randomnumber = rand() % 8;
    printf("do the exercise 0%d\n", randomnumber);
}

void	generate_for_c01(void)
{
	int randomnumber;
    randomnumber = rand() % 9;
    printf("do the exercise 0%d\n", randomnumber);
}

void	generate_for_c02(void)
{
	int randomnumber;
    randomnumber = rand() % 10;
    printf("do the exercise 0%d\n", randomnumber);
}

void	generate_for_c03(void)
{
	int randomnumber;
    randomnumber = rand() % 6;
    printf("do the exercise 0%d\n", randomnumber);
}

void	generate_for_c04(void)
{
	int randomnumber;
    randomnumber = rand() % 8;
    printf("do the exercise 0%d\n", randomnumber);
}

void	generate_for_c05(void)
{
	int randomnumber;
    randomnumber = rand() % 4;
    printf("do the exercise 0%d\n", randomnumber);
}

void	generate_for_c06(void)
{
	int randomnumber;
    randomnumber = rand() % 8;
    printf("do the exercise 0%d\n", randomnumber);
}

int	main(void)
{
	srand(time(0));
	generate_for_c00();
	return (0);
}