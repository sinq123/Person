#pragma once


// CUserManage �Ի���

class CUserManage : public CDialog
{
	DECLARE_DYNAMIC(CUserManage)

public:
	CUserManage(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CUserManage();

// �Ի�������
	enum { IDD = IDD_DLGUSER };
	CListCtrl	m_grid;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnAppend();
	afx_msg void OnEdit();
	afx_msg void OnDelete();

private:
	void UpdateGrid();
};
