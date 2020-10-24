
// PersonDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Person.h"
#include "PersonDlg.h"
#include "afxdialogex.h"
#include "UserManage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPersonDlg 对话框




CPersonDlg::CPersonDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CPersonDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPersonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CPersonDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_32771, &CPersonDlg::OnMenuuser)
	ON_COMMAND(ID_32772, &CPersonDlg::OnMenupassword)
	ON_COMMAND(ID_32775, &CPersonDlg::OnMenudept)
	ON_COMMAND(ID_32776, &CPersonDlg::OnMenuperson)
	ON_COMMAND(ID_32774, &CPersonDlg::OnMenuexit)
	ON_COMMAND(ID_32777, &CPersonDlg::OnMenucheck)
	ON_COMMAND(ID_32778, &CPersonDlg::OnMenuchecksum)
END_MESSAGE_MAP()


// CPersonDlg 消息处理程序

BOOL CPersonDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	CMenu *pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
	}

	m_Menu.LoadMenuW(IDR_MAINMENU);
	this->SetMenu(&m_Menu);
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CPersonDlg::OnPaint()
{
	CPaintDC dc(this);
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}

	// 加载图片
	CBitmap bmp;
	bmp.LoadBitmap(IDB_BITMAP1);
	BITMAP bitmap;
	bmp.GetBitmap(&bitmap);
	CDC bmpdc;
	bmpdc.CreateCompatibleDC(&dc);
	bmpdc.SelectObject(&bmp);
	CRect rect;
	this->GetClientRect(&rect);
	dc.StretchBlt(rect.left,rect.top,rect.right,rect.bottom,&bmpdc,
		rect.left,rect.top,bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CPersonDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CPersonDlg::OnMenuuser()
{
	// TODO: 在此添加命令处理程序代码
	CUserManage usermanage;
	usermanage.DoModal();
}


void CPersonDlg::OnMenupassword()
{
	// TODO: 在此添加命令处理程序代码
}


void CPersonDlg::OnMenudept()
{
	// TODO: 在此添加命令处理程序代码
}


void CPersonDlg::OnMenuperson()
{
	// TODO: 在此添加命令处理程序代码
}

void CPersonDlg::OnCancel() 
{
	if (MessageBox(L"确定要退出系统！",L"提示",
		MB_YESNO|MB_ICONWARNING) != IDYES)
		return;	
	CDialog::OnCancel();
}


void CPersonDlg::OnMenuexit()
{
	// TODO: 在此添加命令处理程序代码
	this->OnCancel();
}


void CPersonDlg::OnMenucheck()
{
	// TODO: 在此添加命令处理程序代码
}


void CPersonDlg::OnMenuchecksum()
{
	// TODO: 在此添加命令处理程序代码
}
