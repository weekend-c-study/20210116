#include<stdio.h>
int main()
{
	
	for (int dan = 2; dan <= 9; dan++) 
	{
		for (int i = 1; i <= 9; i++) 
		{
			printf("%d * %d = %2d  \n", dan, i, dan * i);
		}
		printf("\n");
	}
	
	
	return 0;
}


/*
// *
// * *
// * * *
// * *
// *
#include<stdio.h>
int main()
{
	int num = 5;
	int row = num * 2 - 1;// 5
	for (int i = 0; i < row ; i++) //i 0,1,2,3,4
	{
		if (i < num)// 0,1,2
		{
			//* ����
			for (int j = 0; j < i+1; j++)
			{
				printf("* ");
			}
		}
		else {////i : 3,4
			//* ���� ���
			for (int j = 0; j < row-i ; j++)
			{
				printf("* ");
			}
		}
		printf("\n");
	}

	return 0;
}
//*/

/*
// * * *
//   * *
//     *
#include<stdio.h>
int main()
{
	int num = 5;

	for (int i = 0; i < num; i++) //i 0,1,2
	{
		//���� ���
		for (int j = 0; j < i; j++)
		{
			printf("  ");
		}
		//* ���
		for (int j = 0; j < num-i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
//*/
/*
//     *
//   * *
// * * *
#include<stdio.h>
int main()
{
	int num=5;

	for (int i = 0; i < num; i++ ) //i 0,1,2
	{
		//���� ���
		for (int j = 0; j < num-i-1; j++)
		{
			printf("  ");
		}
		//* ���
		for (int j = 0; j < i+1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
//*/

/*
// * * *
// * * 
// * 
#include<stdio.h>
int main()
{
	for (int i = 0; i < 3; i++ ) //i 0,1,2
	{
		for (int j = 0; j < 3-i; j++) // j 0,1,2
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
//*/

