// UserManage.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Person.h"
#include "UserManage.h"
#include "afxdialogex.h"


// CUserManage �Ի���

IMPLEMENT_DYNAMIC(CUserManage, CDialog)

CUserManage::CUserManage(CWnd* pParent /*=NULL*/)
	: CDialog(CUserManage::IDD, pParent)
{

}

CUserManage::~CUserManage()
{
}

void CUserManage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTGRID, m_grid);
}


BEGIN_MESSAGE_MAP(CUserManage, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, OnAppend)
	ON_BN_CLICKED(IDOK, OnEdit)
	ON_BN_CLICKED(IDC_BUTTON2, OnDelete)
END_MESSAGE_MAP()


// CUserManage ��Ϣ�������


BOOL CUserManage::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_grid.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);

	m_grid.InsertColumn(0,L"�û���");
	m_grid.SetColumnWidth(0,150);
	
	UpdateGrid();
	return TRUE;  
}

void CUserManage::UpdateGrid()
{
	
}

void CUserManage::OnAppend() 
{
	
}

void CUserManage::OnEdit() 
{
	
}

void CUserManage::OnDelete() 
{
	
	
}