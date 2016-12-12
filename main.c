#include <stdio.h>

int isPrime(int a){
	int i=0;
	if(a<=1)
		return 0;
	for(i=2;i*i<=a;i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}

int main(){
	printf("%d",isPrime(3));
}
