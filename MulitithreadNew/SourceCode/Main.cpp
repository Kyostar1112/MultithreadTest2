#include"Main.h"

const int g_iCntTime = 1000;

clsMain::clsMain()
{
	m_smpOne = make_unique<clsOne>();
}

clsMain::~clsMain()
{
}

void main()
{
	m_smpMain = make_unique<clsMain>();
	m_smpMain->cMain();
}

void clsMain::cMain()
{
	while (1)
	{
		thread th1([]() {
			if (m_smpOne->m_iCnt > m_smpOne->Num)
			{
				m_smpOne->m_bFinishFlg = true;
			}
		})
		/*m_smpOne->Th1(g_iCntTime);*/
	}
}