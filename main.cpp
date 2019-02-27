#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(800,600),"Ventana");//Creacion del objeto ventana
	window.setFramerateLimit(60);//limite de fps de la ventana
	Event event;//Creacion del objeto evento
	
	while (window.isOpen())
	{
        while (window.pollEvent(event))
		{
        	switch (event.type)
			{
				case Event::Closed:
							window.close();
							break;
				case Event::KeyPressed:
            		if (event.key.code==Keyboard::Escape)
					{
            			window.close();
            			return EXIT_SUCCESS;
					}			 
			}
		}
		
		window.clear(Color::Black);
		window.display();
	}
}

