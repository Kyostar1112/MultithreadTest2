#pragma once

#include<memory>
#include<thread>

#include"One.h"

using namespace std;

class clsMain
{
public:
	clsMain();
	~clsMain();

	void cMain();

private:
	unique_ptr<clsOne> m_smpOne;
};

unique_ptr<clsMain> m_smpMain;