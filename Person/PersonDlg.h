
// PersonDlg.h : ͷ�ļ�
//

#pragma once


// CPersonDlg �Ի���
class CPersonDlg : public CDialogEx
{
// ����
public:
	CMenu m_Menu;
	CPersonDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_PERSON_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
