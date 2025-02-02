// 人事管理系统Doc.h : interface of the CMyDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DOC_H__D79C4967_41B9_422C_8E36_4B16867F9D35__INCLUDED_)
#define AFX_DOC_H__D79C4967_41B9_422C_8E36_4B16867F9D35__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "人事管理系统Set.h"


class CMyDoc : public CDocument
{
protected: // create from serialization only
	CMyDoc();
	DECLARE_DYNCREATE(CMyDoc)

// Attributes
public:
	CMySet m_mySet;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyDoc)
	public:
	virtual BOOL OnNewDocument();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DOC_H__D79C4967_41B9_422C_8E36_4B16867F9D35__INCLUDED_)
