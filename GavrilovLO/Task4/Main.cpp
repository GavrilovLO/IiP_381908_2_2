#include"Header.h"
#include<stdlib.h>
#include <cassert>
#include <fstream>
#include<locale.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	int c;
	Shagomer a;
	Shag b;
	hz b1;
met1:
	printf("\n");
	printf("1)����� ����������\n");
	printf("2)��������� ���������� �� ��������\n");
	printf("3)������� ���-�� �����\n");
	printf("4)���������� ����������\n");
	printf("5)����� � ����\n");
	printf("6)�� �����\n");
	scanf_s("%d", &c);
	switch (c)
	{
	case 1:
		cin >> a;
		//�������� �������� �����
		/*	ifstream fin;
		fin.open("gg20.txt", ios::app); ��������
		fin >> a;*/
		printf("\n");

		goto met1;
	case 2:
		cin >> b;
		b.info(a);
		goto met1;
	case 3:
		a.srednee();
		goto met1;
	case 4:
		a.maximym();
		goto met1;
	case 5:
		cout << a;
		goto met1;
	case 6:
		cin >> b1;
		goto met1;
	}

	getchar();
	getchar();
}