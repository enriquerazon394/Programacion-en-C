#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num;
	int *ptro=NULL;
	num=10;
	ptro=&num;
	printf("%p",*ptro);
	
	
	return 0;
}

