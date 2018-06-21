#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);
int cycleLength(int, int);
int algorithm(int, int);

int main(int argc, char *argv[]){
	int i,j;
	while(scanf("%d %d",&i,&j) == 2){
			printf("%d %d %d \n", i, j, algorithm(i,j));
		}
	return 0;
}

int cycleLength(int x, int y){
	int length=0;
	for(x;x<=y;x++){
		int count = 0;
		int n = x;
		while(n != 1){
			count += 1;
			if(n%2 == 1){
				n = 3*n +1;
			}
			else{
				n = n/2;
			}
		}
		count > length ? length = count : length;
	}
	return length+1;
}

int algorithm(int x, int y){
	if( x <= 0 || y <= 0){
		exit(1);
	}
	else{
		if(x > y){swap(&x,&y);}
		return cycleLength(x,y);
	}
	
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
