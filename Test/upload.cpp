#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <Wininet.h>
using namespace std;
#pragma comment(lib,"Wininet.lib")
//ftp��ַ
LPCWSTR ftpSvrIp = L"192.168.XX.XX";
//ftp�˿ں�
int port = 21;
//�ϴ��ļ���Դ·��
LPCWSTR sourceFilePath = L"E:\\Protect\\Protect32.dll";
//�ϴ��ļ���Ŀ��·��
LPCWSTR desFilePath = L"/Protect.dll";
int main()
{
    //����FTP����
    HINTERNET hint;
    HINTERNET hftp;
    hint = ::InternetOpen(0, INTERNET_OPEN_TYPE_PRECONFIG, 0, 0, 0);
    if (hint == NULL)
    {
        cout << "����ftp����ʧ��" << endl;
        return 0;
    }
    //����ftp����
    hftp = ::InternetConnect(hint, ftpSvrIp, port, NULL, NULL, INTERNET_SERVICE_FTP, 0, 0);
    if (hftp == NULL)
    {
        ::InternetCloseHandle(hint);
        cout << "ftp����ʧ��" << endl;
        return 0;
    }
    if (!::FtpPutFile(hftp, sourceFilePath, desFilePath, FTP_TRANSFER_TYPE_UNKNOWN, 0))
    {
        cout << "ftp�ϴ�ʧ��" << endl;
        char szError[256];
        DWORD dwError = GetLastError();
        cout << dwError << endl;
 
        return 0;
    }
    ::InternetCloseHandle(hftp);
    ::InternetCloseHandle(hint);
 
    return 0;

}
