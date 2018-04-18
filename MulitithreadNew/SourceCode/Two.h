#pragma once

#include<thread>
#include<Windows.h>
#include<iostream>
class clsTwo

{
public:
	clsTwo();
	~clsTwo();

	void Th2(const int CntNum, const int SleepTime);

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
