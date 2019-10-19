// My round
#include <stdio.h>
#include <math.h>

double myround(double x){
	int sa = (int)x, si = 0;
	
	if (x == 0.0)
		return 0.0;
	else if (x > 0.0){
		si = x + 0.5;
		if (sa == floor(si))
			return sa;
		else
			return sa +1;
	} else {
		si = x - 0.5;
		if (sa == ceil(si))
			return sa;
		else
			return sa - 1;
	}
}


int main(void) {
    	double numbers[4] = {10.6, -5.3, -3.51, 4.49};
	
	for (int i = 0; i < 4; i++){
		double number = 0;
		number = numbers[i];
		printf("%5.3f is %3f\n", number, myround(number));
	}
	return 0;
}
