/*
Kevin Forshee 11/2/22

this cpp is to experiment with the PlaySound class

.wav player for pp/piano project


syntax/paramaters:
https://learn.microsoft.com/en-us/previous-versions/dd743680(v%3Dvs.85)

can use x|x to make more paramaters
must be in same place as cpp file to run
make sure in .wav format
put .wav after name 

starts song
    PlaySound(TEXT("GOOFY_AH.wav"), NULL, SND_ASYNC);

stops song
    PlaySound(0, 0, 0);
    note:stops playikng when consle is terminated
infinite loop
    SND_LOOP 

*/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
//#include<System>
using namespace std;


void example()
{
    PlaySound(TEXT("GOOFY_AH.wav"), NULL, SND_ASYNC|SND_LOOP);
    system("pause");

    //PlaySound(0, 0, 0);       //stops the audio

    //it works     must be in file w/ c++
}
