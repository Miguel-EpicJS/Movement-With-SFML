#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main()
{
    float x = 100.f;
    float posX = 200.f; 
    float posY = 200.f;
    sf::RenderWindow window(sf::VideoMode(1200, 800), "SFML works!");
    sf::CircleShape shape(x);
    shape.setFillColor(sf::Color::Green);
    
    while (window.isOpen())
    {
        sf::CircleShape shape(x);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            x += 0.3;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            x -= 0.3;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            posY--;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            posY++;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            posX++;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            posX--;
        }
        shape.setPosition(posX, posY);
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
