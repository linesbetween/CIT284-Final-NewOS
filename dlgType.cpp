// dlgType.cpp : implementation file
//

#include "stdafx.h"
#include "dlgType.h"
//#include "afxdialog.h"
#include <io.h>
#include <fstream>
#include <string>
//#include "afxdialogex.h"
using namespace std;

// dlgType dialog

IMPLEMENT_DYNAMIC(dlgType, CDialog)

dlgType::dlgType(CWnd* pParent /*=NULL*/)
	: CDialog(dlgType::IDD, pParent)
{

}

dlgType::~dlgType()
{
}

void dlgType::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_DIR_TYPE_PATH, editFilePath);
}


BEGIN_MESSAGE_MAP(dlgType, CDialog)
	ON_BN_CLICKED(IDOK, &dlgType::OnBnClickedOk)
END_MESSAGE_MAP()


// dlgType message handlers


void dlgType::OnBnClickedOk()
{
	
	CDialog::OnOK();

	
	editFilePath.GetWindowTextW(path);	

	try{
		ifstream file(path.GetString());
		if (file){
			//MessageBox(L"File exists", L"Status", MB_OK);
			while (!file.eof()){
				getline(file, line);
				textDisplay += (line + "\r\n");
			}

		}
		else {
			MessageBox(L"File not found", L"Status", MB_OK);
		}

		file.close();
	}
	catch (...){
		MessageBox(L"Failed to open file", L"Status", MB_OK);
		editFilePath.SetFocus();
		return;
	}

	
}

CString dlgType::getTextDisplay(){
	return textDisplay.c_str();
}