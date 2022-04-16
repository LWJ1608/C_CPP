# include<SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(400, 660),"GG");

	Texture t;
	t.loadFromFile("images/tiles.png");

	Sprite s(t);
	s.setTextureRect(IntRect(0, 0, 18, 18));
	while (window.isOpen())
	{
		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
			{
				window.close();
			}
		}
		window.clear(Color::White);
		window.draw(s);
		window.display();
	}


}

