#pragma once
#include "resource.h"
#include "afxwin.h"
#include <string>


// DlgCurrent dialog

class DlgCurrent : public CDialogEx
{
	DECLARE_DYNAMIC(DlgCurrent)

public:
	DlgCurrent(CWnd* pParent = NULL);   // standard constructor
	virtual ~DlgCurrent();

// Dialog Data
	enum { IDD = IDD_DLG_CURRENT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:
	CEdit editFilePath;
	afx_msg void OnBnClickedOk();
};
