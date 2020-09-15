#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	float size = 2.f;
	float speed = 40.f; 

	sf::RenderWindow window(sf::VideoMode(1200, 800), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setScale(1.f, 1.f);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch(event.type)
			{
				case sf::Event::Closed:
					window.close();
					break;
				
				case sf::Event::KeyPressed:
					switch(event.key.code)
					{
						case sf::Keyboard::W:
							shape.scale(1.2f, 1.2f);
							break;
						case sf::Keyboard::S:
							shape.scale(0.8f, 0.8f);
							break;
						case sf::Keyboard::Up:
							shape.move(0, -speed);
							break;
						case sf::Keyboard::Down:
							shape.move(0, speed);
							break;

						case sf::Keyboard::Right:
							shape.move(speed, 0);
							break;
						case sf::Keyboard::Left:
							shape.move(-speed, 0);
							break;
					}
					break;

			}
		}
		window.clear();
		window.draw(shape);
		window.display();
    }

    return 0;
}
