#pragma once
#include "resource.h"
#include <string>
#include "afxwin.h"
using namespace std;

// DlgMkdir dialog

class DlgMkdir : public CDialog
{
	DECLARE_DYNAMIC(DlgMkdir)

public:
	DlgMkdir(CWnd* pParent = NULL);   // standard constructor
	virtual ~DlgMkdir();

// Dialog Data
	enum { IDD = IDD_DLG_MKDIR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit editPath;
	string pathStr;
	CString pathCStr;
	afx_msg void OnBnClickedOk();
};
