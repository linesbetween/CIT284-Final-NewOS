// DlgCurrent.cpp : implementation file
//

#include "stdafx.h"
#include "DlgCurrent.h"
#include "afxdialogex.h"


// DlgCurrent dialog

IMPLEMENT_DYNAMIC(DlgCurrent, CDialogEx)

DlgCurrent::DlgCurrent(CWnd* pParent /*=NULL*/)
	: CDialogEx(DlgCurrent::IDD, pParent)
{

}

DlgCurrent::~DlgCurrent()
{
}

void DlgCurrent::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_DIR_TYPE_PATH, editFilePath);
}


BEGIN_MESSAGE_MAP(DlgCurrent, CDialogEx)
	ON_BN_CLICKED(IDOK, &DlgCurrent::OnBnClickedOk)
END_MESSAGE_MAP()


// DlgCurrent message handlers


void DlgCurrent::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();

}
