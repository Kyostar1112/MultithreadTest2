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
	thread th1([this,Num]() {this->Cnt(Num); });
}

void clsOne::Cnt(int Num)
{
	Sleep(100);
	m_iCnt++;
	if (m_iCnt > Num)
	{
		m_bFinishFlg = true;
	}
}
