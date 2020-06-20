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
		setmaxexp(getlv() * 5); // 5같은 변수는 constexpr 사용해서 상수화.

		if (job == "모험가") // string도 마찬가지. TRAVELER = "모험가" 정도로 해두고 변수로
			//사용하는게 나중에 찾기도 편하고 이름을 바꿀때도 한꺼번에 바뀌어서 용이함.
			//저번에도 말했듯이 #define과 쓰는 맥락이 일치.
		{
			maxhp += 50; // 마찬가지. 롤의 성장체력같은 개념인데 GROWTH_HP 정도로 해두면 좋음.
			maxmp += 25;
			hp += (maxhp - hp); // 이건 걍 성장체력만큼 피 회복시키면 되는거같은데?
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
		//직업별로 값이 달라질거면 차라리 직업 클래스를 만들어서 성장 능력치값만 저장해두거나
		//namespace를 이용해서 각 직업의 성장 능력치를 상수화시키는게 좋음.
		//어떻게 하는건지 모르겠으면 각각 예시 들어서 만들어줄게.
	}
}


Character::~Character()
{

}

