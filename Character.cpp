#include "Character.h"
#include <string>


Character::Character()
{
	// �̷� �۾��� Character �Լ� ���� ���� ó���صδ°� ����.
	// ���� �������� ����ġ ȹ���ϴ� �������� üũ���ִ°� �����״ϱ�
	// ����ġ ȹ���ϴ� �Լ����� �������� ó�����ִ°� ����.
	// �ƹ�ư ����� ������ �ȿ� �� �Լ��� �ƴ�. ��ü�� �����ڸ��� �������� ���� ���� �����ϱ�
	// �����ڿ� �Ҹ��ڴ� �ʰ� �θ��� �Լ��� �ƴ϶� ��ü ����/�Ҹ� ������ �ѹ��� �ڵ����� �Ҹ���
	// �Լ����� ����Ұ�
	if (getexp() >= getmaxexp())
	{
		cout << "Level Up!" << endl;
		setexp(0);
		setmaxexp(getlv() * 5);

		if (job == "���谡")
		{
			maxhp += 50;
			maxmp += 25;
			hp += (maxhp - hp);
			mp += (maxmp - mp);
			atk += 10;
			def += 5;
		}

		else if (job == "����")
		{
			maxhp += 75;
			maxmp += 15;
			hp += (maxhp - hp);
			mp += (maxmp - mp);
			atk += 10;
			def += 25;
		}

		else if (job == "������")
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

