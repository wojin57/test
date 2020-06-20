#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#include "Character.h"
#pragma comment(lib,"winmm.lib")

using namespace std;

class MonsterBase : public Character // ��� get~�Լ����� ���κ��� ���� ��ȭ�� �����Ƿ�
	//const ������ ���ִ°� ����.�̷���
	//�׸��� ���� private: ������ ���� �����ϰ� public:���� �� �������� Ȱ���� �Լ��� ¥�°� ����.
	//������ �׷��� ¥�ߵǴ��ɷ� ����ϰ� �׷��� ¥�� ������ ���̴°� ����.
	//�ȱ׷��� ���� ���� �ȵǾ��ִµ� �� ������ �����Ϸ��� �������� ������ ����� ����.
{
public:
	MonsterBase();
	~MonsterBase();

	int getmhp() const { return mhp; }
	void setmhp(int _mhp) { mhp = _mhp; }

	int getmatk() const { return matk; }
	void setmatk(int _matk) { matk = _matk; }

	int getmlv() const { return mlv; }
	void setmlv(int _mlv) { mlv = _mlv;}

	string getmname() const { return mname; }
	void setmname(string _mname) { mname = _mname; }

	int getmg() const { return mg; }
	void setmg(int _mg) { mg = _mg; }

	int getmdef() const { return mdef; }
	void setmdef(int _mdef) { mdef = _mdef; }
	
	int getmexp() const { return mexp; }
	void setmexp(int _mexp) { mexp = _mexp; }


	void showmonster() const {
		cout << "[���� ����]" << endl;
		cout << "Lv. " << mlv << "\t" << "�̸� : " << mname << "\t" << endl; 
		cout << "ü�� : " << mhp << "\t" << "���ݷ� : " << matk << "\t" << "���� : " << mdef << "\t" << endl;
	}

private :
	int matk;
	int mdef;
	int mlv;
	int mg;
	int mhp;
	string mname;
	int mexp;
};

