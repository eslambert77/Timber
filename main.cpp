#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    RenderWindow window(VideoMode(1920, 1080), "Timber!!!!", Style::Fullscreen);
    //Create a texture to hold a graphic on the GPU
    Texture textureBackground;
    //Load a graphic into the texture
    textureBackground.loadFromFile("graphics/background.png");
    //Create a spite
    Sprite spriteBackground;
    //Attach the texture to the sprite
    spriteBackground.setTexture(textureBackground);
    //Set sprite to cover the screen
    spriteBackground.setPosition(0, 0);
    while (window.isOpen()){
        /*
            ***********************************
            Handle the players input
            ***********************************
         */
        if(Keyboard::isKeyPressed(Keyboard::Escape)){
            window.close();
        }
        //Clear everything from the last frame
        window.clear();
        window.draw(spriteBackground);
        //Draw our game scene here
        //Show everything we just drew
        window.display();
    }
    return 0;
}