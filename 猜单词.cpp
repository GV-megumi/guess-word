#include <iostream>
#include<fstream>
#include<windows.h>
#include<string>
#include<direct.h>
#include<io.h>
#include<iomanip>
#include<time.h>
#include <Mmsystem.h>               //timeGetTime()    
#pragma comment(lib, "Winmm.lib")   //timeGetTime() 
using namespace std;






//W  大部分界面输出类
class playerr
{
	string number;
	int time;
	int sum;

public:

	playerr(string s = "-----", int a = 0, int b = 0) :number(s), time(a), sum(b) {}
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
	cout << " ******************************************      1、继续修改单词          *********************************************\n" << endl;
	cout << "******************************************        2、返回设置            *********************************************\n" << endl;
	cout << "******************************************        3、返回主菜单          *********************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 请选择：";
}

void playerr::chcs() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << "******************************************      1、返回单词数量选择      *********************************************\n" << endl;
	cout << "******************************************          2、返回设置          *********************************************\n" << endl;
	cout << "******************************************         3、返回主菜单         *********************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 请选择：";

}
void playerr::wchwrong() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << " *******************************************     1、返回猜错次数设置       ********************************************\n" << endl;
	cout << "*******************************************         2、返回设置           ********************************************\n" << endl;
	cout << "*******************************************         3、返回主菜单         ********************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 请选择：";

}
void playerr::delwd() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << "**********************************************   1、继续删除单词    **************************************************\n" << endl;
	cout << "**********************************************     2、返回设置      **************************************************\n" << endl;
	cout << "**********************************************    3、返回主菜单     **************************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 请选择：";
}

void playerr::delwdd() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << "***********************************************   1、继续添加单词    **************************************************\n" << endl;
	cout << "***********************************************    2、返回设置       **************************************************\n" << endl;
	cout << "***********************************************   3、返回主菜单      **************************************************\n" << endl;
	cout << endl << endl;
	cout << "                                                 请选择：";

}
void playerr::putgame() {
	cout << endl << endl;
	cout << "******************************************        1、重新开始            *********************************************" << endl << endl;
	cout << "******************************************       2、返回主菜单           *********************************************" << endl << endl;
	cout << "                                                 请选择：";

}
/*输出主界面*/
void playerr::maindisplay() {
	cout << "TIP:请输入序号并按回车键以选择" << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << "-------------------------------------------------------猜单词游戏-------------------------------------------------------" << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << "************************************************       1、开始游戏      ************************************************" << endl;
	cout << endl << endl;
	cout << "************************************************       2、查看排名      ************************************************" << endl;
	cout << endl << endl;
	cout << "************************************************       3、游戏设置      ************************************************" << endl;
	cout << endl << endl;
	cout << "************************************************       4、退出游戏      ************************************************" << endl;
	cout << endl << endl << endl;
	cout << "                                                         请选择：";

}

/*输出设置界面*/
void playerr::setdisplay() {
	cout << "TIP:请输入序号并按回车键以选择" << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << "---------------------------------------------------------设置-----------------------------------------------------------" << endl;
	cout << endl << endl;
	cout << endl << endl;
	cout << "****************************************       1、每次猜的单词数量设置      ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************         2、允许猜错次数设置        ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************             3、添加单词            ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************             4、修改单词            ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************             5、删除单词            ********************************************" << endl;
	cout << endl << endl;
	cout << "****************************************             6、返回主菜单          ********************************************" << endl;
	cout << endl;
	cout << "                                                         请选择：";

}

