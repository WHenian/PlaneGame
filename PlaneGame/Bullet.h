#pragma once
#include "GameObject.h"

class CBullet : public CGameObject
{
public:
	CBullet(int x, int y, int nMontion);//临时的空构造
	CBullet(int x, int y);//两个参数的临时空构造
	~CBullet(void);

protected:
	int    m_nMotion;//动作
	int	   m_nAngle;//角度
//暂定数值
	int    m_nPower;//伤害
	int    HEIGHT;//判定高度
	int    WIDTH;//判定宽度
};