#pragma once
#include "GameObject.h"

class CBullet : public CGameObject
{
public:
	CBullet(int x, int y, int nMontion);//��ʱ�Ŀչ���
	CBullet(int x, int y);//������������ʱ�չ���
	~CBullet(void);

protected:
	int    m_nMotion;//����
	int	   m_nAngle;//�Ƕ�
//�ݶ���ֵ
	int    m_nPower;//�˺�
	int    HEIGHT;//�ж��߶�
	int    WIDTH;//�ж����
};