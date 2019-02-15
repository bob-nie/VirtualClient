// VirtualClientView.cpp : implementation of the CVirtualClientView class
//

#include "stdafx.h"
#include "VirtualClient.h"
#include "VirtualClientDoc.h"
#include "VirtualClientView.h"
#include <afxcview.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView

IMPLEMENT_DYNCREATE(CVirtualClientView, CFormView)

BEGIN_MESSAGE_MAP(CVirtualClientView, CFormView)
	//{{AFX_MSG_MAP(CVirtualClientView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView construction/destruction

CVirtualClientView::CVirtualClientView()
	: CFormView(CVirtualClientView::IDD)
{
	//{{AFX_DATA_INIT(CVirtualClientView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CVirtualClientView::~CVirtualClientView()
{
}

void CVirtualClientView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVirtualClientView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BOOL CVirtualClientView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CVirtualClientView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	//初始化列表控件列头
	CListView* clv = (CListView*)this->GetDlgItem(IDC_LIST);
	CListCtrl* clc = &(clv->GetListCtrl());

	RECT* pRect = NULL;
	this->GetClientRect(pRect);

	int r = pRect->right;
	int l = pRect->left;

	char sztmp[100];

	sprintf(sztmp,"right is %d;left is %d",r,l);

	MessageBox(sztmp);
	
	//clc->InsertColumn();



}

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView printing

BOOL CVirtualClientView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVirtualClientView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVirtualClientView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CVirtualClientView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView diagnostics

#ifdef _DEBUG
void CVirtualClientView::AssertValid() const
{
	CFormView::AssertValid();
}

void CVirtualClientView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CVirtualClientDoc* CVirtualClientView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVirtualClientDoc)));
	return (CVirtualClientDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView message handlers
