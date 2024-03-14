#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int test01(void);
void test02(int a); //Prototype of function
void test03(int a);
void mem_Dump(char* p, int len);
void Copy(char* pl, char* p2);

//commit test



int test01(void)
{	
	char* str[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	//string pointer array
	int n = 1;
	char c;
	while (n)
	{
		printf(">");
		c = getch();
		//int m = c - 0x30;
		if (0x30 <= c && c <= 0x39) // 동시 연산자 사용 불가능
		{
			printf("%c : %s\n", c, str[c - '0']);//str[n][m]
		}
		///*
		else if ((c | 0x20) == 'q')//조건문 잘 쓰기 앞부분 비트 연산 후 0이 아니여서 실행
		{
			//printf("q");
			n = 0;
		}
		else 
			continue;
		//*/
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
	printf("숫자 키를 입력하세요. 해당하는 영단어를 알려드리겠습니다.\n");
	while (1) 
	{
		int n = 0;
		char c = getch(); //no echo :키값을 출력하지 않고 반환 string 받아들임?
		//char c1 = getchar() //[enter] 필요. 엔터값이 다음 입력에 출력됨 getchar
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
	printf("정수 출력 테스트 : [%12d]\n", 10);		//4byte
	printf("실수 출력 테스트 : [%12.8f]\n", 3.14159265743816);	//4byte
	printf("긴 정수 출력 테스트 : [%d]\n", 10);	//4byte = 32bit = 1111 1111 1111 1111 1111 1111 1111 1111 = 4G 40억
	printf("긴 실수 출력 테스트 : [%12.8lf]\n", 3.14159265743816);	//8
	printf("지수 출력 테스트 : [%12e]\n", 1234567890);	//8

	printf("8진수 출력 테스트 : [%12o]\n", 1234567890);	//8
	printf("16진수 출력 테스트 : [%12x]\n", 1234567890);	//8
	printf("문자 출력 테스트 : [%c]\n", 50);	//8
	printf("문자열 출력 테스트 : [%s]\n", "\n안녕\n");	//8
	

	printf("정수 출력 테스트 : [%12d]\n", vint);		//4byte
	printf("실수 출력 테스트 : [%12.8f]\n", vfloat);	//4byte
	printf("지수 출력 테스트 : [%12e]\n", vlong);	//8
	printf("8진수 출력 테스트 : [%12o]\n", vint);	//8
	printf("16진수 출력 테스트 : [%12x]\n", vint);	//8
	printf("문자 출력 테스트 : [%c]\n", vchar);	//8
	printf("문자열 출력 테스트 : [%c]\n", vchar+1);	//8


	scanf_s("%x %x %x %x",&vchar, &vint, &vlong, &vfloat);


	return 0;
	//*/
}

void test02(int a) //문자열과 문자 배열
{
	char ca[] = "Hello"; //ca[0]: 'H' ca[4]:'o' ca[5]:'\0'
	for (int i = 0; i < 6; i++) //0~5
	{
		printf("ca[%d] : %c (%02x) [%08x]\n", i, ca[i], ca[i], ca +i); //02로 지정했으나 정수로 취급되는 최대? 127 7F+1 -> 80 -> -1
	}
	int ia[] = { 10,20,30,40,50 };
	for (int i = 0; i < 6; i++) //0~5
	{
		printf("ia[%d] : %d (%08x) [%08x]\n", i, ia[i], ia[i], ia + i); //02로 지정했으나 정수로 취급되는 최대? 127 7F+1 -> 80 -> -1
	}
	int ia2[2][3] = {10,20,30,40,50,60};
	for (int y = 0; y < 2; y++) //0~2
	{
		for (int x = 0; x < 3; x++) 
		{
			printf("ia2[%d][%d] : %d [%08x]\n", y, x, ia2[y][x], ia2[y]);//ia2[y] == ia2 +y
		}
	}
	//int ia[] = { 10,20,30,40,50,60 };

	/*
	for (int i = 0; i < 10; i++) //0~5
	{
		printf("ca[%d] : %c (%02x)\n",i, ca[i],ca[i]); //02로 지정했으나 정수로 취급되는 최대? 127 7F+1 -> 80 -> -1
	}
	ca[2] -= 1;
	ca[3] -= 1;
	for (int i = 0; i < 10; i++) //0~5
	{
		printf("ca[%d] : %c (%02x)\n", i, ca[i], ca[i]); //02로 지정했으나 정수로 취급되는 최대? 127 7F+1 -> 80 -> -1
	}
	//*/
}

void test03(int a) 
{
	char buf[100];	// 안전 메모리 공간 확보
	char* pBuf;		// 안전 메모리 공간중의 출력 위치 (에러 발생 방지)
	unsigned int addr;		// 출력 위치 지정을 위한 입력변수(주소)
	char kBuf[100];	// 출력 문자열 입력공간
	printf("확인용 문구");
	printf("안전공간의 주소는 %d[%x] + 100 입니다.\n", (unsigned int)buf, buf);
	printf("입력을 시작할 주소를 입력하세요 : ");
	scanf("%d", &addr);	// 안전공간 주소 참고
	pBuf = addr;
	printf("문자열을 입력하세요 : ");
	scanf("%s", kBuf);
	//strcpy(pBuf, "Hello World!");
	//strcpy(pBuf, kBuf);	//문자열 복사
	Copy(pBuf, kBuf);
	mem_Dump(buf, 100);
}

void Copy(char* p1, char* p2)
{
	while (*p2) *p1++ = *p2++; *p1 = 0;// NULL아니면 p1의 값에 p2의 값을 넣는다.
}

void mem_Dump(char *p,int len) 
{
	for (int i = 0; i < len; i++)	// 안전공간 메모리 덤프
	{
		if (i % 16 == 0) printf("\n%08x", p + i);
		if (i % 8 == 0) printf("\t");
		printf("%02x ", (unsigned char)*p);
		
	}
}


main()
{
	//test01();
	//test02(1);
	test03(1);
}
