#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//�ַ�ָ��

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
//	const char* p = "abcdef"; //"abcdef"��һ�������ַ��� ������ʵ�ǰ�a�ĵ�ַ����p
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











//ָ������ - ����

//int main(void)
//{
//	int arr[10] = { 0 }; //��������
//	char ch[5] = { 0 }; //�ַ�����
//	int* parr[4]; //�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
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












//����ָ�� - ָ��

//int main(void)
//{
//	//int* p = NULL;//p������ָ�� - ָ�����͵ĵ�ָ�� - ���Դ�����͵�ָ��
//	//char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ���ָ��
//	//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] -	��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//������ĵ�ַ�����p��
//	//�����p��������ָ��
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










//����ָ��һ���������ڶ�ά�������ϲŷ���
void Print1(int arr[3][5], int x, int y)  //�������������ʽ
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
void Print2(int(*p)[5], int x, int y)  //������ָ�����ʽ
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ",p[i][j]);   //���ĸ��ȼ�
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
	Print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ
	Print2(arr, 3, 5);
	

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int* p = arr;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ",p[i]);   //���ĸ��ȼ�
	//	printf("%d ", *(p + i));
	//	printf("%d ", *(arr + i));
	//	printf("%d ",arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
	//}
	return 0;
}