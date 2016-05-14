#pragma once
#include "afxwin.h"
#include "resource.h"

// DlgRmdir dialog

class DlgRmdir : public CDialog
{
	DECLARE_DYNAMIC(DlgRmdir)

public:
	DlgRmdir(CWnd* pParent = NULL);   // standard constructor
	virtual ~DlgRmdir();

// Dialog Data
	enum { IDD = IDD_DLG_RMDIR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit editDir;
	afx_msg void OnBnClickedOk();

	void RecursiveDelete(CString szPath);

private:
	CString path;
};
