#include <stdio.h>

int main(){
    int is60, isLessThan10, luggageMoreThan20;
	int age = 0;
	int luggageWeight = 0;

	scanf("%d %d", &age, &luggageWeight);

	is60 = age == 60;
	isLessThan10 = age < 10;
	luggageMoreThan20 = luggageWeight > 20;

	if(is60){
		printf("0");
	} else {
		if(isLessThan10){
			printf("5");
		} else {
			if(luggageMoreThan20){
				printf("40");
			} else {
				printf("30");
			}
		}
	}
	return 0;
}
