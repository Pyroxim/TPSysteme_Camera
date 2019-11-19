//---------------------------------------------------------------------------

#include <vcl.h>
#include <windows.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	camera.Open();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ONClick(TObject *Sender)
{
    char trame[6];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x04;
	trame[3] = 0x00;
	trame[4] = 0x02;
	trame[5] = 0xFF;
	camera.Write(trame, 6);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    char trame[6];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x04;
	trame[3] = 0x00;
	trame[4] = 0x03;
	trame[5] = 0xFF;
	camera.Write(trame, 6);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	char trame[9];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x06;
	trame[3] = 0x01;
	trame[4] = 0x03;
	trame[5] = 0x03;
	trame[6] = 0x03;
	trame[7] = 0x01;
	trame[8] = 0xFF;
	camera.Write(trame, 9);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{
	char trame[9];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x06;
	trame[3] = 0x01;
	trame[4] = 0x03;
	trame[5] = 0x03;
	trame[6] = 0x03;
	trame[7] = 0x03;
	trame[8] = 0xFF;
	camera.Write(trame, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	char trame[9];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x06;
	trame[3] = 0x01;
	trame[4] = 0x03;
	trame[5] = 0x03;
	trame[6] = 0x01;
	trame[7] = 0x03;
	trame[8] = 0xFF;
	camera.Write(trame, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	char trame[9];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x06;
	trame[3] = 0x01;
	trame[4] = 0x03;
	trame[5] = 0x03;
	trame[6] = 0x03;
	trame[7] = 0x02;
	trame[8] = 0xFF;
	camera.Write(trame, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	char trame[9];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x06;
	trame[3] = 0x01;
	trame[4] = 0x03;
	trame[5] = 0x03;
	trame[6] = 0x02;
	trame[7] = 0x03;
	trame[8] = 0xFF;
	camera.Write(trame, 9);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button8Click(TObject *Sender)
{
	char trame[6];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x04;
	trame[3] = 0x07;
	trame[4] = 0x00;
	trame[5] = 0xFF;
	camera.Write(trame, 6);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	char trame[6];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x04;
	trame[3] = 0x07;
	trame[4] = 0x02;
	trame[5] = 0xFF;
	camera.Write(trame, 6);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	char trame[6];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x04;
	trame[3] = 0x07;
	trame[4] = 0x03;
	trame[5] = 0xFF;
	camera.Write(trame, 6);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button10Click(TObject *Sender)
{
	char trame[9];
	trame[0] = 0x81;
	trame[1] = 0x01;
	trame[2] = 0x06;
	trame[3] = 0x01;
	trame[4] = 0x03;
	trame[5] = 0x03;
	trame[6] = 0x01;
	trame[7] = 0x03;
	trame[8] = 0xFF;
	camera.Write(trame, 9);
}
//---------------------------------------------------------------------------

