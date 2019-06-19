#pragma once
#include "Bullet.h"

class CBall :public CBullet
{
public:
	CBall(int x,int y,int nMontion);
	~CBall(void);

	BOOL Draw(CDC* pDC,BOOL bPause);//打印函数

	static BOOL LoadImage();//静态图片加载函数

	CRect GetRect()//得到坐标
	{
		return CRect(m_ptPos,CPoint(m_ptPos.x+ HEIGHT,m_ptPos.y+ HEIGHT));
	}
private:
	static const int BALL_HEIGHT = 8;
	static CImageList m_Images;//每种不同子弹对应的不同贴图文件
	const int Ball_ID = 1;//临时存在的子弹编号
};
