
// SDI.h : SDI ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSDIApp:
// �� Ŭ������ ������ ���ؼ��� SDI.cpp�� �����Ͻʽÿ�.
//

class CSDIApp : public CWinApp
{
public:
	CSDIApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSDIApp theApp;
