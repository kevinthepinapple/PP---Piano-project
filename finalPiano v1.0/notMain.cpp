/*
Audio play by Kevin Forshee 11/2
inputs by Trevor 11/2

implememnt them together into 1 cpp because you can't use variables in the PlaySound class/function

update: had to change from array to indevidual switch case bc of syntax TEXT
input

11/8 update: added more void functions for more sets of keyboard    


*/


#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include<string>
#include"MMSystem.h"
#include <conio.h>


#pragma comment(lib, "winmm.lib")


using namespace std;

//ascii codes for keys   defines all the keys
#define KEY_Q 113
#define KEY_W 119
#define KEY_E 101
#define KEY_R 114
#define KEY_T 116
#define KEY_Y 121
#define KEY_U 117
#define KEY_I 105
#define KEY_O 111
#define KEY_P 112
#define KEY_A 97
#define KEY_S 115
#define KEY_D 100
#define KEY_F 102
#define KEY_G 103
#define KEY_H 104
#define KEY_J 106
#define KEY_K 107
#define KEY_L 108
#define KEY_Z 122
#define KEY_X 120
#define KEY_C 99
#define KEY_V 118
#define KEY_B 98

//first iteration of piano. files are long. may be the problem of the slow program
void wav_player() {
	char key = _getch(); //getch gets the key 
	int value = key;     
	bool piano = true;

	//string key_files[24] = { "key01.wav", "key02.wav", "key03.wav", "key04.wav", "key05.wav", "key06.wav", "key07.wav", "key08.wav", "key09.wav", "key10.wav", "key11.wav", "key12.wav", "key13.wav", "key14.wav", "key15.wav", "key16.wav", "key17.wav", "key18.wav", "key19.wav", "key20.wav", "key21.wav", "key22.wav", "key23.wav", "key24.wav" };
	while (piano) {

		switch (_getch()) {

		case KEY_Q://1
			PlaySound(0, 0, 0);
			cout << "you pressed Q!";
			PlaySound(TEXT("key01.wav"), NULL, SND_SYNC);
			//system("pause");
			//wav_player(1);
			break;
		case KEY_W://2
			PlaySound(0, 0, 0);
			cout << "you pressed W!";
			PlaySound(TEXT("key02.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(2);
			break;
		case KEY_E://3
			PlaySound(0, 0, 0);
			cout << "you pressed E!";
			PlaySound(TEXT("key03.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(3);
			break;
		case KEY_R://4
			PlaySound(0, 0, 0);
			cout << "you pressed R!";
			PlaySound(TEXT("key04.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(4);
			break;
		case KEY_T://5
			PlaySound(0, 0, 0);
			cout << "you pressed T!";
			PlaySound(TEXT("key05.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(5)
			break;
		case KEY_Y://6
			PlaySound(0, 0, 0);
			cout << "you pressed Y!";
			PlaySound(TEXT("key06.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(6);
			break;
		case KEY_U://7
			cout << "you pressed U!";
			PlaySound(TEXT("key07.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(7);
			break;
		case KEY_I://8
			cout << "you pressed I!";
			PlaySound(TEXT("key08.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(8);
			break;
		case KEY_O://9
			cout << "you pressed O!";
			PlaySound(TEXT("key09.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(9);
			break;
		case KEY_P://10
			cout << "you pressed P!";
			PlaySound(TEXT("key10.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(10);
			break;
		case KEY_A://11
			cout << "you pressed A!";
			PlaySound(TEXT("key11.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(11);
			break;
		case KEY_S://12
			cout << "you pressed S!";
			PlaySound(TEXT("key12.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(12);
			break;
		case KEY_D://13
			cout << "you pressed D!";
			PlaySound(TEXT("key13.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(13);
			break;
		case KEY_F://14
			cout << "you pressed F!";
			PlaySound(TEXT("key14.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(14);
			break;
		case KEY_G://15
			cout << "you pressed G!";
			PlaySound(TEXT("key15.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(15);
			break;
		case KEY_H://16
			cout << "you pressed H!";
			PlaySound(TEXT("key16.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(16);
			break;
		case KEY_J://17
			cout << "you pressed J!";
			PlaySound(TEXT("key17.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(17);
			break;
		case KEY_K://18
			cout << "you pressed K!";
			PlaySound(TEXT("key18.wav"), NULL, SND_SYNC);
			system("pause");//
			//wav_player(18);
			break;
		case KEY_L://19
			cout << "you pressed L!";
			PlaySound(TEXT("key19.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(19);
			break;
		case KEY_Z://20
			cout << "you pressed Z!";
			PlaySound(TEXT("key20.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(20);
			break;
		case KEY_X://21
			cout << "you pressed X!";
			PlaySound(TEXT("key21.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(21);
			break;
		case KEY_C://22
			cout << "you pressed C!";
			PlaySound(TEXT("key22.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(22);
			break;
		case KEY_V://23
			cout << "you pressed V!";
			PlaySound(TEXT("key23.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(23);
			break;
		case KEY_B://24
			cout << "you pressed B!";
			PlaySound(TEXT("key24.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(24);
			break;
		}

		key = _getch();
		value = key;
	}
}   // first piano itteration     //first iteration    /
//second itteration of piano. smaller more precise notes
void wav_player2() {
	char key = _getch(); //getch gets the key 
	int value = key;
	bool piano = true;

	while (piano) {

		switch (_getch()) {

		case KEY_Q://1
			PlaySound(0, 0, 0);
			cout << "you pressed Q!";
			PlaySound(TEXT("A.wav"), NULL, SND_SYNC);
			//system("pause");
			//wav_player(1);
			break;
		case KEY_W://2
			PlaySound(0, 0, 0);
			cout << "you pressed W!";
			PlaySound(TEXT("B.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(2);
			break;
		case KEY_E://3
			PlaySound(0, 0, 0);
			cout << "you pressed E!";
			PlaySound(TEXT("Bb.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(3);
			break;
		case KEY_R://4
			PlaySound(0, 0, 0);
			cout << "you pressed R!";
			PlaySound(TEXT("C.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(4);
			break;
		case KEY_T://5
			PlaySound(0, 0, 0);
			cout << "you pressed T!";
			PlaySound(TEXT("C_s.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(5)
			break;
		case KEY_Y://6
			PlaySound(0, 0, 0);
			cout << "you pressed Y!";
			PlaySound(TEXT("C_s1.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(6);
			break;
		case KEY_U://7
			cout << "you pressed U!";
			PlaySound(TEXT("C1.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(7);
			break;
		case KEY_I://8
			cout << "you pressed I!";
			PlaySound(TEXT("D.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(8);
			break;
		case KEY_O://9
			cout << "you pressed O!";
			PlaySound(TEXT("D_s.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(9);
			break;
		case KEY_P://10
			cout << "you pressed P!";
			PlaySound(TEXT("D_s1.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(10);
			break;
		case KEY_A://11
			cout << "you pressed A!";
			PlaySound(TEXT("D1.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(11);
			break;
		case KEY_S://12
			cout << "you pressed S!";
			PlaySound(TEXT("E.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(12);
			break;
		case KEY_D://13
			cout << "you pressed D!";
			PlaySound(TEXT("E1.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(13);
			break;
		case KEY_F://14
			cout << "you pressed F!";
			PlaySound(TEXT("F.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(14);
			break;
		case KEY_G://15
			cout << "you pressed G!";
			PlaySound(TEXT("F_s.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(15);
			break;
		case KEY_H://16
			cout << "you pressed H!";
			PlaySound(TEXT("F1.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(16);
			break;
		case KEY_J://17
			cout << "you pressed J!";
			PlaySound(TEXT("G.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(17);
			break;
		case KEY_K://18
			cout << "you pressed K!";
			PlaySound(TEXT("G_s.wav"), NULL, SND_SYNC);
			system("pause");//
			//wav_player(18);
			break;
		case KEY_L://19
			cout << "you pressed L!";
			PlaySound(TEXT("GOOFY_AH.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(19);
			break;
		}

		key = _getch();
		value = key;
	}

}
//steel drums piano set
void wav_player3() {
	char key = _getch(); //getch gets the key 
	int value = key;
	bool piano = true;
	while (piano) {

		switch (_getch()) {

		case KEY_Q://1
			PlaySound(0, 0, 0);
			cout << "you pressed Q!";
			PlaySound(TEXT("A_Drum.wav"), NULL, SND_SYNC);
			//system("pause");
			//wav_player(1);
			break;
		case KEY_W://2
			PlaySound(0, 0, 0);
			cout << "you pressed W!";
			PlaySound(TEXT("B_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(2);
			break;
		case KEY_E://3
			PlaySound(0, 0, 0);
			cout << "you pressed E!";
			PlaySound(TEXT("Bb_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(3);
			break;
		case KEY_R://4
			PlaySound(0, 0, 0);
			cout << "you pressed R!";
			PlaySound(TEXT("C_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(4);
			break;
		case KEY_T://5
			PlaySound(0, 0, 0);
			cout << "you pressed T!";
			PlaySound(TEXT("C1_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(5)
			break;
		case KEY_Y://6
			PlaySound(0, 0, 0);
			cout << "you pressed Y!";
			PlaySound(TEXT("Cq_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(6);
			break;
		case KEY_U://7
			cout << "you pressed U!";
			PlaySound(TEXT("Cq1_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(7);
			break;
		case KEY_I://8
			cout << "you pressed I!";
			PlaySound(TEXT("D_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(8);
			break;
		case KEY_O://9
			cout << "you pressed O!";
			PlaySound(TEXT("D1_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(9);
			break;
		case KEY_P://10
			cout << "you pressed P!";
			PlaySound(TEXT("Dq_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(10);
			break;
		case KEY_A://11
			cout << "you pressed A!";
			PlaySound(TEXT("Dq1_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(11);
			break;
		case KEY_S://12
			cout << "you pressed S!";
			PlaySound(TEXT("E_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(12);
			break;
		case KEY_D://13
			cout << "you pressed D!";
			PlaySound(TEXT("E1_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(13);
			break;
		case KEY_F://14
			cout << "you pressed F!";
			PlaySound(TEXT("F_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(14);
			break;
		case KEY_G://15
			cout << "you pressed G!";
			PlaySound(TEXT("F1_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(15);
			break;
		case KEY_H://16
			cout << "you pressed H!";
			PlaySound(TEXT("G_Drum.wav"), NULL, SND_SYNC);
			system("pause");
			//wav_player(16);
			break;

		}

		key = _getch();
		value = key;
	}
}


int main() {
	int j;

	//asks user what piano set it uses
	cout << " what version do yuo want to use\n \n \n1) ver 1.0\n2)ver 1.5 w/ smaller file lengths\n3)Steel_Drums\n ";
	cin >> j;
	if (j == 1) wav_player();
	else if (j == 2) wav_player2();
	else if (j == 3) wav_player3();


	system("pause");

}