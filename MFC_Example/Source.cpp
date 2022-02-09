#include<afxwin.h>
class MyFrameWnd : public CFrameWnd
{
public:
	MyFrameWnd()
	{
		CString MyClass;
		MyClass = AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW, AfxGetApp()->LoadStandardCursor(IDC_CROSS), ::CreateSolidBrush(RGB(175, 115, 125)), AfxGetApp()->LoadStandardIcon(IDI_EXCLAMATION));
		Create(MyClass, L"FirstMFCProgram", WS_OVERLAPPEDWINDOW|WS_VISIBLE);
	}
};
class MyWinApp : public CWinApp
{
public:
	int InitInstance()
	{
		MyFrameWnd* wndPtr = new MyFrameWnd();
		m_pMainWnd = wndPtr;
		//wndPtr->ShowWindow(SW_SHOW);

		return 1;
	}
};
MyWinApp app;