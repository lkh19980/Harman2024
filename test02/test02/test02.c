#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test01(void);
void test02(int a); //Prototype of function
void test03(int a);
void mem_Dump(char* p, int len);
void Copy(char* pl, char* p2);

void test06();

//commit test

//void* pf


int test01(void)
{
	char* str[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
	//string pointer array
	int n = 1;
	char c;
	while (n)
	{
		printf(">");
		c = getch();
		//int m = c - 0x30;
		if (0x30 <= c && c <= 0x39) // ���� ������ ��� �Ұ���
		{
			printf("%c : %s\n", c, str[c - '0']);//str[n][m]
		}
		///*
		else if ((c | 0x20) == 'q')//���ǹ� �� ���� �պκ� ��Ʈ ���� �� 0�� �ƴϿ��� ����
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
	for (int i = 0; i < 6; i++) //0~5
	{
		printf("ca[%d] : %c (%02x) [%08x]\n", i, ca[i], ca[i], ca + i); //02�� ���������� ������ ��޵Ǵ� �ִ�? 127 7F+1 -> 80 -> -1
	}
	int ia[] = { 10,20,30,40,50 };
	for (int i = 0; i < 6; i++) //0~5
	{
		printf("ia[%d] : %d (%08x) [%08x]\n", i, ia[i], ia[i], ia + i); //02�� ���������� ������ ��޵Ǵ� �ִ�? 127 7F+1 -> 80 -> -1
	}
	int ia2[2][3] = { 10,20,30,40,50,60 };
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
		printf("ca[%d] : %c (%02x)\n",i, ca[i],ca[i]); //02�� ���������� ������ ��޵Ǵ� �ִ�? 127 7F+1 -> 80 -> -1
	}
	ca[2] -= 1;
	ca[3] -= 1;
	for (int i = 0; i < 10; i++) //0~5
	{
		printf("ca[%d] : %c (%02x)\n", i, ca[i], ca[i]); //02�� ���������� ������ ��޵Ǵ� �ִ�? 127 7F+1 -> 80 -> -1
	}
	//*/
}

void test03(int a)
{
	char buf[100];	// ���� �޸� ���� Ȯ��
	char* pBuf;// = buf;		// ���� �޸� �������� ��� ��ġ (���� �߻� ����)
	unsigned int addr;		// ��� ��ġ ������ ���� �Էº���(�ּ�)
	char kBuf[100];	// ��� ���ڿ� �Է°���
	//printf("Ȯ�ο� ����");
	printf("���������� �ּҴ� %u[%x]�Դϴ�.\n", (unsigned int) buf, buf);
	printf("�Է��� ������ �ּҸ� �Է��ϼ��� : ");
	scanf("%d", &addr);	// �������� �ּ� ����
	pBuf = buf + addr;
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", kBuf);
	//strcpy(pBuf, "Hello World!");
	//strcpy(pBuf, kBuf);	//���ڿ� ����
	Copy(pBuf, kBuf);
	mem_Dump(buf, 100);
}
//======�Լ��� ���� ======
// Prototype : void Copy(char* p1, char* p2);
//�Լ��� : Copy
//��� : p2 ���ڿ��� �μ��� �޾Ƽ� p1 ���ڿ��� ����
//�μ� : Ÿ�ٹ��ڿ�, �ҽ����ڿ� - char *p1, char *p2
//���ϰ� : void
void Copy(char* p1, char* p2)
{
	while (*p2) *p1++ = *p2++; *p1 = 0;// NULL�ƴϸ� p1�� ���� p2�� ���� �ִ´�.
}

void mem_Dump(char* p, int len)
{
	for (int i = 0; i < len; i++)	// �������� �޸� ����
	{
		if (i % 16 == 0) printf("\n%08x", p);
		if (i % 8 == 0) printf("\t");
		printf("%02x ", (unsigned char)*p++);

	}
}

void test04()
{
	char* arr[10] = { "aaaaa", "bbbb", "ccc", "dd", "eeeee" };
	char buf[100];
	printf("[6] "); scanf("%s", buf);
	arr[6] = buf;
	printf("[7] "); scanf("%s", buf + 50);
	arr[7] = buf + 50;
	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] : 0x%08x %s\n", i, arr[i], arr[i]);
	}
}


void test05()
{
	struct stTest
	{
		int i; // 4byte
		float a; //4byte
		char name[20]; //8byte
	} s1 = { 1, 3.14, "��õ���� �����" };
	//s1.name = "��õ���� �����";
	struct stTest s2 = s1;

	printf("sizeof(struct stTest) : %d\n", sizeof(struct stTest));
	
	printf("struct stTest s1 : %d %f  %s\n", s1.i, s1.a, s1.name);
	printf("struct stTest s2 : %d %f  %s\n", s2.i, s2.a, s2.name);
}


