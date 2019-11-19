//---------------------------------------------------------------------------

#ifndef rs232H
#define rs232H

#include <Windows.h>
#include <deque>

class rs232
{
	private:
		HANDLE com;
		std::deque<char> buffer;

	public:
		bool Open();
		void Close();
		void Write(char * buf, int taille);

		std::deque<char> & getBuffer();
};

//---------------------------------------------------------------------------
#endif
