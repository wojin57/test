#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#include "Character.h"
#pragma comment(lib,"winmm.lib")

using namespace std;

class MonsterBase : public Character // 모든 get~함수들은 내부변수 값의 변화가 없으므로
	//const 선언을 해주는게 좋음.이렇게
	//그리고 보통 private: 변수를 먼저 선언하고 public:에서 그 변수들을 활용한 함수를 짜는게 좋음.
	//문법상 그렇게 짜야되던걸로 기억하고 그렇게 짜는 습관을 들이는게 좋음.
	//안그러면 변수 선언도 안되어있는데 그 변수에 접근하려는 기초적인 에러가 생기기 쉬움.
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
		cout << "[몬스터 정보]" << endl;
		cout << "Lv. " << mlv << "\t" << "이름 : " << mname << "\t" << endl; 
		cout << "체력 : " << mhp << "\t" << "공격력 : " << matk << "\t" << "방어력 : " << mdef << "\t" << endl;
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

