#pragma once
class DotInfo
{
	// setting up the  coordiates for the dots
private:
	int x;
	int y;

	//the colour of  the dot
	int colour;

	//state of the dot
	bool captured;


	//Contructor
public:
	DotInfo(int x1, int y1,int colour1) {
		x = x1;
		y = y1;
		colour = colour1; 
	}

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}

	void setCaptured(bool captured1)
	{
		captured = captured1;
	}

	bool isCaptured() 
	{
		return captured;
	}

	int getColour()
	{
		return colour;
	}
	void setColour(int colour1)
	{
		colour = colour1;
	}
};

