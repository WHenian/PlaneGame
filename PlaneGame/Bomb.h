#pragma once
#include "Bullet.h"

class CBomb :public CBullet
{
public:
	CBomb(int x,int y);
	~CBomb(void);

	BOOL Draw(CDC* pDC,BOOL bPause);

	static BOOL LoadImage();

	CRect GetRect()
	{
		return CRect(m_ptPos,CPoint(m_ptPos.x+10,m_ptPos.y+BOMB_HEIGHT));//�ᱻ�ӵ��߶�Ӱ�죬�ӵ��ľ��ο�
	}
private:
	static const int BOMB_HEIGHT = 20; //�ӵ��ж��߶ȣ�������ӣ��������Ӹ߶�
	static CImageList m_Images;

};
