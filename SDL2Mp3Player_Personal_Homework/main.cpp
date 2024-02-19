#include <SDL.h>
#include <SDL_mixer.h>
#include "SDL2Music.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

	SDL2Music music;

	// Artist: Sidewalks and Skeletons
	music.addMusicTrack("C:/Users/User/Desktop/Mp3's/Cicatrice.mp3");
	music.addMusicTrack("C:/Users/User/Desktop/Mp3's/WhiteLight.mp3");
	music.addMusicTrack("C:/Users/User/Desktop/Mp3's/SlowMotion.mp3");
	music.addMusicTrack("C:/Users/User/Desktop/Mp3's/Goth.mp3");

	int choice = 0;
	while (choice != -1)
	{
		cout << endl;
		cout << "Which song to play? (enter -1 to exit)" << endl;
		cout << "enter 11 to pause/play music. " << endl;
	    cout << "Your number? -> ";

		cin >> choice;

		if (choice == -1)
		{
			break;
		}

		if (choice == 11)
		{
			music.Play_Pause();
		}
		else{
			music.playMusicTrack(choice);
		}
		music.playMusicTrack(choice);

		cin.clear();
	}
	return 0;
}

