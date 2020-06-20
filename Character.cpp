#include "Character.h"
#include <string>


Character::Character()
{
	// 이런 작업은 Character 함수 내에 따로 처리해두는게 좋음.
	// 보통 레벨업은 경험치 획득하는 순간마다 체크해주는게 좋을테니까
	// 경험치 획득하는 함수에서 레벨업도 처리해주는게 좋음.
	// 아무튼 절대로 생성자 안에 들어갈 함수는 아님. 객체를 만들자마자 레벨업할 일은 절대 없으니까
	// 생성자와 소멸자는 너가 부르는 함수가 아니라 객체 생성/소멸 시점에 한번만 자동으로 불리는
	// 함수임을 명심할것
	if (getexp() >= getmaxexp())
	{
		cout << "Level Up!" << endl;
		setexp(0);
		setmaxexp(getlv() * 5);

		if (job == "모험가")
		{
			maxhp += 50;
			maxmp += 25;
			hp += (maxhp - hp);
			mp += (maxmp - mp);
			atk += 10;
			def += 5;
		}

		else if (job == "전사")
		{
			maxhp += 75;
			maxmp += 15;
			hp += (maxhp - hp);
			mp += (maxmp - mp);
			atk += 10;
			def += 25;
		}

		else if (job == "레인저")
		{
			maxhp += 20;
			maxmp += 15;
			hp += (maxhp - hp);
			mp += (maxmp - mp);
			atk += 25;
			def += 10;
		}
	}
}


Character::~Character()
{

}

