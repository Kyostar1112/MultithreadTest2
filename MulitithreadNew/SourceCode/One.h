#pragma once

#include<thread>

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
	bool m_bFinishFlg;
	int m_iCnt;
private:
};