playerr::playerr(const playerr& a) {
	number = a.number;
	time = a.time;
	sum = a.sum;
};
void playerr::display()
{

	cout << "单词库的总单词量:" << ends << sum << endl;
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


//W玩家排名类
class player
{
public:

	player(string s, int a, int b, int c);
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
player::player(string s = "name", int a = 0, int b = 0, int c = 0) :name(s), rank(a), score(b), time(c) {}

player::player(const player& a) {
	name = a.name;
	rank = a.rank;
	score = a.score;
	time = a.time;
};

void player::display()
{
	cout << "大神的名字:" << ends << name << setw(20) << '\t' << "排名:" << ends << rank << setw(20) << '\t' << "成绩:" << ends << score << setw(20) << '\t' << "用时:" << ends << time << endl;
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




//  创建文件夹           D                                     完成
void createfolder(const char* p) {
	for (int i = 0; p[i] != '\0'; i++) {
		int j;
		char z[100];
		if (p[i] == '\\') {
			j = i - 1;
			int m;
			for (m = 0; m <= j; m++) {
				z[m] = p[m];
			}
			z[m] = '\0';
			if (_access(z, 0) == -1)
				_mkdir(z);
		}

	}
	if (_access(p, 0) == -1)
		_mkdir(p);


}



void putset(int& sa, char s[1000][20]);
void adwd(char ad[20], int& sa, char s[1000][20]);
void adwdd(int& sa, char s[1000][20]);
void game(char s[1000][20], int sa);
int cai(char s[1000][20], int sa);
void putrank(int& sa, char s[1000][20]);
void readrank(player num[5]);
void writewd(char s[1000][20], int sa);
void delwd(int& sa, char s[1000][20]);
void chwrong(int& sa, char s[1000][20]);
void chcishu(int& sa, char s[1000][20]);
void gaidanci(char s[1000][20], int sa);
void putmain(int& sa, char s[1000][20]);




//退出                                                     完成
void exittt(int& sa, char s[1000][20]) {
	for (int i = 0; i < 100; i++) {
		if (MessageBox(0, L"真的要退出吗？", L"退出游戏", MB_YESNO) == 7) {
			system("cls");
			putmain(sa, s);
			break;

		}
			

		if (i==10)
			MessageBox(0, L"建议直接按右上角的小叉叉\no( ❛ᴗ❛ )o", L"退出游戏", MB_YESNO);

	}

}
//写入单词库                                              完成
void mmmmmmmmmm() {
	if (_access("C:\\worddd", 0) == -1) {
		createfolder("C:\\worddd");
		char s[1000][20] = { "profitable","decade","expel","manual","symptom","comprehensive","deliver","soar","trim","curb","concession",
			"intimidate","discipline","literate","accelerat","simplify","ultimate","blessing","agony","weigh","vow","tragedy","tremendous",
			"minimize","generate","acquisition","detect","evolve","elaborate","mechanism","significant","appraise","radiate","consciousness",
			"anticipate","necessarily","strategy","slump","biological","instinctive","evaluate","retrieve","sensible","ridiculous","corporate",
			"disgusted","lust","frustrate","ethics","insight","morality","flourish","faculty","manipulate","reinforce","scandal","motive","constrain",
			"boom","fertile","priority","attribute","corruption","tendency","refrain","well","implement","collision","combat","productivity","headquarter",
			"fascinating","initiate","academic","eventually","orientation","capitalists","exaggeration","essentially","originate","give","Depression",
			"materialism","breed","condition","executive","eliminate","stability","erode","disposable","stem","contradiction","multiply",
			"fulfillment","extravagant","obesity","pursuit","guarantee","necessary","nlation","uneven","misery","conflict","release","asset",
			"elevate","conform","self","rest","exert","record","low","esteem","masculine","adolescent","norm","stereotype","campaign","maturity",
			"trend","denial","prevailing","incidentally","accidentally","exile","conclusive","evacuate","displace","convention","negotiation",
			"conserve","alternative","sacrifice","emission","diversity","convert","recycle","incentive","derive","compromise","cozy","lounge",
			"consultant","permanently","competitive","skeptically","vanish","abuse","meditation","sensational","career","defy","model","exclude",
			"winner","corporate","flexible","cope","deserve","transfer","representative","courtesy","respectable","embarrassed","destine","bankruptcy",
			"expectancy","solidarity","insulate","prospect","lifestyle","integration","reciprocal","inflict","obstacle","allocate","barrier","ignite",
			"preach","contend","compatible","successive","deficit","substantially","transplantation","donate","alien","catastrophe","dynamic","nuisance",
			"eligible","appealing","designate","toxic","enforce","sector","explicitly","release","depiction","length"};
		writewd(s, 200);

	}


}
//主界面 GD                                                        完成
void putmain(int& sa, char s[1000][20]) {
	char a;/*用户操作数*/
	playerr asdf;
	asdf.maindisplay();
	do {
		
		cin >> a;                                   //用户输入操作对象
		if (a != '1' && a != '2' && a != '3' && a != '4') {
			MessageBox(0, L"请重新输入序号", L"错误", MB_OK);
			system("cls");
			putmain(sa,s);
			break;
		}
	} while (a != '1' && a != '2' && a != '3' && a != '4');


	if (a == '1') {                                                           //根据操作数做对应操作
		game(s,sa);//游戏函数
	}

	if (a == '2') {
		putrank(sa,s);//查看排名函数
	}
	if (a == '3') {
		system("cls");
		putset(sa,s);//设置函数
	}
	if (a == '4') {
		exittt(sa, s);//设置函数
	}
}

//设置界面 GD                                                  完成
void putset(int& sa, char s[1000][20]) {
	char b;
	//储存用户输入操作数
	playerr asdf;
	asdf.setdisplay();
	do {
		cin >> b;                                      //用户输入操作对象

		if (b <= '0' || b > '6') {
			MessageBox(0, L"请重新输入序号", L"错误", MB_OK);
			system("cls");
			putset(sa,s);
			break;
		}
	} while (b != '1' && b != '2' && b != '3' && b != '4' && b != '5' && b != '6');


	if (b == '1') {
		system("cls");//根据操作数做对应操作
		chcishu(sa,s);//
	}

	if (b == '2') {
		system("cls");
		chwrong(sa, s);//
	}
	if (b == '3') {
		adwdd(sa,s);
		//
	}
	if (b == '4') {
		system("cls");
		gaidanci(s, sa);//
	}
	if (b == '5') {
		system("cls");
		delwd(sa, s);//
	}
	if (b == '6') {
		system("cls");
		putmain(sa, s);
	
	}
}

//排名界面 GD                                            完成
void putrank(int& sa, char s[1000][20]) {
	player num[5];
	readrank(num);
	cout << endl << endl << endl << endl;
	cout << "----------------------------------------------------------大神榜--------------------------------------------------------";
	cout << endl << endl << endl;
	for (int i = 0; i < 5; i++) {
		cout << endl << endl;
		num[i].display();
	}
	cout << endl << endl << endl << "返回上一级请按1+回车";
	int qwer;
	do{
		cin >> qwer;
		if (qwer != 1) {
			MessageBox(0, L"请按1\n请按1\n请按1", L"错误", MB_OK);
			system("cls");
			putrank(sa, s);
			break;
		}
		if (qwer == 1) {
			system("cls");
			putmain(sa, s);
			break;
		}
	} while (1);
}







/*加载单词D                                        完成*/ 
void mkwd(char s[1000][20],int &sa) {
	fstream danci("C:\\worddd\\danci.txt");
	cout << "正在加载单词" << endl;
	if (!danci) {
		int qw;
		cout << "文件不存在" << endl;
		cin >> qw;
	}
	else {
		while (!danci.eof()) {
			danci >> s[sa];
			sa++;


		}
		cout << "加载完成" << endl;
		system("cls");

	}
	danci.close();
	sa--;
}



/*读取排名D                                            完成*/
void readrank(player num[5]) {
	cout << "正在加载排名" << endl;
	if (_access("C:\\worddd\\rank", 0) == -1) {
		createfolder("C:\\worddd\\rank");

		ofstream playerrank("C:\\worddd\\rank\\001.txt");
		playerrank << 1 << " " << "张前森" << " " << 3<<" "<<0;
		playerrank.close();
		playerrank.open("C:\\worddd\\rank\\002.txt", ios::out);
		playerrank << 2 << " " << "王一帆" << " " << 2 << " " << 0;
		playerrank.close();
		playerrank.open("C:\\worddd\\rank\\003.txt", ios::out);
		playerrank << 3 << " " << "丁盛" << " " << 1<<" " << 0;
		playerrank.close();
		playerrank.open("C:\\worddd\\rank\\004.txt", ios::out);
		playerrank << 4 << " " << "高巍锋" << " " << 0 << " " << 0;
		playerrank.close();
		playerrank.open("C:\\worddd\\rank\\005.txt", ios::out);
		playerrank << 5 << " " << "------" << " " << 0 << " " << 0;
		playerrank.close();
	}

	ifstream pla;
	string a;
	int b, c, d;

	pla.open("C:\\worddd\\rank\\001.txt", ios::in);
	pla >> b >> a >> c>>d;
	num[0].putname(a);
	num[0].putrank(b);
	num[0].putscore(c);
	num[0].puttime(d);
	pla.close();

	pla.open("C:\\worddd\\rank\\002.txt", ios::in);
	pla >> b >> a >> c >> d;
	num[1].putname(a);
	num[1].putrank(b);
	num[1].putscore(c);
	num[1].puttime(d);
	pla.close();

	pla.open("C:\\worddd\\rank\\003.txt", ios::in);
	pla >> b >> a >> c >> d;
	num[2].putname(a);
	num[2].putrank(b);
	num[2].putscore(c);
	num[2].puttime(d);
	pla.close();

	pla.open("C:\\worddd\\rank\\004.txt", ios::in);
	pla >> b >> a >> c >> d;
	num[3].putname(a);
	num[3].putrank(b);
	num[3].putscore(c);
	num[3].puttime(d);
	pla.close();

	pla.open("C:\\worddd\\rank\\005.txt", ios::in);
	pla >> b >> a >> c >> d;
	num[4].putname(a);
	num[4].putrank(b);
	num[4].putscore(c);
	num[4].puttime(d);
	pla.close();
	cout << "加载完成" << endl;
	system("cls");



}


/*更新排名D                                      完成          */
int updaterank(player num[5], int scor, int time) {
	int i, mnb = 1;
	player pla;
	pla.putscore(scor);
	for (i = 0; i < 5; i++) {
		if (scor >= num[i].getscore()) {
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                              您已经超过第" << ends << i + 1 << ends << "名的分数，请留下你的大名" << endl;
			cout << "                                                               ";
			string na;
			cin >> na;
			pla.putname(na);
			pla.puttime(time);
			for (int j = 4; j > i; j--) {
				num[j] = num[j - 1];
			}
			num[i] = pla;
			ofstream playerrank("C:\\worddd\\rank\\001.txt");
			playerrank << 1 << " " << num[0].getname() << " " << num[0].getscore() << " " << num[0].gettime();
			playerrank.close();
			playerrank.open("C:\\worddd\\rank\\002.txt", ios::out);
			playerrank << 2 << " " << num[1].getname() << " " << num[1].getscore() << " " << num[1].gettime();
			playerrank.close();
			playerrank.open("C:\\worddd\\rank\\003.txt", ios::out);
			playerrank << 3 << " " << num[2].getname() << " " << num[2].getscore() << " " << num[2].gettime();
			playerrank.close();
			playerrank.open("C:\\worddd\\rank\\004.txt", ios::out);
			playerrank << 4 << " " << num[3].getname() << " " << num[3].getscore() << " " << num[3].gettime();
			playerrank.close();
			playerrank.open("C:\\worddd\\rank\\005.txt", ios::out);
			playerrank << 5 << " " << num[4].getname() << " " << num[4].getscore() << " " << num[4].gettime();
			playerrank.close();
			readrank(num);
			mnb = 0;
			break;
		}

	}


	return mnb;
}

/*添加单词DZ                                         完成*/
void adwdd(int& sa, char s[1000][20]){

	//D

	system("cls");
	char iop[30];
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                                 请输入要添加的单词："<<endl<<"                                                 ";
	cin >> iop;
	adwd(iop, sa, s);
	system("cls");

	MessageBox(0, L"单词添加完成", L"完成", MB_OK);
	char e; playerr zxcv;
	zxcv.delwdd();
	//ZD
	do {
		cin >> e;                                   //用户输入操作对象
		if (e != '1' && e != '2' && e != '3') {
			MessageBox(0, L"请重新输入序号", L"错误", MB_OK);
			system("cls");
			zxcv.delwdd();
		}
	} while (e != '1' && e != '2' && e != '3');


	if (e == '1') {//根据操作数做对应操作
		adwdd(sa, s);
	}

	if (e == '2') {
		system("cls");
		putset(sa,s);//返回设置函数
	}
	if (e == '3') {
		system("cls");
		putmain(sa, s);//返回菜单函数
	}






}


//s删除单词DZ                                         完成
void delwd(int& sa, char s[1000][20]) {
	//D
	int dw;
	for (int x = 0; x < sa; x++) {
		cout << x + 1 << ":\t" << s[x] << endl;
	}
	cout << endl << endl << endl << endl;
dwwwww:cout << "                         请选择你要删除的单词序号：";
	cin >> dw;
	if (!(dw > 0 && dw <= sa)) {
		MessageBox(0, L"请重新输入序号", L"该序号不存在", MB_OK);
		goto dwwwww;
	}
	if (dw > 0 && dw <= sa) {
		int dww = dw - 1;
		for (dww; dww < sa; dww++) {
			int qw = strlen(s[dww + 1]);
			for (int j = 0; j < qw; j++) {
				s[dww][j] = s[dww + 1][j];
			}
			s[dww][qw] = '\0';
		}
		s[sa - 1][0] = '\0';
		sa--;
		writewd(s, sa);
		system("cls");
		MessageBox(0, L"删除成功", L"成功", MB_OK);

		//Z
		char g;
		playerr h;
		h.delwd();
		do {
			cin >> g;                                   //用户输入操作对象
			if (g != '1' && g != '2' && g != '3') {
				MessageBox(0, L"请重新输入序号", L"错误", MB_OK);
				system("cls");
				h.delwd();
			}
		} while (g != '1' && g != '2' && g != '3');


		if (g == '1') {//根据操作数做对应操作
			system("cls");
			delwd(sa, s);
		}

		if (g == '2') {
			system("cls");
			putset(sa, s);//返回设置函数
		}
		if (g == '3') {
			system("cls");
			putmain(sa, s);
		//返回菜单函数
		}






	}

}

/*将添加的单词放到单词库中D                                                       完成*/
void adwd(char ad[20],int &sa,char s[1000][20]) {
	ofstream fp;
	fp.open("C:\\worddd\\danci.txt", ios::app);
	int i = 0;
	for (i; ad[i] != '\0'; i++) {
		fp.put(ad[i]);
		s[sa][i] = ad[i];
	}
	s[sa][i + 1] = '\0';
	fp.put(' ');
	sa++;
	fp.close(); 
}
//开始游戏                                                                     完成                                                 
void game(char s[1000][20], int sa) {

	int defen = 0;
	player num[5];
	readrank(num);

	//读取猜单词的数目D
	ifstream plass;
	int vfrbgt;
	plass.open("C:\\worddd\\set\\set.txt", ios::in);
	plass >> vfrbgt >> vfrbgt;
	plass.close();

	//计时开始G
	time_t timeBegin, timeEnd;
	timeBegin = time(NULL);
	Sleep(1000);

	for (int i = 0; i < vfrbgt; i++) {
		cout << "目前分数：" << defen << endl;
		defen += cai(s, sa);
		system("cls");
	}
	//计时结束D
	timeEnd = time(NULL);
	int timee=timeEnd - timeBegin-vfrbgt*3;
	if (updaterank(num, defen, timee)) {
		MessageBox(0, L"你未能获得前五名\n本程序不需要知道你的名字", L"提示", MB_OK); 
	};
	cout << endl << endl << endl << endl << "                                               本次得分：" << defen;
	cout << endl << endl << endl << endl << "                                                 用时：" << timee<<"秒";
	cout << endl << endl;
	playerr qwertyu;
	qwertyu.putgame();
	//D
	int a;
	cin >> a;
	while (1) {
		if (a != 1&&a != 2) {
			MessageBox(0, L"请重新输入序号", L"错误", MB_OK);
			system("cls");
			qwertyu.putgame();
			cin >> a;
		}
		if (a == 1 || a == 2)
			break;
	}
	system("cls");
	if (a == 1) {
		game(s, sa);
	}
	if (a == 2) {
		putmain(sa, s);
	}



}


/*猜一个单词，对:此次得分 错0 D                                                        完成*/
int cai(char s[1000][20],int sa) {
	int sjwd,/*随机单词序列*/
		wdl/*单词长*/,
		i,
		wrongg,
		wrong,/*错误上线*/
		rightt = 0;/*正确次数*/
	char wd_[20],/*_____________*/
		zxcv;/*字母*/
		/*读取wrong*/
	ifstream set("C:\\worddd\\set\\set.txt");
	set >> wrong;
	wrongg = wrong;
	set.close();
	//cout << wrong;

	//选单词
	srand((unsigned)time(0));
	sjwd = rand() % sa;
	wdl = strlen(s[sjwd]);
	for (i = 0; i < wdl; i++)
		wd_[i] = '-';
	wd_[i] = '\0';


	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                                   ";
	cout << "猜猜有什么字母在单词里" << endl;
	cout << s[sjwd] << endl;/*qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq*/
	cout << "                                                        " << wd_ << endl;
	cout << "                                                             ";

	while (1) {
		cin >> zxcv;
		if (wrong == 0)
			break;
		int mn = 0;
		for (i = 0; i < wdl; i++) {
			int mnb = 0;
			//检测是否是已猜过的字母
			for (int sdd = 0; sdd<wdl; sdd++) {
				if (zxcv == wd_[sdd]) {
					mn = 2;
					mnb = 2;
					break;
				}
			}
			//猜过则退出循环
			if (mnb == 2)
				break;
			//若检测的不是-则进入下一个循环
			if (wd_[i] != '-')
				continue;
			//猜对了
			if (zxcv == s[sjwd][i]) {
				system("cls");
				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "                                                   ";
				cout << "猜对啦" << endl<<endl<<endl;
				mn = 1;
				wd_[i] = s[sjwd][i];
				rightt++;
				//将相同的字母换掉
				for (int j = i + 1; j < wdl; j++) {
					if (zxcv == s[sjwd][j]) {
						wd_[j] = s[sjwd][j];
						rightt++;

					}
				}

				cout << "                                                   ";
				cout << wd_ << endl;
				cout << "                                                      ";
				break;
			}



		}
		if (mn == 2) {
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                   ";
			cout << "这个单词你已经猜过啦" << endl<<endl<<endl;
			cout << "                                                        ";
			cout << wd_ << endl;
			cout << "                                                      ";
		}

		if (mn == 0) {
			wrong--;
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                   ";
			cout << "不对呦，" << ends << "你还有" << wrong << "次机会" << endl<<endl<<endl;
			cout << "                                                     ";
			cout << wd_ << endl;
			cout << "                                                      ";


		}

		if (wrong == 0) {
			MessageBox(0, L"你已经没有机会了", L"提示", MB_OK);
				break;
		}
		if (rightt == wdl)
			break;


	}
	system("cls");

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl  << endl << endl;
	cout << "                                                 你猜对了" << rightt << "次；" << endl<<endl<<endl;
	cout << "                                                 猜错了" << wrongg - wrong << "次";

	//暂停3秒
	time_t timeBegin, timeEnd;
	timeBegin = time(NULL);
	Sleep(1000);

	while (1) {
		if (time(NULL) - timeBegin == 3)
			break;
	}




	if (rightt == wdl)
		return rightt - wrongg + wrong;
	else
		return 0;



}

//初始化设置D       1wrong 2 数                  完成
void zxcvbnm() {
	if (_access("C:\\worddd\\set", 0) == -1) {
		createfolder("C:\\worddd\\set");
		ofstream set("C:\\worddd\\set\\set.txt");
		set << 10 << " " << 2;
		set.close();
	}
}

//改猜词数DZ                                     完成
void chcishu(int& sa, char s[1000][20]) {

	//D
	int a, b;
	ifstream set("C:\\worddd\\set\\set.txt");
	set >> a>>b;
	set.close();
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                                   目前一局游戏猜" << b << "个单词" << endl << endl<< endl << endl;
	cout << "                                                 请输入一局游戏猜的单词数："<<endl;
	cout << "                                                              ";
	cin >> b;


	ofstream sett("C:\\worddd\\set\\set.txt");
	sett << a << " " << b;
	sett.close();
	system("cls");
	MessageBox(0, L"修改成功", L"成功", MB_OK);


	//Z

	char d;
	playerr h;
	h.chcs();
	do {
		cin >> d;                                   //用户输入操作对象
		if (d != '1' && d != '2' && d != '3') {
			MessageBox(0, L"请重新输入序号", L"错误", MB_OK);
			system("cls");
			h.chcs();

		}
	} while (d != '1' && d != '2' && d != '3');


	if (d == '1') {//根据操作数做对应操作
		system("cls");
		chcishu(sa,s);
	}

	if (d == '2') {
		system("cls");
		putset(sa, s);//返回设置函数
	}
	if (d == '3') {
		system("cls");
		putmain(sa, s);//返回菜单函数
	}



}

//改错次数DZ                                    完成
void chwrong(int& sa, char s[1000][20]) {

	//D

	int a, b,c;
	ifstream set("C:\\worddd\\set\\set.txt");
	set >> a >> b;
	set.close();
	c = a;


qwertyu:cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                                   目前一个单词可以猜错" << c << "次" << endl << endl << endl << endl;
	cout << "                                                 请输入一个单词允许猜错的次数：" << endl;
	cout << "                                                                 ";
	cin >> a;
	if (a >= 20) {
		MessageBox(0, L"是不是玩不起?\n是不是玩不起?\n是不是玩不起?", L"失败", MB_YESNO);
		system("cls");
		goto qwertyu;
	}
	if (a < 20) {
		ofstream sett("C:\\worddd\\set\\set.txt");
		sett << a << " " << b;
		sett.close();
		system("cls");
		MessageBox(0, L"修改成功", L"成功", MB_OK);
	}

	//Z

	char d;
	playerr h;
	h.wchwrong();
	do {
		cin >> d;                                   //用户输入操作对象
		if (d != '1' && d != '2' && d != '3') {
			MessageBox(0, L"请重新输入序号", L"错误", MB_OK);
			system("cls");
			h.wchwrong();

		}
	} while (d != '1' && d != '2' && d != '3');


	if (d == '1') {//根据操作数做对应操作
		system("cls");
		chwrong(sa, s);
	}

	if (d == '2') {
		system("cls");
		putset(sa, s);//返回设置函数
	}
	if (d == '3') {
		system("cls");
		putmain(sa, s);//返回菜单函数
	}



}

//重新写入数据D                              完成
void writewd(char s[1000][20], int sa) {
	ofstream dancii("C:\\worddd\\danci.txt");
	for (int i = 0; i < sa; i++) {
		dancii.write(s[i], strlen(s[i]));
		dancii.put(' ');
	}
	dancii.close();
}


//改单词                                    完成
void gaidanci(char s[1000][20], int sa) {
	//D
	int dw;
	for (int x = 0; x < sa; x++) {
		cout << x + 1 << ":\t" << s[x] << endl;
	}
	cout << endl << endl << endl << endl;
dwwwwwqq:cout << "                         请选择你要修改的单词序号：";
	cin >> dw;
	if (!(dw > 0 && dw <= sa)) {
		MessageBox(0, L"请重新输入序号", L"该序号不存在", MB_OK);
		goto dwwwwwqq;
	}
	if (dw > 0 && dw <= sa) {
		cout << "                         你要将其修改成：";
		char gai[20];
		cin >> gai;
		int leng = strlen(gai);
		for (int i = 0; i < leng; i++) {
			s[dw-1][i] = gai[i];

		}
		s[dw-1][leng] = '\0';
		cout << s[dw-1];
		writewd(s, sa);
	}
	system("cls");
	MessageBox(0, L"修改成功", L"成功", MB_OK);

	//Z
	char g;
	playerr h;
	h.gaidc();
	do {
		cin >> g;                                   //用户输入操作对象
		if (g != '1' && g != '2' && g != '3') {
			MessageBox(0, L"请重新输入序号", L"错误", MB_OK);
			system("cls");
			h.gaidc();
		}
	} while (g != '1' && g != '2' && g != '3');


	if (g == '1') {//根据操作数做对应操作
		system("cls");
		gaidanci(s, sa);
	}

	if (g == '2') {
		system("cls");
		putset(sa, s);//返回设置函数
	}
	if (g == '3') {
		system("cls");
		putmain(sa, s);
		//返回菜单函数
	}

}





//完成

int main()
{
	char s[1000][20];/*单词库*/
	int sa = 0;/*单词数*/
	player num[5];/*排名*/
	mmmmmmmmmm();//写入danci.txt
	mkwd(s, sa);/*加载单词*/
	zxcvbnm();/*初始化设置*/
	readrank(num);/*加载排名*/

	
	//game(s, sa);
	putmain(sa,s);

	//gaidanci(s, sa);






	return 0;
}


