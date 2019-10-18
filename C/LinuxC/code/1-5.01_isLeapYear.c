// Is this year the leap year?
#include <stdio.h>

int IsLeapYear(int year){
	if (year % 4 == 0)
		if (year % 100 != 0 || year % 400 == 0)
			return 1;
		else
			return 0;	
	else 
		return 0;
}


int main(void) {
    	int years[7] = {1990, 1999, 2000, 2004, 2096, 2097, 2100};
	
	for (int i = 0; i < 7; i++){
		int year = 0;
		year = years[i];
		if (IsLeapYear(year))
			printf("%d is a leap year.\n", year);
		else 
			printf("%d is not a leap year.\n", year);
	}
	return 0;
}
