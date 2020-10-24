
// PersonDlg.h : 头文件
//

#pragma once


// CPersonDlg 对话框
class CPersonDlg : public CDialogEx
{
// 构造
public:
	CMenu m_Menu;
	CPersonDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_PERSON_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnMenuuser();
	afx_msg void OnMenupassword();
	afx_msg void OnMenudept();
	afx_msg void OnMenuperson();
	afx_msg void OnMenuexit();
	afx_msg void OnMenucheck();
	afx_msg void OnMenuchecksum();

	void OnCancel();
};
