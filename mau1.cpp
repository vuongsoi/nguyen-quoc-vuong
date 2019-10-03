#include<stdio.h>
int main(){
	int T=1000;
	int L=0;
	int y=0;
	while(y<30){
		L=T*10/100;
		T=T+L;
		y=y+1;
	}
	
	printf("T=%d\n",T);
	
	return 0;
}
