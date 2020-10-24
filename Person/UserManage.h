#pragma once


// CUserManage 对话框

class CUserManage : public CDialog
{
	DECLARE_DYNAMIC(CUserManage)

public:
	CUserManage(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CUserManage();

// 对话框数据
	enum { IDD = IDD_DLGUSER };
	CListCtrl	m_grid;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnAppend();
	afx_msg void OnEdit();
	afx_msg void OnDelete();

private:
	void UpdateGrid();
};