void test06()
{
	char* s1;// = "Good";//const cannot edit it's not variable
	char* s2;// = "afternoon";
	char buf[100];// = { 0, };//default cc

	s1 = buf;
	s2 = buf + 50;
	scanf("%s", s1);
	scanf("%s", s2);


	// strcat Test
	printf("s1 : %s(%d)\n", s1, strlen(s1));
	printf("s2 : %s(%d)\n", s2, strlen(s2));
	strcpy(buf, s1);
	strcat(buf, s2);
	printf("strcat(s1,s2) : %s", buf);
	//sprintf(buf, "strcat(s1,s2) : %s%s", s1, s2);
	//output->buf, "strcat(s1,s2) : result", %s value
	//printf("%s", buf);
}


void test07(void)
{
	char buf[100];
	printf("���ڿ��� �Է��ϼ��� : "); scanf("%s", buf);
	printf("�Է��� ���ڿ��� ���̴�  [%d] �Դϴ�.\n", length(buf));
}

void test08(void)
{
	char buf[100];
	printf("���ڿ��� �Է��ϼ��� : "); scanf("%s", buf);
	char buf2[100];
	printf("���ڿ��� �Է��ϼ��� : "); scanf("%s", buf2);
	printf("�Է��� ���ڿ��� �� �����  [%d]�Դϴ�.\n", Compare(buf, buf2));
}
//======�Լ��� ���� ======
// Prototype : int Length(char* str);
//�Լ��� : Length
//��� : ���ڿ��� �μ��� �޾Ƽ� ���ڿ��� ���̸� ��ȯ
//�μ� : ���ڿ� - char *str
//���ϰ� : ���ڿ��� ���� - int len
int length(char* str)
{
	int len = 0;//��ȯ�� ���ڿ��� ����
	while (1)
	{
		if (str[len] == NULL) break;// ���ڿ��� ��(NULL)�� ���������� ����
		//if (*(str + len) == NULL) break;
		len++;

	}
	return len;
}

int Length(char* str)
{
	char buf[100];
	printf("���ڿ� �Է� \n >");
	scanf("%s", buf);
	int i = 0;
	while (buf[i++]);//NULL->i++ -> loop exit -> i==len+1
	//while (str[i++]);
	//while (str[len])len++;
	printf("�ش� ���ڿ��� ���̴� %d �Դϴ�.", i - 1);
	return i - 1;
}
//======�Լ��� ���� ======
// Prototype : int Compare(char* str1,char* str2);
//�Լ��� : Compare
//��� : �� ���ڿ��� �μ��� �޾Ƽ� �� ���ڿ��� ũ�⸦ ��
//�μ� : ���ڿ� - char *str1, char *str2
//���ϰ� : ���ڿ��� ���� - int comp
int Compare(char* str1, char* str2)
{
	int comp = NULL;
	int i = 0;

	//while (*p2) *p1++ = *p2++; *p1 = 0;
	while (1)
	{
		//STR1 or STR2 is NULL
		if (*str1 == NULL || *str2 == NULL) break;

		comp = *str1++ - *str2++;
		//difference occured
		if (comp != 0) break;


	}
	//differ
	if (comp != 0) return comp / abs(comp);
	//STR1 == NULL
	if (*str1 == NULL && *str2 != NULL) return -1;
	//STR2 == NULL
	if (*str1 != NULL && *str2 == NULL) return 1;
	//same
	return comp;

	/*
	�ݺ���
	{
		���ǹ� = ���
		����
			���ǹ� > break;
			���ǹ� < break;

		if NULL str1 return -1
		if NULL str2 return 1

	}*/
	
	//if (*str1 == NULL && comp != 0) return -1;
	//if (*str2 == NULL && comp != 0) return 1;
	//if (*str1 == NULL && *str2 == NULL) return 0;
	//if (*str1) return comp;
	//else if(*str2) return
	//���� ��
	/*
	while (str1[i] != NULL && str2[i] != NULL && comp ==0 )
	{
		comp = str1[i++] ^ str2[i++];
		
	}
	*/
	
}



main()
{
	//test01();
	//test02(1);
	//test03(1);
	//test06();
	///*
	int n;
	char* s1 = "testasd;lflakjf;alkjsldf;jasd;fj;ask;asdkl;j";
	
	void* pF[] = { test01, test02, test03, test04, test05, test06, test07, test08};
	void (*pFunc)();

	
	while (1)
	{
		printf("\n\n\n");
		printf("1. ����Ű�� ���� ���ڿ� ��� �̼�\n");
		printf("2. ���ڿ��� ���ڹ迭\n");
		printf("3. �������� ��ġ ����\n");
		printf("4. �����͸� �̿��� ���ڿ� ����� �Լ�\n");
		printf("5. ����ü �׽�Ʈ\n");
		printf("6. �⺻�Լ� �׽�Ʈ\n");
		printf("7. Length �Լ� �׽�Ʈ\n");
		printf("8. Compare �Լ� �׽�Ʈ\n");
		printf("0. �� ��\n");
		printf("---------------------\n ���� ");
		scanf("%d", &n);
		if (n == 0) return;
		pFunc = pF[n - 1];
		/*
		if (n == 7)
		{
			printf("�ش� ���ڿ��� %d�� �����Դϴ�.", Length(s1));
			continue;
		}
		*/
		
		pFunc();
	}
	//*/
	
}
