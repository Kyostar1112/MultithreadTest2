#include"Main.h"


clsMain::clsMain()
{
	m_smpOne = make_unique<clsOne>();
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
	while (1)
	{
		m_iTimeCnt++;
		thread th1(	[this]() {
			m_smpOne->Cnt(1000);
		});
		th1.detach();

		if (m_iTimeCnt % 10 == 0)
		{
			cout << "���C���ł̌o�߃J�E���g" << m_iTimeCnt << endl
				<< "�X���b�h1���̌o�߃J�E���g" << m_smpOne->GetCnt() << endl << endl;
		}

		if (m_smpOne->GetFinishFlg())
		{
			cout << "�X���b�h1�I��" << endl;
			break;
		}
	}
	getchar();
}