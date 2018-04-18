#pragma once

#include<memory>
#include<thread>
#include<iostream>
#include"One.h"

using namespace std;

class clsMain
{
public:
	clsMain();
	~clsMain();

	void cMain();

	const int m_iCntTime = 1000;

	int m_iTimeCnt;

private:
	unique_ptr<clsOne> m_smpOne;
};

unique_ptr<clsMain> m_smpMain;