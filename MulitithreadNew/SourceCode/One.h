#pragma once

#include<thread>
#include<Windows.h>
class clsOne

{
public:
	clsOne();
	~clsOne();

	void Th1(int Num);

	bool GetFinishFlg()
	{
		return m_bFinishFlg;
	}

	void Cnt(int Num);

	int GetCnt()
	{
		return m_iCnt;
	}
private:

	bool m_bFinishFlg;
	int m_iCnt;

};
