#include "game.h"

int main()
{
	//רנטפע
	if (!font.loadFromFile("Fonts/ZurichBoldItalicWin95bt.ttf"))
	{
		std::cerr << "Failed to load font!" << std::endl;
		return -1;
	}
	game();
}