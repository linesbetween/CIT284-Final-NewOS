// DlgMkdir.cpp : implementation file
//

#include "stdafx.h"
#include "DlgMkdir.h"
#include "afxdialogex.h"
using namespace std;


// DlgMkdir dialog

IMPLEMENT_DYNAMIC(DlgMkdir, CDialog)

DlgMkdir::DlgMkdir(CWnd* pParent /*=NULL*/)
	: CDialog(DlgMkdir::IDD, pParent)
{

}

DlgMkdir::~DlgMkdir()
{
}

void DlgMkdir::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_DIR_MKDIR_EDIT_PATH, editPath);
}


BEGIN_MESSAGE_MAP(DlgMkdir, CDialog)
	ON_BN_CLICKED(IDOK, &DlgMkdir::OnBnClickedOk)
END_MESSAGE_MAP()


// DlgMkdir message handlers


void DlgMkdir::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialog::OnOK();
	editPath.GetWindowTextW(pathCStr);

	if (!CreateDirectory(pathCStr.GetString(), NULL)){
		if (GetLastError() == ERROR_ALREADY_EXISTS){
			MessageBox(L"Directeory already exists. ", L"Error", MB_ICONERROR | MB_OK);			
		}
		else 
			MessageBox(L"Can't create directory. ", L"Error", MB_ICONERROR | MB_OK);
		/*
		editPath.SetWindowTextW(L"");
		editPath.SetFocus();
		editPath.GetWindowTextW(pathCStr);
		*/
	}
}
