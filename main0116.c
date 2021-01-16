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
			//* 증가
			for (int j = 0; j < i+1; j++)
			{
				printf("* ");
			}
		}
		else {////i : 3,4
			//* 감소 출력
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
		//공백 출력
		for (int j = 0; j < i; j++)
		{
			printf("  ");
		}
		//* 출력
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
		//공백 출력
		for (int j = 0; j < num-i-1; j++)
		{
			printf("  ");
		}
		//* 출력
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
	//num행 num열의 *출력
	int num=3;
	//puts("숫자 입력하세요!");
	//scanf_s("%d", &num);

	int i = 0;
	while (i<3)// 행
	{
		int j = 0;
		while (j < (i+1))// 열 i==0 : 1, i==1: 2, i==2: 3
		{
			printf("* ");
			j++;
		}
		printf("\n");//줄바꿈
		i++;

	}



	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	// 2 행 3열의 *출력
	int i;
	int j;
	j = 0;
	while(j<2){//행의 회전수
		i = 0;
		while (i < 3) {//열의 회전수
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
	//일단 {}실행후 조건문으로 이동
	//do
	//{

	//} while (조건문);
	//조건이 참이면 실행 거짓일때 탈출
	do
	{
		puts("안녕하세요");
	} while (0);
	//조건에 상관없이 최소1번은 실행된다.

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
	//1.초기값, 2조건문, 3증감
	//for (초기값 ; 조건문 ; 증감)
	for (
		int i = 0 ;//처음 1번만 실행된다
		i < 3 ;//조건참이면 {}실행 거짓이면 탈출
		i++)//{}내용을 실행후 실행되고 증가문실행후 조건문으로 이동
	{
		puts("안녕하세요");
	}


	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	//무한루프
	//while(1)
	//{
	//	puts("안녕하세요");
	//}
	int i=0;//초기화문
	while (i<3)//조건문
	{
		puts("안녕하세요");
		i++;//1증가
	}
	//i가 0부터 3이되기전까지 1씩증가하는 반복문
	//조건문이 true(1)이면 {}블럭내용을 실행
	//실행후에는 다시 조건문으로 이동
	//조건문의 결과가 false(0)인경우 {}탈출

	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	char ch;
	puts("오전 m, 오후 a, 저녁 e");
	printf("입력: ");
	scanf_s("%c", &ch, sizeof(ch));
	//scanf_s("%c", &ch, 저장위치의 최대사이즈);
	//오전 오후 저녁
	switch (ch)
	{
	case 'M':
	case 'm':
		puts("오전입니다"); break;
	case 'A':
	case 'a':
		puts("오전입니다"); break;
	case 'e':
	case 'E':
		puts("저녁입니다");
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
		break; //{}영역밖으로 탈출
	case 2:
		puts("2");
		break;
	case 3:
		puts("3");
		break;
	case 4:
		puts("4");
		break;
	default: //1,2,3,4 이외 나머지
		puts("나머지");
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
//삼항연산자
	//(조건) ? true value : false value
	int num=-10;
	//절대값으로 저장
	num = (num >= 0) ? num : num*(-1);
	printf("num 절대값 : %d \n", num);
	return 0;
}
*/
/*
#include<stdio.h>
//if(조건문)
//else if (조건)
//else if (조건)
//else if (조건)
//else if (조건)
//else 
int main()
{
	int num = 88;
	//90점이상이면 A학점
	//80점이상이면 B학점
	//70점이상이면 C학점
	//60점이상이면 D학점
	//60점미만이면 F학점
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
	//90점이상이면 A학점
	//80점이상이면 B학점
	//70점이상이면 C학점
	//60점이상이면 D학점
	//60점미만이면 F학점
	if (num >= 90)
	{
		puts("A");
	}
	else//A이외 나머지
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
		printf("0보다 작습니다.");
	}
	else//음수 이외의 나머지
	{
		if (num > 0) {
			printf("0보다 큽니다.");
		}
		else {
			printf("0입니다.");
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
		puts("합격입니다");
	}
	else 
	{
		puts("불합격입니다");
	}


	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int num;
	puts("숫자를 입력해주세요!");
	scanf_s("%d", &num);

	//조건문이 true일때만 {}영역을 실행합니다.
	
	if (num % 2 == 0)
	{
		printf("%d는 짝수 입니다.\n", num);
		printf("짝수일때만 실행하는 영역입니다.\n");
	}

	//{}안에 내용이 1줄이면 {}
	if (num % 2 == 1)
		printf("%d는 홀수 입니다.\n", num);
	

	return 0;
}
*/