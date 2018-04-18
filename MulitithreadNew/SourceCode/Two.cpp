#include"Two.h"

using namespace std;

clsTwo::clsTwo()
{
	m_bFinishFlg = false;
	m_iCnt = 0;
}

clsTwo::~clsTwo()
{
}

void clsTwo::Th2(int CntNum ,int SleepTime)
{
	thread th2([this, CntNum, SleepTime]() {this->Cnt(CntNum, SleepTime); });
	cout << "スレッド2のアドレス" << th2.get_id() << endl;
	th2.detach();
}

void clsTwo::Cnt(int CntNum, int SleepTime)
{
	while (1)
	{
		Sleep(SleepTime);
		m_iCnt++;
		if (m_iCnt > CntNum)
		{
			m_bFinishFlg = true;
		}
		if (m_bFinishFlg)
		{
			break;
		}
	}
}
