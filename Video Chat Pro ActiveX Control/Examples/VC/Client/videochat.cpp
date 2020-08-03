// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "videochat.h"

/////////////////////////////////////////////////////////////////////////////
// Cvideochat

IMPLEMENT_DYNCREATE(Cvideochat, CWnd)

/////////////////////////////////////////////////////////////////////////////
// Cvideochat properties

short Cvideochat::GetVideoFormat()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

void Cvideochat::SetVideoFormat(short propVal)
{
	SetProperty(0x3, VT_I2, propVal);
}

CString Cvideochat::GetVideoDeviceName()
{
	CString result;
	GetProperty(0x8, VT_BSTR, (void*)&result);
	return result;
}

void Cvideochat::SetVideoDeviceName(LPCTSTR propVal)
{
	SetProperty(0x8, VT_BSTR, propVal);
}

CString Cvideochat::GetAudioDeviceName()
{
	CString result;
	GetProperty(0x9, VT_BSTR, (void*)&result);
	return result;
}

void Cvideochat::SetAudioDeviceName(LPCTSTR propVal)
{
	SetProperty(0x9, VT_BSTR, propVal);
}

long Cvideochat::GetFrameRate()
{
	long result;
	GetProperty(0xe, VT_I4, (void*)&result);
	return result;
}

void Cvideochat::SetFrameRate(long propVal)
{
	SetProperty(0xe, VT_I4, propVal);
}

long Cvideochat::GetVideoBitrate()
{
	long result;
	GetProperty(0xf, VT_I4, (void*)&result);
	return result;
}

void Cvideochat::SetVideoBitrate(long propVal)
{
	SetProperty(0xf, VT_I4, propVal);
}

short Cvideochat::GetAudioQuality()
{
	short result;
	GetProperty(0x10, VT_I2, (void*)&result);
	return result;
}

void Cvideochat::SetAudioQuality(short propVal)
{
	SetProperty(0x10, VT_I2, propVal);
}

BOOL Cvideochat::GetSendVideoStream()
{
	BOOL result;
	GetProperty(0x12, VT_BOOL, (void*)&result);
	return result;
}

void Cvideochat::SetSendVideoStream(BOOL propVal)
{
	SetProperty(0x12, VT_BOOL, propVal);
}

BOOL Cvideochat::GetSendAudioStream()
{
	BOOL result;
	GetProperty(0x13, VT_BOOL, (void*)&result);
	return result;
}

void Cvideochat::SetSendAudioStream(BOOL propVal)
{
	SetProperty(0x13, VT_BOOL, propVal);
}

short Cvideochat::GetAudioComplexity()
{
	short result;
	GetProperty(0x15, VT_I2, (void*)&result);
	return result;
}

void Cvideochat::SetAudioComplexity(short propVal)
{
	SetProperty(0x15, VT_I2, propVal);
}

CString Cvideochat::GetLicenseKey()
{
	CString result;
	GetProperty(0x17, VT_BSTR, (void*)&result);
	return result;
}

void Cvideochat::SetLicenseKey(LPCTSTR propVal)
{
	SetProperty(0x17, VT_BSTR, propVal);
}

short Cvideochat::GetVideoDevice()
{
	short result;
	GetProperty(0x22, VT_I2, (void*)&result);
	return result;
}

void Cvideochat::SetVideoDevice(short propVal)
{
	SetProperty(0x22, VT_I2, propVal);
}

short Cvideochat::GetAudioDevice()
{
	short result;
	GetProperty(0x23, VT_I2, (void*)&result);
	return result;
}

void Cvideochat::SetAudioDevice(short propVal)
{
	SetProperty(0x23, VT_I2, propVal);
}

BOOL Cvideochat::GetEchoCanceler()
{
	BOOL result;
	GetProperty(0x24, VT_BOOL, (void*)&result);
	return result;
}

void Cvideochat::SetEchoCanceler(BOOL propVal)
{
	SetProperty(0x24, VT_BOOL, propVal);
}

long Cvideochat::GetConferenceNumber()
{
	long result;
	GetProperty(0x27, VT_I4, (void*)&result);
	return result;
}

void Cvideochat::SetConferenceNumber(long propVal)
{
	SetProperty(0x27, VT_I4, propVal);
}

long Cvideochat::GetConferenceUserID()
{
	long result;
	GetProperty(0x28, VT_I4, (void*)&result);
	return result;
}

void Cvideochat::SetConferenceUserID(long propVal)
{
	SetProperty(0x28, VT_I4, propVal);
}

BOOL Cvideochat::GetUseDefaultVMR()
{
	BOOL result;
	GetProperty(0x31, VT_BOOL, (void*)&result);
	return result;
}

