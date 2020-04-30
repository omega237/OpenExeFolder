#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR lpszCmdLine, int)
{
  char acPathName [ MAX_PATH];
  GetModuleFileName ( NULL, acPathName, sizeof ( acPathName));
  char drive[4];
  for(int i=0; i<3; i++)
    drive[i]=acPathName[i];
  drive[3]='\0';
    ShellExecute(NULL, NULL, drive, NULL, NULL, SW_SHOWNORMAL);



  return 0;
}