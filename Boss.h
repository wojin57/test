#pragma once
#include "MonsterBase.h"

class Boss : public MonsterBase // �̷��Ÿ� MonsterBase Ŭ������ Boss Ŭ������ �ٸ��� ����.
//���� �� ���� Ŭ������ ��������� �𸣰���. ����� �������� ����������Ѵٸ� ����
//MonsterBase Ŭ������ ���� ������ bool is_boss ���� �ϳ� �����ΰ� �װɷ�
//üũ�ϴ°� ���ƺ���.
{
public:
	Boss();
	~Boss();
};

