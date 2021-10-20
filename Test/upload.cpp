#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <Wininet.h>
using namespace std;
#pragma comment(lib,"Wininet.lib")
//ftp地址
LPCWSTR ftpSvrIp = L"192.168.XX.XX";
//ftp端口号
int port = 21;
//上传文件的源路径
LPCWSTR sourceFilePath = L"E:\\Protect\\Protect32.dll";
//上传文件的目的路径
LPCWSTR desFilePath = L"/Protect.dll";
int main()
{
    //创建FTP连接
    HINTERNET hint;
    HINTERNET hftp;
    hint = ::InternetOpen(0, INTERNET_OPEN_TYPE_PRECONFIG, 0, 0, 0);
    if (hint == NULL)
    {
        cout << "创建ftp连接失败" << endl;
        return 0;
    }
    //创建ftp连接
    hftp = ::InternetConnect(hint, ftpSvrIp, port, NULL, NULL, INTERNET_SERVICE_FTP, 0, 0);
    if (hftp == NULL)
    {
        ::InternetCloseHandle(hint);
        cout << "ftp连接失败" << endl;
        return 0;
    }
    if (!::FtpPutFile(hftp, sourceFilePath, desFilePath, FTP_TRANSFER_TYPE_UNKNOWN, 0))
    {
        cout << "ftp上传失败" << endl;
        char szError[256];
        DWORD dwError = GetLastError();
        cout << dwError << endl;
 
        return 0;
    }
    ::InternetCloseHandle(hftp);
    ::InternetCloseHandle(hint);
 
    return 0;

}
