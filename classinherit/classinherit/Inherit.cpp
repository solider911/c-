#include "StdAfx.h"
#include "Inherit.h"
#include <string.h>


CInherit::CInherit(void)
	:iAge(30)
{
}


CInherit::~CInherit(void)
{
}

void CInherit::cNature()
{
	MessageBox(NULL, _T(" Ù–‘≤‚ ‘"), _T("cap"), MB_OK);
}

CInheritSub::CInheritSub()
{

}

CInheritSub::~CInheritSub()
{

}

void CInheritSub::getAge()
{
	CString strAge;
	strAge.Format(_T("∏∏¿‡Age£∫%d"), iAge);
	MessageBox(NULL, strAge, _T("cap"), MB_OK);
}
