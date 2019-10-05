#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap so thu nhat :");
	scanf("%d",&a);
	printf("\nNhap so thu hai :");
	scanf("%d",&b);
	printf("\nNhap so thu ba :");
	scanf("%d",&c);
	if(a>b&&a>c) printf ("Max=%d",a);
	else if(b>c) printf ("Max=%d",b);
	else printf ("Max=%d",c);
	if(a<b&&a<c) printf ("\nMin=%d",a);
	else if(b<c) printf ("\nMin=%d",b);
	else printf ("\nMin=%d",c);
	
	
	
}
