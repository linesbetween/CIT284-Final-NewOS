#pragma once
#include "afxwin.h"
#include "resource.h"

// dlgType dialog

class dlgType : public CDialog
{
	DECLARE_DYNAMIC(dlgType)

public:
	dlgType(CWnd* pParent = NULL);   // standard constructor
	virtual ~dlgType();

// Dialog Data
	enum { IDD = IDD_DlgType };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
