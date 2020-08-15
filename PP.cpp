#include <stdio.h>

int p(int n){
	int factorial = 1;
	do{
		factorial *= n--;
	}do (n > 1);
	return factorial;
}

int main(){
	char waitEnter;
	printf("Calculos de Pablo y Pedro \n");
	printf("p(11) = %d \n", p(10));
	printf("p(4) = %d \n", p(4));
	waitEnter = getchar();
	return 0;
}