void Cvideochat::SetUseDefaultVMR(BOOL propVal)
{
	SetProperty(0x31, VT_BOOL, propVal);
}

short Cvideochat::GetOverlayType()
{
	short result;
	GetProperty(0x3a, VT_I2, (void*)&result);
	return result;
}

void Cvideochat::SetOverlayType(short propVal)
{
	SetProperty(0x3a, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// Cvideochat operations

void Cvideochat::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

short Cvideochat::GetVideoDeviceCount()
{
	short result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short Cvideochat::GetAudioDeviceCount()
{
	short result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

CString Cvideochat::GetVideoDeviceName(short iIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		iIndex);
	return result;
}

CString Cvideochat::GetAudioDeviceName(short iIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		iIndex);
	return result;
}

short Cvideochat::Connect(LPCTSTR strIPAddress, long iPortNo)
{
	short result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		strIPAddress, iPortNo);
	return result;
}

void Cvideochat::Disconnect()
{
	InvokeHelper(0x18, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString Cvideochat::GetIPAddress()
{
	CString result;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Cvideochat::VirtualScreenCaptureArea(long iLeft, long iTop, long iWidth, long iHeight)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iLeft, iTop, iWidth, iHeight);
}

void Cvideochat::VirtualScreenCaptureFullScreen(BOOL bFullScreen)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bFullScreen);
}

void Cvideochat::VirtualScreenCursorFile(LPCTSTR strCursorFile)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 strCursorFile);
}

void Cvideochat::VirtualScreenHighlightColor(unsigned long clrColor)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 clrColor);
}

void Cvideochat::VirtualScreenLeftClickColor(unsigned long clrColor)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 clrColor);
}

void Cvideochat::VirtualScreenRightClickColor(unsigned long clrColor)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 clrColor);
}

void Cvideochat::VirtualScreenShowSystemCursor(BOOL bShow)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x30, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bShow);
}

void Cvideochat::RefreshDevice()
{
	InvokeHelper(0x32, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Cvideochat::Rotate(short iRotateValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x33, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iRotateValue);
}

void Cvideochat::InvertColor(BOOL bInvert)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bInvert);
}

void Cvideochat::GrayScale(BOOL bEnable)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x36, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bEnable);
}

void Cvideochat::Lightness(short iR, short iG, short iB)
{
	static BYTE parms[] =
		VTS_I2 VTS_I2 VTS_I2;
	InvokeHelper(0x38, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iR, iG, iB);
}

void Cvideochat::VirtualScreenShowMouseHighlight(BOOL bShow)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x39, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bShow);
}

void Cvideochat::ChatBannerTextColor(short iR, short iG, short iB, short iA)
{
	static BYTE parms[] =
		VTS_I2 VTS_I2 VTS_I2 VTS_I2;
	InvokeHelper(0x3b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iR, iG, iB, iA);
}

void Cvideochat::ChatBannerState(short iState)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x3d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iState);
}

void Cvideochat::ChatBannerSetFont(LPCTSTR strFontName, short iFontSize, short iStyle)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I2 VTS_I2;
	InvokeHelper(0x3e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 strFontName, iFontSize, iStyle);
}

void Cvideochat::ChatBannerFadeEdge(double fFadeStart, double fFadeEnd)
{
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0x3f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 fFadeStart, fFadeEnd);
}

void Cvideochat::ChatBannerFillBgColor(BOOL bFill)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x40, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bFill);
}

void Cvideochat::ChatBannerPos(short iX, short iY)
{
	static BYTE parms[] =
		VTS_I2 VTS_I2;
	InvokeHelper(0x41, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iX, iY);
}

void Cvideochat::ChatBannerDirection(short iDirection)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x42, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iDirection);
}

void Cvideochat::ChatBannerSpeed(short iSpeed)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x44, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iSpeed);
}

void Cvideochat::ChatBannerBgColor(short iR, short iG, short iB, short iA)
{
	static BYTE parms[] =
		VTS_I2 VTS_I2 VTS_I2 VTS_I2;
	InvokeHelper(0x45, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iR, iG, iB, iA);
}

void Cvideochat::ChatBannerAddText(LPCTSTR strText)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x46, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 strText);
}

void Cvideochat::SetOverlayImage(LPCTSTR strImage)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x47, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 strImage);
}

void Cvideochat::SetOverlayImagePos(long iX, long iY)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x48, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iX, iY);
}

void Cvideochat::SetOverlayImageTransColor(short iTransR, short iTransG, short iTransB, short iImageAlpha)
{
	static BYTE parms[] =
		VTS_I2 VTS_I2 VTS_I2 VTS_I2;
	InvokeHelper(0x49, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iTransR, iTransG, iTransB, iImageAlpha);
}