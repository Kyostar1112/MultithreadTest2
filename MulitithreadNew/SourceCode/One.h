#pragma once

#include<thread>
#include<Windows.h>
class clsOne

{
public:
	clsOne();
	~clsOne();

	void Th1(int CntNum, int SleepTime);

	bool GetFinishFlg()
	{
		return m_bFinishFlg;
	}

	int GetCnt()
	{
		return m_iCnt;
	}
private:
	void Cnt(int CntNum, int SleepTime);

	bool m_bFinishFlg;
	int m_iCnt;

};
