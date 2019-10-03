#include<stdio.h>
int main(){
	int A;
	int B;
	int C;
	scanf("%d%d%d",&A,&B,&C);
	if(A>B&&A>C){
		printf("day la so lon nhat\n");
		}
		if(B<A&&B>C){
			printf("day la so lon thu 2\n");
			}
		if(C<A&&C<B){
			printf("day la so nho nhat\n");
			}
			return 0;
			}
