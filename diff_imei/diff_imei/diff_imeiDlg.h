
// diff_imeiDlg.h : ͷ�ļ�
//

#pragma once


// Cdiff_imeiDlg �Ի���
class Cdiff_imeiDlg : public CDialogEx
{
// ����
public:
	Cdiff_imeiDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DIFF_IMEI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedConnectDBAndReadZipUrl();
};
