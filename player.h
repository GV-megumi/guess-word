#pragma once
#include <iostream>
using namespace std;
#include<string>
#include<iomanip>

//W玩家排名类
class player
{
public:

	player(string s, int a, int b, int c );
	void display();
	string getname();
	int getrank();
	int getscore();
	void putname(string a);
	void putrank(int b);
	void putscore(int c);
	player(const player& a);
	int gettime();
	void puttime(int a);
private:
	string name;
	int rank;
	int score;
	int time;
};
player::player(string s="name", int a=0, int b=0,int c=0) :name(s), rank(a), score(b),time(c) {}

player::player(const player& a) {
	name = a.name;
	rank = a.rank;
	score = a.score;
	time = a.time;
};

void player::display()
{
	cout << "大神的名字:"<< ends << name <<setw(20)<<'\t' << "排名:" << ends << rank << setw(20) << '\t' << "成绩:" << ends << score <<  setw(20) << '\t' << "用时:" << ends << time<< endl;
}

string player::getname() {
	return name;
}

int player::getrank() {
	return rank;
}

int player::getscore() {
	return score;
}

void player::putname(string a) {

	name = a;

}

void player::putrank(int b) {
	rank = b;
}

void player::putscore(int c) {
	score = c;
}
int player::gettime() {
	return time;
}

void player::puttime(int a) {

	time = a;

}