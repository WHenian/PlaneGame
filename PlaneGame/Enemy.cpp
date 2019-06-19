#include "StdAfx.h"
#include "Enemy.h"
#include "resource.h"

CImageList CEnemy::m_Images;
int CEnemy::PlaneNum = 0;//��ֹ��̬�����ظ�����
CEnemy::CEnemy(void)
{
	//���ȷ��Xλ��
	m_ptPos.x = rand()%(GAME_WIDTH-ENEMY_HEIGHT)+1;

	//���ȷ��ͼ������
	m_nImgIndex = rand()%2;

	//����ͼ������ȷ������
	m_nMotion=1;
	m_ptPos.y=-ENEMY_HEIGHT;
	if (m_nImgIndex%2!=0)//�����ͼ��������ż��
	{
		m_nMotion=1;//ʼ��Ϊ����
		m_ptPos.y = GAME_HEIGHT+ENEMY_HEIGHT;
	}
	//���ȷ���ٶ�
	m_V = rand()%6+2;
	PlaneDrawtimes = 0;
	m_nWait=0;
	PlaneNum++;
}

CEnemy::~CEnemy(void)
{
}
BOOL CEnemy::LoadImage()
{
	return CGameObject::LoadImage(m_Images,IDB_ENEMY,RGB(0,0,0),35,35,2);
}
BOOL CEnemy::Draw(CDC* pDC,BOOL bPause)
{
	m_nWait++;
	if(m_nWait>5)
		m_nWait=0;
	//PlaneDrawtimes++;
	if(!bPause)//�л�����λ��
	{
		m_ptPos.y = m_ptPos.y  + m_nMotion * m_V;
		//if(PlaneDrawtimes>100)
		//if(PlaneNum > 10)
		//m_ptPos.x = m_ptPos.x + m_nMotion * m_V ;
	}

	if(m_ptPos.y > GAME_HEIGHT+ENEMY_HEIGHT )
		return FALSE;
	if(m_ptPos.y < -ENEMY_HEIGHT)
		return FALSE;

	m_Images.Draw(pDC,m_nImgIndex,m_ptPos,ILD_TRANSPARENT);

	return TRUE;
}
BOOL CEnemy::Fired()
{
	if(m_nWait==0)
		return TRUE;
	else
		return FALSE;
}