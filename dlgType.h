#ifndef DLGTYPE_H
#define DLGTYPE_H
#include "afxwin.h"
#include "resource.h"
#include <string>
using namespace std;

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

public:
	CEdit editFilePath;

	afx_msg void OnBnClickedOk();
	CString getTextDisplay();

private:
	CString path;
	string line;
	string textDisplay;

};

#endif