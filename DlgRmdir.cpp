// DlgRmdir.cpp : implementation file
//

#include "stdafx.h"
#include "DlgRmdir.h"
#include "afxdialogex.h"


// DlgRmdir dialog

IMPLEMENT_DYNAMIC(DlgRmdir, CDialog)

DlgRmdir::DlgRmdir(CWnd* pParent /*=NULL*/)
	: CDialog(DlgRmdir::IDD, pParent)
{

}

DlgRmdir::~DlgRmdir()
{
}

void DlgRmdir::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, editDir);
}


BEGIN_MESSAGE_MAP(DlgRmdir, CDialog)
	ON_BN_CLICKED(IDOK, &DlgRmdir::OnBnClickedOk)
END_MESSAGE_MAP()


// DlgRmdir message handlers


void DlgRmdir::OnBnClickedOk()
{
	CDialog::OnOK();
	
	
	editDir.GetWindowTextW(path);
	if (GetFileAttributes(path) == INVALID_FILE_ATTRIBUTES){
		int res = MessageBox(L"Are you sure? ", L"Warning", MB_ICONWARNING | MB_YESNO);
		if (res == IDYES)
			RecursiveDelete(path);
	}
	else 
		MessageBox(L"Can't delete? ", L"Error", MB_ICONWARNING | MB_OK);
}

void DlgRmdir::RecursiveDelete(CString szPath){
	CFileFind ff;
	CString path = szPath;

	if (path.Right(1) != "\\")
		path += "\\";

	path += "*.*";

	BOOL res = ff.FindFile(path);

	while (res)
	{
		res = ff.FindNextFile();
		if (!ff.IsDots() && !ff.IsDirectory())
			DeleteFile(ff.GetFilePath());
		else if (ff.IsDirectory())
		{
			path = ff.GetFilePath();
			RecursiveDelete(path);
			RemoveDirectory(path);
		}
	}
}