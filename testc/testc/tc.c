
#include<math.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int fac(int n)

{register int i,f=1;

for(i=1;i<=n;i++)

	f=f*i;

	return f;

}


void swap(int *p1,int *p2)

{int *p;

p=p1;

p1=p2;

p2=p;

}

struct stu{
	int num;
	int age;
	struct stu* next;
}*pstu;

struct stu* ptet(){

}


int atest(){

	int dividend = 20;  // 被除数
	
	int dividendnew = dividend << 1;

	int dividendnew01 = dividend << 2;
	int dividendnew02 = dividend << 3;
	int dividendnew03 = dividend << 4;


	int divisor = 8;    // 除数
	int shang = 0;		// 商
	int remainder = 0;  // 余数

	shang = dividend / divisor;
	remainder = dividend % divisor;

	return shang;
}

int looptest(){
	int iTotal = 0, i = 0;
	for ( i=1000; i>0; i--)
	{
		iTotal += i;
	}
	return iTotal;
}



main()
{

	char * lenStr = "abc";
	int len = strlen(lenStr);
	int slen = sizeof(*lenStr);


	printf("len: %d; slen:%d", len, slen);
	//printf("shang: %d", looptest());
	//printf("shang: %d", atest());

	//int *p,i,a[10];

	//p=a;

	//for(i=0;i<10;i++)

	//	*p++=i;

	//p=a;

	//for(i=0;i<10;i++)

	//	printf("a[%d]=%d\n",i,*p++);





	/*int a,b;

	int *pointer_1,*pointer_2;

	scanf("%d,%d",&a,&b);

	pointer_1=&a;pointer_2=&b;

	if(a<b) swap(pointer_1,pointer_2);

	printf("\n%d,%d\n",*pointer_1,*pointer_2);*/


	//float a;

	//double b;

	//a=33333.33333;


	//b=33333.33333333333333;

	//printf("%f\n%f \a\n",a,b);

	/*double x,s;

	printf("input number:\n");

	scanf("%lf",&x);

	s=sin(x);

	printf("sine of %lf is %lf\n",x,s);*/

	/*int a,b;

	a=2147483647;

	b=a+1;

	printf("%d,%d\n",a,b);*/


	system("pause");

}
