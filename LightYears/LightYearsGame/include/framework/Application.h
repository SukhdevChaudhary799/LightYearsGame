#pragma once
#include <SFML/Graphics.hpp>


namespace ly{

    class Application{
    public: 
        Application();
        ~Application();
        void Run();

    private: 
        sf::RenderWindow mWindow;
        float mTargetFrameRate;
        sf::Clock mTickClock;

        void Tick(float deltaTime);
        void RenderInternals();
        virtual void Render();
    };
}