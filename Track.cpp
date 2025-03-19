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
    this->numberTrack += 1;
}

 

void Track::PlayTrack() 
{
	if (numberTrack == 1)
	{
        for (int i = 0; i < 3; i++)
        {
            Beep(300, 400);
            Beep(350, 600);
            Beep(300, 400);
            Beep(350, 1000);
        }
	}
	else if(numberTrack == 2)
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
    else if (numberTrack == 3)
	{
        Beep(261, 500);
        Beep(293, 500);
        Beep(329, 500);
        Beep(349, 500);
        Beep(392, 500);
        Beep(440, 500);
        Beep(493, 500);
	}
}


