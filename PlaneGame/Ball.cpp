#include "StdAfx.h"
#include "Ball.h"
#include "resource.h"

CImageList CBall::m_Images;

CBall::CBall(int x, int y, int nMontion):CBullet(x,y,nMontion)
{
	m_nAngle = rand() % 2;
	if (m_nAngle == 1)
		m_nAngle = m_nMotion * rand() % 5;
	else
		m_nAngle = -m_nMotion * rand() % 5;
	HEIGHT= 8;
}

CBall::~CBall(void)
{
}
BOOL CBall::Draw(CDC* pDC,BOOL bPause)
{
	if(!bPause)
	{
		m_ptPos.y = m_ptPos.y + m_nMotion * 8;//×Óµ¯×ø±ê
		m_ptPos.x = m_ptPos.x + m_nAngle;
	}

	if(m_ptPos.y > GAME_HEIGHT+HEIGHT )
		return FALSE;
	if(m_ptPos.y < -HEIGHT)
		return FALSE;

	m_Images.Draw(pDC,0,m_ptPos,ILD_TRANSPARENT);

	return TRUE;
}

BOOL CBall::LoadImage()
{
	return CGameObject::LoadImage(m_Images,IDB_BALL,RGB(0,0,0),8,8,1);
}