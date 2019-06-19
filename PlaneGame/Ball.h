#pragma once
#include "Bullet.h"

class CBall :public CBullet
{
public:
	CBall(int x,int y,int nMontion);
	~CBall(void);

	BOOL Draw(CDC* pDC,BOOL bPause);//��ӡ����

	static BOOL LoadImage();//��̬ͼƬ���غ���

	CRect GetRect()//�õ�����
	{
		return CRect(m_ptPos,CPoint(m_ptPos.x+ HEIGHT,m_ptPos.y+ HEIGHT));
	}
private:
	static const int BALL_HEIGHT = 8;
	static CImageList m_Images;//ÿ�ֲ�ͬ�ӵ���Ӧ�Ĳ�ͬ��ͼ�ļ�
	const int Ball_ID = 1;//��ʱ���ڵ��ӵ����
};
