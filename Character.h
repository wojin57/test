#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

using namespace std;

class Character // ���������� const ������ ���������� Ȱ��.
	//���� �Լ����� get_money�� getMoney���� �� �ܾ� �̻��̸� ���������ִ°� ����.
	//showCharacter�� �������ߴµ� �� get~�Լ����� ������ �������� �ҹ��ڸ� ������� �ǹ�.
	//�� ������ ���Ѵ�� �����صθ� ���ĸ� ���� �Լ����� �� �� �ְ�, �ܾ� ���е� �Ǽ�
	//�������� ������. �ڵ尡 ������������ �󸶳� �������� �߿��Ѱ��� ���ݰԵɰ�.
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

		cout << "[ĳ���� ����]" << endl;
		cout << "Lv. " << getlv() << "\t" << "�̸� : " << getname() << "\t" << "���� : " << getjob() << endl;
		cout << "HP : " << gethp() << "/" << getmaxhp() << "\t" << "MP : " << getmp() << "/" << getmaxmp() << "\t" << "EXP : " << getexp() << "/" << getmaxexp() << endl;
		cout << "���ݷ� : " << getatk() << "\t" << "���� : " << getdef() << endl;
		cout << "������ : " << getmoney() << " G " << endl;
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
	
	string job = "���谡";
	string name = "��";

};

