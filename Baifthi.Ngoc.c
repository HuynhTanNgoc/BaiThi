#include<stdio.h>
int tong01(int a, int b);
int tong02(int a, int b);
int main(){
	
	int a = 5, b = 6;
	int s = tong01(a,b);
	printf("Tong cua %d + %d = %d dung ham tong 01\n", a, b,s);
	tong02(a,b);
	
	
}

int tong01(int a, int b){
	int s=0; 
	s=a+b;
	}
int tong02(int a, int b){
	int	s;
	s=a+b;
	printf("Tong cua %d + %d = %d dung ham tong 02\n", a, b,s);
}

