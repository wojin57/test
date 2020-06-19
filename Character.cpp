#include "Character.h"
#include <string>


Character::Character()
{
	
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

