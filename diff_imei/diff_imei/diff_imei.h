
// diff_imei.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cdiff_imeiApp:
// �йش����ʵ�֣������ diff_imei.cpp
//

class Cdiff_imeiApp : public CWinApp
{
public:
	Cdiff_imeiApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cdiff_imeiApp theApp;