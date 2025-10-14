#include "Game.h"
#include <iostream>

Game::Game()
{
    std::cout << "Game constructor called!\n";
}

Game::~Game()
{
     std::cout << "Game destructor called!\n";
}

void Game::Initialize()
{
    // TODO
}

void Game::Run()
{
    while(true) {
        ProcessInput();
        Update();
        Render();
    }
}

void Game::ProcessInput()
{
    // TODO
}

void Game::Update()
{
    // TODO
}

void Game::Render()
{
    // TODO
}

void Game::Destroy()
{
    // TODO
}
