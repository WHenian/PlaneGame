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
		return CRect(m_ptPos,CPoint(m_ptPos.x+10,m_ptPos.y+BOMB_HEIGHT));//会被子弹高度影响，子弹的矩形框。
	}
private:
	static const int BOMB_HEIGHT = 20; //子弹判定高度，如果增加，向下增加高度
	static CImageList m_Images;

};
