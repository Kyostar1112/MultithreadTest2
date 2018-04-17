#include"One.h"

using namespace std;
clsOne::clsOne()
{
	m_bFinishFlg = false;
	m_iCnt = 0;
}

clsOne::~clsOne()
{
}

void clsOne::Th1(int Num)
{
	thread th1(&Cnt, Num);
}

void clsOne::Cnt(int Num)
{
	if (m_iCnt > Num)
	{
		m_bFinishFlg = true;
	}
}
