#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//字符指针

//int main()
//{
//	char ch = "w";
//	char* pc = &ch;
//	return 0;
//}



//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//	return 0;
//}



//int main(void)
//{
//	const char* p = "abcdef"; //"abcdef"是一个常量字符串 这里其实是把a的地址赋给p
//	*p = 'W';//error
//	printf("%s\n",p);
//	printf("%c\n",*p);
//	printf("%s\n",p); 
//	return 0;
//}







//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");  //hehe
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");    //haha
//	}*/
//	return 0;
//}











//指针数组 - 数组

//int main(void)
//{
//	int arr[10] = { 0 }; //整型数组
//	char ch[5] = { 0 }; //字符数组
//	int* parr[4]; //存放整型指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
//	return 0;
//}





//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",*(arr[i]));
//	}
//	return 0;
//}








//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//			for (j = 0; j < 5; j++)
//			{
//				printf("%d ", *(parr[i] + j));
//			}
//			printf("\n");
//	}
//	return 0;
//}












//数组指针 - 指针

//int main(void)
//{
//	//int* p = NULL;//p是整型指针 - 指向整型的的指针 - 可以存放整型的指针
//	//char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的指针
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] -	首元素地址
//	//&arr - 数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//把数组的地址存放在p中
//	//上面的p就是数组指针
//	return 0;
//}










//int main(void)
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}










//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa+i)); //*pa=arr
//	//}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}










//数组指针一般至少用在二维数组以上才方便
void Print1(int arr[3][5], int x, int y)  //参数是数组的形式
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void Print2(int(*p)[5], int x, int y)  //参数是指针的形式
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ",p[i][j]);   //这四个等价
			//printf("%d ",*(p[i]+j));
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ",(*(p+i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	Print1(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址
	Print2(arr, 3, 5);
	

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int* p = arr;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ",p[i]);   //这四个等价
	//	printf("%d ", *(p + i));
	//	printf("%d ", *(arr + i));
	//	printf("%d ",arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
	//}
	return 0;
}