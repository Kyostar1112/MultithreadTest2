#pragma once

#include<memory>
#include<thread>
#include<iostream>
#include<vector>
#include"One.h"
#include"Two.h"

using namespace std;

class clsMain
{
public:
	clsMain();
	~clsMain();

	void cMain();

	int m_iTimeCnt;

private:
	unique_ptr<clsOne> m_smpOne;
	unique_ptr<clsTwo> m_smpTwo;

	//スレッド終了表示しているかどうか.
	vector<bool> m_vbFinishFlg;

};

unique_ptr<clsMain> m_smpMain;