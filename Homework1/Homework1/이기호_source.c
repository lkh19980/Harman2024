#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


void test00(void)
{
	char str1[100];
	char* pstr1 = str1;
	printf("�����ڿ��� �Է��ϼ���. \n> ");
	scanf("%s", &str1);

	while (*pstr1)
	{
		printf("%c ", *pstr1++);

	}
	printf("\n��ҹ��ڸ� �빮�ڷ� �ϰ� ��ȯ\n");
	pstr1 = str1;
	while (*pstr1)
	{
		*pstr1 = *pstr1 & 0b11011111;
		pstr1++;
		//*pstr1++ = *pstr1 - 32;
	}
	printf("%s", str1);
	
}

void test01(void)
{
	char a = 0, b = 32, c = 64, d = 96;
	while (a!=32)
	{
		switch (a)
		{
		case 7:
			printf("|%4d /\t %4x /\t   BELL||\t", a, a, a);
			break;
		case 8:
			printf("|%4d /\t %4x /\t     BS||\t", a, a, a);
			break;
		case 9:
			printf("|%4d /\t %x /\t   ||\t", a, a, a);
			break;
		case 10:
			printf("|%4d /\t %4x /\t   ||\t", a, a, a);
			break;
		case 13:
			printf("|%4d /\t %4x /\t   ||\t", a, a, a);
			break;
		default:
			printf("|%4d /\t %4x /\t %6c||\t", a, a, a);
		}
		
		
		printf("|%4d /\t %4x /\t %c||\t", b, b, b);
		printf("|%4d /\t %4x /\t %c||\t", c, c, c);
		printf("|%4d /\t %4x /\t %c||\n", d, d, d);
		a++, b++, c++, d++;
	}
}

void test02(void)
{
	int num1, num2, tmp;
	printf("�� ���� �Է��ϼ���\n");
	printf("1 >> ");
	scanf("%d", &num1);
	printf("2 >> ");
	scanf("%d", &num2);
	printf("�� ���� 1 >> %d, 2 >> %d�Դϴ�.", num1, num2);
	tmp = num2;
	num2 = num1;
	num1 = tmp;
	printf("�� ���� 1 >> %d, 2 >> %d�Դϴ�.", num1, num2);
}


void test03(void)
{
	int n;
	printf("����(Ȧ��)�� �Է��ϼ���.\n");
	scanf("%d", &n);
	int i = 0, j=0;
	for (i = 0; i < n / 2 + 1; i++) 
	{
		for (j = 0; j < n / 2-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j  < 1+2*i ; j++) 
		{
			printf("*");
		}
		for (j = 0; j < n / 2-i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	

}

void test04(void)
{
	char alp;
	int index = 0;
	int i, j;
	printf("�����ڸ� �Է��Ͻʽÿ�.\n");
	//alp = getch();
	scanf("%*c", &alp);//fflush(stdin);rewind(stdin);
	/*
	if (scanf("%d",&n))
	{
		fflush(stdin);//���� Ŭ����
		rewind(stdin);//���� ������ �ʱ�ȭ
		continue;//�ݺ��� �ʱ�ȭ
	}
	*/
	scanf("%c", &alp);
	//scanf("%c", &alp);
	//alp = 'd';
	alp = alp & 0b11011111;

	if (alp >= 'A' && alp <= 'Z')
	{
		index = alp - 'A'+1;
		for (i = 0; i < index; i++) 
		{
			for (j=0; index > j;j++)
			{
				if (j<i) 
				{
					printf(" ");
				}
				else
				printf("%c", 'A' + i);
			}
			printf("\n");
		}
	}
	else
	{
		printf("�����ڰ� �ƴմϴ�.");
	}
	

}

void test05(void)
{
	int num1, num2;
	printf("> ");
	scanf("%d %d", &num1, &num2);
	int div1[30], div2[30];
	int i = 1, index1 = 0, index2 = 0;
	int conclusion = 1;
	for (; i <= num1; i++)
	{
		if (num1 % i == 0)
		{
			div1[index1++] = i;
		}
	}
	div1[index1] = NULL;
	for (index2=0,i=1; i <= num2; i++)
	{
		if (num2 % i == 0)
		{
			div2[index2++] = i;
		}
	}
	div2[index2] = NULL;
	index1 = 0;
	printf("%d : ", num1);
	while (div1[index1]) 
	{
		printf("%d ", div1[index1++]);
	}
	printf("\n");
	index2 = 0;
	printf("%d : ", num2);
	while (div2[index2])
	{
		printf("%d ", div2[index2++]);
	}
	printf("\n");
	index1--, index2--;
	for ( ; index1 >= 0; index1--)
	{
		for (i = index2; i >= 0; i--)
		{
			if (div1[index1] == div2[i])
			{
				printf("�ִ� ������� %d", div1[index1]);
				return;
			}
		}
		
	}


}
/*
scanf error 1 normal 0 error
*/


void test06(void)
{
	int i = 0,j=0;
	for (j = 0; j < 100; j++) 
	{
		
		for (i = 0; i < 100; i++)
		{
			/*
			printf("|");
			if (i == 49) 
			{
				printf("|");
			}
			*/
			
			if (100 * ((sin(2 * M_PI / 100 * j)+1)/2) > i)
			{
				printf(" ");
				//printf("\n");
				//break;
			}
			
		}
		printf("*");
		printf("|");
		printf("\n");
	}
	
	

}




void main(void)
{
	int n;
	void* pf[] = { test00, test01, test02, test03, test04, test05, test06 };
	void (*pFunc)();
	while (1)
	{
		printf("\n\n\n");
		printf("0. test00\n");
		printf("1. test01\n");
		printf("1. test02\n");
		printf("10. ����\n");
		printf("-----------------\n ���� >");
		scanf("%d", &n);
		if (n == 10) return;
		pFunc = pf[n];
		pFunc();
	}
}
