#include <bits/stdc++.h>
#include <unistd.h>
#include <conio.h>
using namespace std;
struct book{
	char code[100],name[100],author[100];
};
void add(book listBook[100], int pos){
	book b;
	printf("Nhap ten sach: "); fflush(stdin);
	scanf("%[^\n]",b.name);
	printf("Nhap ma so sach: "); fflush(stdin);
	scanf("%[^\n]",b.code);
	printf("Nhap ten tac gia: "); fflush(stdin);
	scanf("%[^\n]",b.author);
	listBook[pos]=b;
}
void display(book listBook[100], int n){
	for (int i=0; i<n; i++){
		printf("Ten Sach: %s\nMa so sach: %s \nTen tac gia: %s \n",listBook[i].name,listBook[i].code,listBook[i].author);
	}
}
int search(book listBook[100], char text[], int n){
	for (int i=0; i<n; i++){
		if (!strcmp(listBook[i].code,text)){
			printf("Tim thay. \nTen Sach: %s\nMa so sach: %s \nTen tac gia: %s \n",listBook[i].name,listBook[i].code,listBook[i].author);
			return 1;		
		}
	}
	printf("Khong tim thay. \n");
	return 0;
}
void del(book listBook[100], char text[], int n){
	for (int i=0; i<n; i++){
		if (!strcmp(listBook[i].code,text)){
			for (int j=i; j<n-1; j++){
				listBook[j]=listBook[j+1];
			}
			n--;
		return;
		}
	}
	printf("Khong tim thay. \n");
	return;
}
void edit(book listBook[100], char text[], int n){
	for (int i=0; i<n; i++){
		if (!strcmp(listBook[i].code,text)){
			char tmp[100];
			printf("Nhap ten moi: "); fflush(stdin);
			scanf("%[^\n]",&listBook[i].name);
			printf("Nhap ten moi: "); fflush(stdin);
			scanf("%[^\n]",&listBook[i].author);
			return;
		}
	}
}
int main(){
	book listBook[100];
	int n=0;
	int key;
	do{
		system("cls");
		printf("Chon 1 de them sach.\nChon 2 de hien thi danh sach. \nChon 3 de tim kiem sach. \nChon 4 de xoa sach. \nChon 5 de sua thong tin sach. \nChon 6 de luu sach ra file. \nChon 7 de thoat chuong trinh. \n");
		scanf("%d",&key);
		switch(key){
			case 1:
				add(listBook,n++);
				break;
			case 2:
				display(listBook,n);
				break;
			case 3:
				char text[100];
				printf("Nhap ma so sach tim kiem: "); fflush(stdin);
				scanf("%[^\n]",&text);
				search(listBook,text,n);
				break;
			case 4:
				char text1[100];
				printf("Nhap ma so sach xoa: "); fflush(stdin);
				scanf("%[^\n]",&text);
				del(listBook,text1,n);
				break;
			case 5:
				char text2[100];
				printf("Nhap ma so sach: "); fflush(stdin);
				scanf("%[^\n]",&text);
				edit(listBook,text2,n);
				break;
			case 6:
				int old = dup(1);
				FILE *fp1 = freopen("out.txt","w",stdout);
				display(listBook,n);
				fclose(stdout);
				FILE *fp2 = fdopen(old,"w");
				*stdout=*fp2;
				printf("Da luu ra file");
				break;
		}
		printf("Nhan enter.");
		getch();
	}while (key!=7);
}
