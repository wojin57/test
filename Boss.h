#pragma once
#include "MonsterBase.h"

class Boss : public MonsterBase // 이럴거면 MonsterBase 클래스랑 Boss 클래스가 다를게 없음.
//굳이 왜 따로 클래스를 만들었는지 모르겠음. 잡몹과 보스몹을 구분지어야한다면 차라리
//MonsterBase 클래스의 내부 변수에 bool is_boss 변수 하나 만들어두고 그걸로
//체크하는게 나아보임.
{
public:
	Boss();
	~Boss();
};

