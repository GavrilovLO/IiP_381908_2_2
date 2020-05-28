#include"Header.h"
#include<stdlib.h>
using namespace std;
void Money::Input_money() {
	char c;
	cin >> rub >> c >> kop;

}
void Money::Output_money()
{
	int g = 0;
	if (kop > 10) {
		g = kop / 10;
		rub += g;
		kop = kop % 10;
	}

	if (kop > 1) {
		kop = kop * 10;
	}

	cout << rub << "rub" << "0" << kop << "kop" << endl;
}
Money::Money() {
	rub = 0, kop = 0;
}
Money::~Money() {
	rub = 0; kop = 0;
}
Money::Money() :res10(6.0), res11(44.13), res12(12.33)// ����������� �������������
{
}
int Money::Preobr(double  s) {
	rub = static_cast<int>(s);
	s = s - rub;
	kop = s * 100;
}
Money::Money(const Money &copy) :rub(copy.rub), kop(copy.kop)
{}

Money operator+(const Money& s, const Money& s1) {
	Money res;
	/*res.rub = s.rub + s1.rub;
	res.kop = s.kop + s1.kop;*/
	res.kop = s.rub * 100 + s.kop + s1.rub * 100 + s1.kop;
	/*int g = 0;
	if (res.kop > 100) {
	g = res.kop / 10;
	res.rub += g;
	res.kop = res.kop % 10;
	}*/
	res.rub = res.kop / 100;
	res.kop = res.kop % 100;
	return res;
}
Money operator*(const Money& s, int n)
{
	Money res;
	int c;
	//	cout << "1)bes 0" << endl;
	//	cout << "2)s 0 posle ,"<<endl;
	/*cin >> c;
	switch (c) {
	case 1:*/
	if (s.kop > 10) {

		res.kop = s.rub * 100 + s.kop;
		res.kop = res.kop* n;
		res.rub = res.kop / 100;
		res.kop = res.kop % 100;
	}
	//	break;
	//case 2:
	else {
		res.kop = s.rub * 1000 + s.kop;
		res.kop = res.kop* n;

		res.rub = res.kop / 1000;
		res.kop = res.kop / 10;
		res.kop = res.kop % 1000;

		//	break;
	}
	int g = 0;
	if (res.kop > 10) {
		g = res.kop / 10;
		res.rub += g;
		res.kop = res.kop % 10;
	}

	if (res.kop > 1) {
		res.kop = res.kop * 10;
	}
	return res;
}
Money operator ==(const Money&s, const Money& s1)
{
	Money res1;
	Money res2;
	res1.kop = s.rub * 100 + s.kop;
	res2.kop = s1.rub * 100 + s1.kop;
	if (res1.kop == res2.kop) {
		cout << "oni ravnri" << endl;

	}
	else {
		cout << "oni ne ravni" << endl;

	}


	return res1;
	return res2;
}
Money operator/(const Money& s, int n)
{


	Money res;
	int c;
	cout << "1)bes 0" << endl;
	cout << "2)s 0 posle ," << endl;
	cin >> c;
	switch (c) {
	case 1:


		res.kop = s.rub * 100 + s.kop;
		res.kop = res.kop / n;
		res.rub = res.kop / 100;
		res.kop = res.kop % 100;
		break;
	case 2:

		res.kop = s.rub * 1000 + s.kop;
		res.kop = res.kop / n;

		res.rub = res.kop / 1000;
		res.kop = res.kop / 10;
		res.kop = res.kop % 1000;

		break;
	}
	return res;
}



istream& operator>>(istream& is, Money &s)
{
	char c;
	is >> s.rub >> c >> s.kop;
	return is;
}
ostream& operator<<(ostream& os, Money &s)
{


	cout << s.rub << "rub " << s.kop << "kop" << endl;
	return os;
}
