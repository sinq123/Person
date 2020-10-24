
// PersonDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Person.h"
#include "PersonDlg.h"
#include "afxdialogex.h"
#include "UserManage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPersonDlg �Ի���




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


// CPersonDlg ��Ϣ�������

BOOL CPersonDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	CMenu *pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
	}

	m_Menu.LoadMenuW(IDR_MAINMENU);
	this->SetMenu(&m_Menu);
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CPersonDlg::OnPaint()
{
	CPaintDC dc(this);
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}

	// ����ͼƬ
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

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CPersonDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CPersonDlg::OnMenuuser()
{
	// TODO: �ڴ���������������
	CUserManage usermanage;
	usermanage.DoModal();
}


void CPersonDlg::OnMenupassword()
{
	// TODO: �ڴ���������������
}


void CPersonDlg::OnMenudept()
{
	// TODO: �ڴ���������������
}


void CPersonDlg::OnMenuperson()
{
	// TODO: �ڴ���������������
}

void CPersonDlg::OnCancel() 
{
	if (MessageBox(L"ȷ��Ҫ�˳�ϵͳ��",L"��ʾ",
		MB_YESNO|MB_ICONWARNING) != IDYES)
		return;	
	CDialog::OnCancel();
}


void CPersonDlg::OnMenuexit()
{
	// TODO: �ڴ���������������
	this->OnCancel();
}


void CPersonDlg::OnMenucheck()
{
	// TODO: �ڴ���������������
}


void CPersonDlg::OnMenuchecksum()
{
	// TODO: �ڴ���������������
}
