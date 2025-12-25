#include <stdio.h>  // ฟังก์ชัน printf() อยู่ใน Library stdio.h เป็นแบบ Arguments, no return value
#include <stdlib.h>

int main(){
	int n = 5;
	int result = add(n);
	printf("result: %d\n",result);
}

int add(int n){
	if (n==0) return 0;
	int out =  n + add(n-1);
	return out;
}