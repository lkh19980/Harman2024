#include <stdio.h>

int test01(void);
void test02(int a); //Prototype of function






int test01(void)
{	
	char* str[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	//string pointer array
	int n = 1;
	while (n)
	{
		printf(">");
		char c = getch();
		//int m = c - 0x30;
		if (0x30 <= c <= 0x39)
		{
			printf("%c : %s\n", c, str[c - '0']);
		}
		else if (c | 0x20 == 'q')
		{
			printf("q");
			//n = 0;
		}
		else 
			continue;

		//if (c == '1') printf("%c : One\n", c);
		//else if (c == '2') printf("%c : Two\n", c);
		//else if (c == '3') printf("%c : Three\n", c);
		//else if (c == 'q' || 'Q' == c) break; // 40H 60H
		//else if (c | 0x20 == 'q') break;
		/*
		switch (c)
		{
		case '1':
			printf(" : One\n");
			break;
		case '2':
			printf(" : Two\n");
			break;
		case '3':
			printf(" : Three\n");
			break;
		case '4':
			printf(" : Four\n");
			break;
		case '5':
			printf(" : Five\n");
			break;
		case '6':
			printf(" : Six\n");
			break;
		case '7':
			printf(" : Seven\n");
			break;
		case '8':
			printf(" : Eight\n");
			break;
		case '9':
			printf(" : Nine\n");
			break;
		case '0':
			printf(" : Zero\n");
			break;
		case 'q':

		case 'Q':
			n = 0;
			//return 0;
			//while(n) n=1 => n=0
		default:
			printf("Error\n");
			break;
		}*/
	}
	return 0;

	/*
	int n = 1;
	while (n)
	{
		printf(">");
		char c = getch();
		printf("%c", c);
		
		//if (c == '1') printf("%c : One\n", c);
		//else if (c == '2') printf("%c : Two\n", c);
		//else if (c == '3') printf("%c : Three\n", c);
		//else if (c == 'q' || 'Q' == c) break; // 40H 60H
		//else if (c | 0x20 == 'q') break;
		
		switch (c)
		{
		case '1':
			printf(" : One\n");
			break;
		case '2':
			printf(" : Two\n");
			break;
		case '3':
			printf(" : Three\n");
			break;
		case '4':
			printf(" : Four\n");
			break;
		case '5':
			printf(" : Five\n");
			break;
		case '6':
			printf(" : Six\n");
			break;
		case '7':
			printf(" : Seven\n");
			break;
		case '8':
			printf(" : Eight\n");
			break;
		case '9':
			printf(" : Nine\n");
			break;
		case '0':
			printf(" : Zero\n");
			break;
		case 'q':

		case 'Q':
			n = 0;
			//return 0;
			//while(n) n=1 => n=0
		default:
			printf("Error\n");
			break;
		}
	}
	//*/
	
	/*
	printf("���� Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ �˷��帮�ڽ��ϴ�.\n");
	while (1) 
	{
		int n = 0;
		char c = getch(); //no echo :Ű���� ������� �ʰ� ��ȯ string �޾Ƶ���?
		//char c1 = getchar() //[enter] �ʿ�. ���Ͱ��� ���� �Է¿� ��µ� getchar
		printf(">%c", c);
		if ('0' <= c <= '9') n = c - '0';
		if (c == 'q')break;  
		switch (n)
		{
		case 1:
			printf(" : One\n");
			break;
		case 2:
			printf(" : Two\n");
			break;
		case 3:
			printf(" : Three\n");
			break;
		case 4:
			printf(" : Four\n");
			break;
		case 5:
			printf(" : Five\n");
			break;
		case 6:
			printf(" : Six\n");
			break;
		case 7:
			printf(" : Seven\n");
			break;
		case 8:
			printf(" : Eight\n");
			break;
		case 9:
			printf(" : Nine\n");
			break;
		case 0:
			printf(" : Zero\n");
			break;
		default:
			printf("Error");
			break;
		}
	}
	
	/*
	int n = 0;
	char c = ' ';
	while(1)
	{ 
		printf("press number button\n");
		c = getch();//no echo
		//scanf_s("%d", &n);
		switch ((int)c)
		{
		case 1:
			printf("%d : One\n", n);
			break;
		case 2:
			printf("%d : Two\n", n);
			break;
		case 3:
			printf("%d : Three\n", n);
			break;
		case 4:
			printf("%d : Four\n", n);
			break;
		case 5:
			printf("%d : Five\n", n);
			break;
		case 6:
			printf("%d : Six\n", n);
			break;
		case 7:
			printf("%d : Seven\n", n);
			break;
		case 8:
			printf("%d : Eight\n", n);
			break;
		case 9:
			printf("%d : Nine\n", n);
			break;
		case 0:
			printf("%d : Zero\n", n);
			break;
		default:
			printf("Error");
			break;
		}
	}
	//*/
	/*
	3 + 4;
	///*
	char vchar = 'f';
	int vint = 10;
	long vlong = 400000000;
	float vfloat = 3.14159265;
	double vdou = 314159265.123456789;
	//*/

	/*
	char vchar;
	int vint;
	long vlong;
	float vfloat;
	double vdou;

	/*
	vchar = 'f';
	vint = 10;
	vlong = 400000000;
	vfloat = 3.14159265;
	vdou = 314159265.123456789;
	//
	
	printf("%8x, %8x, %8x, %8x", &vchar,&vint,&vlong, &vfloat);



	printf("\n\n\n\n\nHello, World!\n\n\n\n\r\n");
	printf("���� ��� �׽�Ʈ : [%12d]\n", 10);		//4byte
	printf("�Ǽ� ��� �׽�Ʈ : [%12.8f]\n", 3.14159265743816);	//4byte
	printf("�� ���� ��� �׽�Ʈ : [%d]\n", 10);	//4byte = 32bit = 1111 1111 1111 1111 1111 1111 1111 1111 = 4G 40��
	printf("�� �Ǽ� ��� �׽�Ʈ : [%12.8lf]\n", 3.14159265743816);	//8
	printf("���� ��� �׽�Ʈ : [%12e]\n", 1234567890);	//8

	printf("8���� ��� �׽�Ʈ : [%12o]\n", 1234567890);	//8
	printf("16���� ��� �׽�Ʈ : [%12x]\n", 1234567890);	//8
	printf("���� ��� �׽�Ʈ : [%c]\n", 50);	//8
	printf("���ڿ� ��� �׽�Ʈ : [%s]\n", "\n�ȳ�\n");	//8
	

	printf("���� ��� �׽�Ʈ : [%12d]\n", vint);		//4byte
	printf("�Ǽ� ��� �׽�Ʈ : [%12.8f]\n", vfloat);	//4byte
	printf("���� ��� �׽�Ʈ : [%12e]\n", vlong);	//8
	printf("8���� ��� �׽�Ʈ : [%12o]\n", vint);	//8
	printf("16���� ��� �׽�Ʈ : [%12x]\n", vint);	//8
	printf("���� ��� �׽�Ʈ : [%c]\n", vchar);	//8
	printf("���ڿ� ��� �׽�Ʈ : [%c]\n", vchar+1);	//8


	scanf_s("%x %x %x %x",&vchar, &vint, &vlong, &vfloat);


	return 0;
	//*/
}

void test02(int a) //���ڿ��� ���� �迭
{
	char ca[] = "Hello"; //ca[0]: 'H' ca[4]:'o' ca[5]:'\0'
	for (int i = 0; i < 10; i++) //0~5
	{
		printf("ca[%d] : %c (%02x)\n",i, ca[i],ca[i]); //02�� ���������� ������ ��޵Ǵ� �ִ�? 127 7F+1 -> 80 -> -1
	}
	ca[2] -= 1;
	ca[3] -= 1;
	for (int i = 0; i < 10; i++) //0~5
	{
		printf("ca[%d] : %c (%02x)\n", i, ca[i], ca[i]); //02�� ���������� ������ ��޵Ǵ� �ִ�? 127 7F+1 -> 80 -> -1
	}
}


main()
{
	test01();
	//test02(1);
}