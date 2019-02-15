// VirtualClientView.h : interface of the CVirtualClientView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VIRTUALCLIENTVIEW_H__FD5478B6_C021_4C5B_B4C4_987301321171__INCLUDED_)
#define AFX_VIRTUALCLIENTVIEW_H__FD5478B6_C021_4C5B_B4C4_987301321171__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVirtualClientView : public CFormView
{
protected: // create from serialization only
	CVirtualClientView();
	DECLARE_DYNCREATE(CVirtualClientView)

public:
	//{{AFX_DATA(CVirtualClientView)
	enum{ IDD = IDD_VIRTUALCLIENT_FORM };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:
	CVirtualClientDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVirtualClientView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVirtualClientView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVirtualClientView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VirtualClientView.cpp
inline CVirtualClientDoc* CVirtualClientView::GetDocument()
   { return (CVirtualClientDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIRTUALCLIENTVIEW_H__FD5478B6_C021_4C5B_B4C4_987301321171__INCLUDED_)
