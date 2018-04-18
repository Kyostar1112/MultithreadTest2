#include"Main.h"

const int g_iThreadCnt = 2;
const int g_iCntTime = 1000;
const int g_iOneSleepTime = 10;
const int g_iTwoSleepTime = 20;

clsMain::clsMain()
{
	m_smpOne = make_unique<clsOne>();
	m_smpTwo = make_unique<clsTwo>();

	m_iTimeCnt = 0;
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
	m_vbFinishFlg.reserve(g_iThreadCnt);
	for (unsigned int i = 0; i < g_iThreadCnt; i++)
	{
		m_vbFinishFlg.push_back(false);
	}

	m_smpOne->Th1(g_iCntTime, g_iOneSleepTime);
	m_smpTwo->Th2(g_iCntTime, g_iTwoSleepTime);

	while (1)
	{
		m_iTimeCnt++;


		if (m_iTimeCnt % 10 == 0)
		{
			cout << "���C���ł̌o�߃J�E���g"	<< m_iTimeCnt << endl
				<< "�X���b�h1���̃A�h���X"		<< endl
				<< "�X���b�h1���̌o�߃J�E���g"	<< m_smpOne->GetCnt() << endl
				<< "�X���b�h2���̃A�h���X"		<< endl
				<< "�X���b�h2���̌o�߃J�E���g"	<< m_smpTwo->GetCnt() << endl << endl;
		}

		if (m_smpOne->GetFinishFlg() && !m_vbFinishFlg[0])
		{
			cout << "�X���b�h1�I��" << endl << endl;
			m_vbFinishFlg[0] = true;
		}
		if (m_smpTwo->GetFinishFlg() && !m_vbFinishFlg[1])
		{
			cout << "�X���b�h2�I��" << endl << endl;
			m_vbFinishFlg[1] = true;
		}

		if (m_smpOne->GetFinishFlg() &&
			m_smpTwo->GetFinishFlg())
		{
			break;
		}
	}
	getchar();
}