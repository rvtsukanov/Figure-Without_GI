
// ChildView.cpp : реализация класса CChildView
//

#include "stdafx.h"
#include "App1.h"
#include "ChildView.h"
#include "Header.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// обработчики сообщений CChildView

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); 


	CMy2DPoint C(400,400);
	CMy2DObject f(C, 0, 300, 16, 38, 14);

	dc.MoveTo(C.m_x, C.m_y);
	f.Draw(dc);
	
	
	/*

	dc.MoveTo(f.an_point[0].m_x, f.an_point[0].m_y);
	for (int i(1); i<=4; i++){
		dc.LineTo(f.an_point[i].m_x, f.an_point[i].m_y);
	}
	dc.AngleArc(f.an_point[4].m_x, f.an_point[4].m_y, f.GetA3(), 180, 90);
	for (int i(5); i<=9; i++){
		dc.LineTo(f.an_point[i].m_x, f.an_point[i].m_y);
	}
	dc.MoveTo(f.an_point[0].m_x, f.an_point[0].m_y);



	*/

/*
	int x_c, y_c;
	int A, A1, A2, A3, kr_x, kr_y;


#define x_c 300
#define y_c 300
#define A 400
#define A1 100
#define A2 100 
#define A3 100

	kr_x = x_c-A/2;
	kr_y = y_c-A/2;

	dc.MoveTo(kr_x+A, kr_y);
	dc.LineTo(kr_x+A2, kr_y);
	dc.LineTo(kr_x, kr_y+A2);
	dc.LineTo(kr_x, kr_y+A-A3);
	dc.AngleArc(kr_x+A3, kr_y+A-A3, A3, 180, 90);
	dc.LineTo(kr_x+A, kr_y+A);
	dc.LineTo(kr_x+A, kr_y+(A-A1)/2+A1);
	dc.LineTo(kr_x+A-A1, kr_y+(A-A1)/2+A1);
	dc.LineTo(kr_x+A-A1, kr_y+(A-A1)/2);
	dc.LineTo(kr_x+A, kr_y+(A-A1)/2);
	dc.LineTo(kr_x+A, kr_y);
}
*/
}
