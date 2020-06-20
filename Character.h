#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

using namespace std;

class Character // 마찬가지로 const 선언을 적극적으로 활용.
	//또한 함수명은 get_money나 getMoney같이 두 단어 이상이면 구분지어주는게 좋음.
	//showCharacter는 잘정의했는데 왜 get~함수들은 가독성 떨어지게 소문자만 써놨는지 의문.
	//두 형식중 편한대로 통일해두면 형식만 봐도 함수임을 알 수 있고, 단어 구분도 되서
	//가독성이 좋아짐. 코드가 복잡해질수록 얼마나 가독성이 중요한건지 깨닫게될것.
{

public:
	Character();
	~Character();
	
	int gethp() const { return hp; }
	void sethp(int _hp) { hp = _hp; }

	int getmaxhp() const { return maxhp; }
	void setmaxhp(int _maxhp) { maxhp = _maxhp; }

	int getmp() const { return mp; }
	void setmp(int _mp) { mp = _mp; }

	int getmaxmp() const { return maxmp; }
	void setmaxmp(int _maxmp) { maxmp = _maxmp; }

	int getatk() const { return atk; }
	void setatk(int _atk) { atk = _atk; }

	int getlv() const { return lv; }
	void setlv(int _lv) { lv = _lv; }

	string getname() const { return name; }
	void setname(string _name) { name = _name; }

	int getmoney() const { return money; }
	void setmoney(int _money) { money = _money; }

	int getdef() const { return def; }
	void setdef(int _def) { def = _def; }

	string getjob() const { return job; }
	void setjob(string _job) { job = _job; }

	int getexp() const { return exp; }
	void setexp(int _exp) { exp = _exp; }

	int getmaxexp() const { return maxexp; }
	void setmaxexp(int _maxexp) { maxexp = _maxexp; }

	int gethpotion() const { return hpotion; }
	void sethpotion(int _hpotion) { hpotion = _hpotion; }

	int getmpotion() const { return mpotion; }
	void setmpotion(int _mpotion) { mpotion = _mpotion; }

	void showCharacter() {

		cout << "[캐릭터 정보]" << endl;
		cout << "Lv. " << getlv() << "\t" << "이름 : " << getname() << "\t" << "직업 : " << getjob() << endl;
		cout << "HP : " << gethp() << "/" << getmaxhp() << "\t" << "MP : " << getmp() << "/" << getmaxmp() << "\t" << "EXP : " << getexp() << "/" << getmaxexp() << endl;
		cout << "공격력 : " << getatk() << "\t" << "방어력 : " << getdef() << endl;
		cout << "소지금 : " << getmoney() << " G " << endl;
	}

private :
	int hp = 100;
	int mp = 50;
	int lv = 1;
	int exp = 0;
	int maxexp = 10;
	int atk = 10;
	int def = 5;
	int money = 50;
	int hpotion = 0;
	int mpotion = 0;
	int maxhp = 100;
	int maxmp = 50;
	
	string job = "모험가";
	string name = "륜";

};

