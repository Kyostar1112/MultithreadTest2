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

void clsOne::Th1(int CntNum, int SleepTime)
{
	thread th1([this, CntNum, SleepTime]() {this->Cnt(CntNum, SleepTime); });
	th1.detach();
}

void clsOne::Cnt(int CntNum, int SleepTime)
{
	Sleep(SleepTime);
	m_iCnt++;
	if (m_iCnt > CntNum)
	{
		m_bFinishFlg = true;
	}
}
