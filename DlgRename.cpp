// DlgRename.cpp : implementation file
//

#include "stdafx.h"
#include "DlgRename.h"
#include "afxdialogex.h"


// DlgRename dialog

IMPLEMENT_DYNAMIC(DlgRename, CDialog)

DlgRename::DlgRename(CWnd* pParent /*=NULL*/)
	: CDialog(DlgRename::IDD, pParent)
{

}

DlgRename::~DlgRename()
{
}

void DlgRename::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RENAME_EDIT_OLDDIR, oldPathEdit);
	DDX_Control(pDX, IDC_IDC_RENAME_EDIT_NEWDIR, newPathEdit);
}


BEGIN_MESSAGE_MAP(DlgRename, CDialog)
	ON_BN_CLICKED(IDOK, &DlgRename::OnBnClickedOk)
END_MESSAGE_MAP()


// DlgRename message handlers


void DlgRename::OnBnClickedOk()
{
	CDialog::OnOK();

	oldPathEdit.GetWindowTextW(oldPath);
	newPathEdit.GetWindowTextW(newPath);

	try {
		CFile::Rename(oldPath, newPath);
	}
	catch (...){
		MessageBox(L"Can't rename", L"Error", MB_ICONERROR | MB_OK);
	}
}
