#pragma once
#include<iostream>
#include<string>
using namespace std;









//W  �󲿷ֽ��������
class playerr
{
	string number;
	int time;
	int sum;

public:

	playerr( string s="-----", int a = 0, int b = 0) :number(s), time(a), sum(b) {}
	void display();
	string getnumber();
	int gettime();
	int getsum();
	void putnumber(string a);
	void puttime(int b);
	void putsum(int c);
	playerr(const playerr& a);
	void maindisplay();
	void setdisplay();
	void putgame();
	void delwdd();
	void delwd();
	void wchwrong();
	void chcs();
	void gaidc();
};   
void playerr::gaidc() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout <<" ******************************************      1�������޸ĵ���          *********************************************\n" << endl;
	cout << "******************************************        2����������            *********************************************\n" << endl;
	cout << "******************************************        3���������˵�          *********************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 ��ѡ��";
}

void playerr::chcs() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << "******************************************      1�����ص�������ѡ��      *********************************************\n" << endl;
	cout << "******************************************          2����������          *********************************************\n" << endl;
	cout << "******************************************         3���������˵�         *********************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 ��ѡ��";

}
void playerr::wchwrong() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout <<" *******************************************     1�����ز´���������       ********************************************\n" << endl;
	cout << "*******************************************         2����������           ********************************************\n" << endl;
	cout << "*******************************************         3���������˵�         ********************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 ��ѡ��";

}
void playerr::delwd() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << "**********************************************   1������ɾ������    **************************************************\n" << endl;
	cout << "**********************************************     2����������      **************************************************\n" << endl;
	cout << "**********************************************    3���������˵�     **************************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 ��ѡ��";
}

void playerr::delwdd() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout <<"***********************************************   1���������ӵ���    **************************************************\n" << endl;
	cout <<"***********************************************    2����������       **************************************************\n" << endl;
	cout <<"***********************************************   3���������˵�      **************************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 ��ѡ��";

}
void playerr::putgame() {
	cout << endl << endl;
	cout << "******************************************        1�����¿�ʼ            *********************************************" << endl << endl;
	cout << "******************************************       2���������˵�           *********************************************" << endl << endl;
	cout << "                                                 ��ѡ��";

}
/*���������*/
void playerr::maindisplay() {
	cout << "TIP:��������Ų����س�����ѡ��" << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << "-------------------------------------------------------�µ�����Ϸ-------------------------------------------------------" << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << "************************************************       1����ʼ��Ϸ      ************************************************" << endl;
	cout << endl << endl;
	cout << "************************************************       2���鿴����      ************************************************" << endl;
	cout << endl << endl;
	cout << "************************************************       3����Ϸ����      ************************************************" << endl;
	cout << endl << endl;
	cout << "************************************************       4���˳���Ϸ      ************************************************" << endl;
	cout << endl << endl << endl;
	cout << "                                                         ��ѡ��";

}

/*������ý���*/
void playerr::setdisplay() {
	cout << "TIP:��������Ų����س�����ѡ��" << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << "---------------------------------------------------------����-----------------------------------------------------------" << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << "****************************************       1��ÿ�βµĵ�����������      ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************         2�������´���������        ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************             3�����ӵ���            ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************             4���޸ĵ���            ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************             5��ɾ������            ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************             6���������˵�          ********************************************" << endl;
	cout << endl;
	cout << "                                                         ��ѡ��";

}

playerr::playerr(const playerr& a) {
	number = a.number;
	time = a.time;
	sum = a.sum;
};
void playerr::display()
{

	cout << "���ʿ���ܵ�����:" << ends << sum << endl;
}
string playerr::getnumber() {
	return number;
}
int playerr::gettime() {
	return time;
}
int playerr::getsum() {
	return sum;
}
void playerr::putnumber(string a) {
	number = a;
}
void playerr::puttime(int b) {
	time = b;
}
void playerr::putsum(int c) {
	sum = c;
}