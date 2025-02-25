#include "Track.hpp"

Track::Track()
{
    numberTrack = 1;
}

Track::Track(int numberTrack)
{
    this->numberTrack = numberTrack;
}

Track::Track(const Track &other)
{
    this->numberTrack = other.numberTrack;
}

void Track::PlayTrack() 
{
	if (numberTrack == 1)
	{

	}
	else if(numberTrack = 2)
	{
        Beep(440, 400); 
        Beep(494, 400); 
        Beep(523, 400); 
        Beep(494, 400); 

        
        Beep(440, 600); 
        Beep(440, 400); 
        Beep(392, 600); 
        Beep(440, 400); 
        Beep(349, 800); 

     
        Beep(440, 400); 
        Beep(494, 400); 
        Beep(523, 400); 
        Beep(494, 400); 

        Beep(440, 600); 
        Beep(440, 400); 
        Beep(392, 600); 
        Beep(440, 400); 
        Beep(349, 800); 

        
        Beep(330, 1200); 
        Beep(349, 1200); 
        Beep(392, 1600); 
	}
	else
	{

	}
}


