#include "StdAfx.h"
#include "Bullet.h"
#include "resource.h"


CBullet::CBullet(int x, int y, int nMontion) :CGameObject(x, y), m_nMotion(nMontion)
{

}
CBullet::CBullet(int x, int y) : CGameObject(x, y)
{

}
CBullet::~CBullet(void)
{

}