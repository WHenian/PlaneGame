// PlaneGame.h : PlaneGame Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������
#include <gdiplus.h>
#pragma comment(lib,"gdiplus.lib")
using namespace Gdiplus;

// CPlaneGameApp:
// �йش����ʵ�֣������ PlaneGame.cpp
//

class CPlaneGameApp : public CWinApp
{
public:
	CPlaneGameApp();


// ��д
public:
	virtual BOOL InitInstance();
	ULONG_PTR m_uGdiplusToken;
// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPlaneGameApp theApp;