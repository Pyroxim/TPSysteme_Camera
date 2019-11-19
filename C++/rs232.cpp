//---------------------------------------------------------------------------

#pragma hdrstop

#include "rs232.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

bool rs232::Open()
{
	com = CreateFile("COM1",
					GENERIC_WRITE|GENERIC_READ,
					0,
					NULL,
					OPEN_EXISTING,
					FILE_FLAG_NO_BUFFERING, //FILE_FLAG_OVERLAPPED,
					NULL);

	if(com == INVALID_HANDLE_VALUE)
	{
		return false;
	}
	else
	{
		DCB serie;
        // configuration de l’objet
		GetCommState(com, &serie);
		serie.BaudRate = 9600;
		serie.ByteSize = 8;
		serie.Parity = NOPARITY;
		serie.StopBits = ONESTOPBIT;
		SetCommState(com, &serie);
	}

    return true;
}

void rs232::Close()
{
	if(com != INVALID_HANDLE_VALUE)
	{
        CloseHandle(com);
    }
}

void rs232::Write(char * buf, int taille)
{
	unsigned long nbBytesSend;
	WriteFile(com, buf, taille, &nbBytesSend, NULL);
}

std::deque<char> & rs232::getBuffer()
{
    return buffer;
}
