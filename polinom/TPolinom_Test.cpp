#include <iostream>
#include "TList.h"
#include "TPolinom.h"
#include <vector>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");


	cout << "������ 2 ��������: " << endl;

	vector<int> a = { 1,111,2,222,3,333 };
	vector<int> b = { 1,234,5,666,4,456 };
	TPolinom p1(a);
	TPolinom p3(p1);//�����
	TPolinom p2(b);
	bool flag = (p1 == p3);
	cout << "������� 1:" << endl;
	cout << p1.ToString() << endl;
	cout << "������� 2" << endl;
	cout << p2.ToString();

	cout << endl << "������� 3 - ����� �������� 1: " << endl;
	cout << "������� 3:" << endl;
	cout << p3.ToString()<< endl;

	cout << "�������� �� ���������: " << endl;
	cout << "������� 1 == ������� 3?  " ;
	cout << flag<< endl;
	flag = (p1 == p2);
	cout << "������� 1 == ������� 2?  ";
	cout << flag; 

	p3 = p2;
	cout << endl;

	cout << "������������: " << endl;
	cout << "������� 3 = ������� 2" << endl;
	cout << p3.ToString();

	TPolinom p4(a);
	p4 = p1.AddPolinom(p2);
	cout << endl;
	cout << "� �������� 1 ������� ������� 2" << endl;
	cout << p4.ToString();

	cout << endl;
	cout << "�������� ���������: ";
	TPolinom p5(a);
	p5 = p1 + p2;
	cout << endl;
	cout << "������� 1 + ������� 2" << endl;
	cout << p5.ToString();


	TMonom mon(1, 236);
	p3.AddMonom(mon);
	cout << endl;
	cout << "� �������� 3 ������� ����� (1x^2y^3z^6)" << endl;
	cout << p3.ToString();


	vector<int> a1 = { 1,111, 5,111, 1,234, 2,345, 4,567 };
	TPolinom polinom(a1);
	cout << endl;
	cout << "������� 4:" << endl;
	cout << polinom.ToString();
	cout << endl;
	cout << "�������� ����� �������� 4: ";
	cout << polinom.GetLength();

	cout << endl;
	cout << "��������� �������� 4 �� 3: "<<endl;
	TPolinom polinom1(a1);
	polinom1 = polinom * 3;
	cout << polinom1.ToString();



}