#pragma once
#include "resource.h"
#include "afxwin.h"

// DlgRename dialog

class DlgRename : public CDialog
{
	DECLARE_DYNAMIC(DlgRename)

public:
	DlgRename(CWnd* pParent = NULL);   // standard constructor
	virtual ~DlgRename();

// Dialog Data
	enum { IDD = IDD_DLG_RENAME };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit oldPathEdit;
	CEdit newPathEdit;
	afx_msg void OnBnClickedOk();

private:
	CString oldPath, newPath;
};