/*
// * 
// * * 
// * * *
#include<stdio.h>
int main()
{
	
	for (int i = 0; i < 3; i++) //i 0,1,2
	{
		for (int j = 0; j < i+1 ; j++) // j 0,1,2
		{
			printf("* ");
		}
		printf("\n");
		
	}

	return 0;
}
*/
/*
// * * *
// * * *
// * * *
#include<stdio.h>
int main()
{
	for (int i = 0; i < 3; i++ ) //i 0,1,2
	{
		for (int j = 0; j < 3; j++) // j 0,1,2
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	//num�� num���� *���
	int num=3;
	//puts("���� �Է��ϼ���!");
	//scanf_s("%d", &num);

	int i = 0;
	while (i<3)// ��
	{
		int j = 0;
		while (j < (i+1))// �� i==0 : 1, i==1: 2, i==2: 3
		{
			printf("* ");
			j++;
		}
		printf("\n");//�ٹٲ�
		i++;

	}



	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	// 2 �� 3���� *���
	int i;
	int j;
	j = 0;
	while(j<2){//���� ȸ����
		i = 0;
		while (i < 3) {//���� ȸ����
			printf("* ");
			i++;
		}
		printf("\n");

		j++;
	}

	

	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	int dan;
	int i;

	dan = 2;
	while(dan <=9 ){
		i = 1;
		while (i <= 9)
		{
			printf("%d * %d = %d\n", dan, i, dan * i);
			i++;
		}
		puts("");
		dan++;
	}

	
	


	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int i = 0;
	while (i<5)//i 0,1,2,3,4
	{
		printf("*");
		i++;
	}
	puts("");

	i = 0;
	while (i < 5)
	{
		printf("%d\n", i+1);
		i++;
	}

	puts("");
	i = 1;
	while (i <= 9)
	{
		printf("%d * %d = %02d\n", 2 , i, 2*i );
		i++;
	}

	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	//�ϴ� {}������ ���ǹ����� �̵�
	//do
	//{

	//} while (���ǹ�);
	//������ ���̸� ���� �����϶� Ż��
	do
	{
		puts("�ȳ��ϼ���");
	} while (0);
	//���ǿ� ������� �ּ�1���� ����ȴ�.

	int i = 0;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i < 3);
	
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	//1.�ʱⰪ, 2���ǹ�, 3����
	//for (�ʱⰪ ; ���ǹ� ; ����)
	for (
		int i = 0 ;//ó�� 1���� ����ȴ�
		i < 3 ;//�������̸� {}���� �����̸� Ż��
		i++)//{}������ ������ ����ǰ� ������������ ���ǹ����� �̵�
	{
		puts("�ȳ��ϼ���");
	}


	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	//���ѷ���
	//while(1)
	//{
	//	puts("�ȳ��ϼ���");
	//}
	int i=0;//�ʱ�ȭ��
	while (i<3)//���ǹ�
	{
		puts("�ȳ��ϼ���");
		i++;//1����
	}
	//i�� 0���� 3�̵Ǳ������� 1�������ϴ� �ݺ���
	//���ǹ��� true(1)�̸� {}�������� ����
	//�����Ŀ��� �ٽ� ���ǹ����� �̵�
	//���ǹ��� ����� false(0)�ΰ�� {}Ż��

	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	char ch;
	puts("���� m, ���� a, ���� e");
	printf("�Է�: ");
	scanf_s("%c", &ch, sizeof(ch));
	//scanf_s("%c", &ch, ������ġ�� �ִ������);
	//���� ���� ����
	switch (ch)
	{
	case 'M':
	case 'm':
		puts("�����Դϴ�"); break;
	case 'A':
	case 'a':
		puts("�����Դϴ�"); break;
	case 'e':
	case 'E':
		puts("�����Դϴ�");
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int num = 92;

	switch (num/10)
	{
	case 10:
	case 9://90~99 : 99/10== 9, 92/10==9
		puts("A"); break;
	case 8://80~89
		puts("B"); break;
	case 7://70~79
		puts("C"); break;
	case 6://60~69
		puts("D"); break;
	default:
		puts("F");
	}

	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	//if~else if~else if~else
	int num = 5;
	switch (num)
	{
	case 1: //case value:
		puts("1");
		break; //{}���������� Ż��
	case 2:
		puts("2");
		break;
	case 3:
		puts("3");
		break;
	case 4:
		puts("4");
		break;
	default: //1,2,3,4 �̿� ������
		puts("������");
	}

	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	//if~else if~else if~else
	int num = 1;
	switch (num)
	{
	case 1: //case value:
		puts("1");
	case 2:
		puts("2");
	case 3:
		puts("3");
	case 4:
		puts("4");
	}

	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
//���׿�����
	//(����) ? true value : false value
	int num=-10;
	//���밪���� ����
	num = (num >= 0) ? num : num*(-1);
	printf("num ���밪 : %d \n", num);
	return 0;
}
*/
/*
#include<stdio.h>
//if(���ǹ�)
//else if (����)
//else if (����)
//else if (����)
//else if (����)
//else 
int main()
{
	int num = 88;
	//90���̻��̸� A����
	//80���̻��̸� B����
	//70���̻��̸� C����
	//60���̻��̸� D����
	//60���̸��̸� F����
	if (num >= 90)
	{
		puts("A");
	}
	else if (num >= 85)
	{
		puts("B+");
	}
	else if (num >= 80)
	{
		puts("B");
	}
	else if (num >= 75)
	{
		puts("C+");
	}
	else if (num >= 70)
	{
		puts("C");
	}
	else if (num >= 60)
	{
		puts("D");
	}
	else 
	{
		puts("F");
	}
			
		
	

	return 0;
}
*/

/*

#include<stdio.h>
int main()
{
	int num=88;
	//90���̻��̸� A����
	//80���̻��̸� B����
	//70���̻��̸� C����
	//60���̻��̸� D����
	//60���̸��̸� F����
	if (num >= 90)
	{
		puts("A");
	}
	else//A�̿� ������
	{
		if (num >= 80)
		{
			puts("B");
		}
		else {//C D F
			if (num >= 70)
			{
				puts("C");
			}
			else {//D F
				if (num >= 60)
				{
					puts("D");
				}
				else {//f
					puts("F");
				}
			}
		}
	}

	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int num=-10;

	if(num<0)
	{
		printf("0���� �۽��ϴ�.");
	}
	else//���� �̿��� ������
	{
		if (num > 0) {
			printf("0���� Ů�ϴ�.");
		}
		else {
			printf("0�Դϴ�.");
		}
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int num = 40;

	if (num >= 60)
	{
		puts("�հ��Դϴ�");
	}
	else 
	{
		puts("���հ��Դϴ�");
	}


	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int num;
	puts("���ڸ� �Է����ּ���!");
	scanf_s("%d", &num);

	//���ǹ��� true�϶��� {}������ �����մϴ�.
	
	if (num % 2 == 0)
	{
		printf("%d�� ¦�� �Դϴ�.\n", num);
		printf("¦���϶��� �����ϴ� �����Դϴ�.\n");
	}

	//{}�ȿ� ������ 1���̸� {}
	if (num % 2 == 1)
		printf("%d�� Ȧ�� �Դϴ�.\n", num);
	

	return 0;
}
*/