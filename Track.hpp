#ifndef _TRACK_
#define _TRACK_
#include<iostream>
#include<Windows.h>


class Track
{
public:
	Track();
	Track(int numberTrack);
	Track(const Track &other);

	void PlayTrack();

private:
	int numberTrack;
};

#endif // !_TRACK