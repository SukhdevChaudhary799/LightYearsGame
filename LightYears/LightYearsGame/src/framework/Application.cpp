#include "framework/Application.h"
#include <iostream>

using namespace ly;
Application::Application()
    : mWindow(sf::VideoMode({1024,1440}),"Light Years"), 
    mTargetFrameRate(600.0f), 
    mTickClock{}
{   
    
}

Application::~Application()
{
}

void Application::Run()
{
    mTickClock.restart();
    float accumulatedTime = 0.0f;
    float targetDeltaTime = 1.0f / mTargetFrameRate;
    while(mWindow.isOpen()) {
        // sf::Event windowEvent;
        while (auto event = mWindow.pollEvent()) {
            if (event->is<sf::Event::Closed>())
            mWindow.close();
        }
        float frameDeltaTime = mTickClock.restart().asSeconds();;
        accumulatedTime += frameDeltaTime;
        while (accumulatedTime >= targetDeltaTime){
            accumulatedTime -= targetDeltaTime;
            Tick(targetDeltaTime);
            RenderInternals();
        }
        // std::cout << "Ticking with framerate: " << 1.0f / frameDeltaTime << std::endl;

    }
}

void Application::Tick(float deltaTime){
    // std::cout << "Ticking with framerate: " << 1.0f / deltaTime << std::endl;
}

void Application::RenderInternals(){
    mWindow.clear();

    Render();

    mWindow.display();

}

void Application::Render(){
    sf::RectangleShape rect(sf::Vector2f(100.0f,100.0f));
    rect.setFillColor(sf::Color::Green);
    rect.setOrigin({50.0f,50.0f});
    rect.setPosition({mWindow.getSize().x / 2.0f, mWindow.getSize().y / 2.0f});
    mWindow.draw(rect);

    sf::CircleShape circ{50.0f};
    circ.setFillColor(sf::Color::Blue);
    circ.setOrigin({100.0f,100.0f});
    circ.setPosition({mWindow.getSize().x / 2.0f, mWindow.getSize().y / 2.0f});
    mWindow.draw(circ);
}



