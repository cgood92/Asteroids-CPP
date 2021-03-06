#pragma once

#include "ship.h"
#include "asteroid.h"
#include "uiInteract.h"
#include "bullet.h"

#include <vector>
using namespace std;

enum GAME_SATES { IN_PLAY, GAME_OVER };

class Astro
{
public:
	Astro();
	~Astro();

	void processFrame(const Interface *pUI);

private:
	Ship			*ship;
	vector<Asteroid> asteroids;
	vector<Bullet> bullets;

	void startGame();

	void clearAll();

	void handleUI(const Interface *pUI);
	void moveItems();
	void drawItems();
	void determineHitAsteroids();

	// Ship functions
	void shoot();
	void rocketBurst();

	//Launches random asteroid from container side
	void launchAsteroid();
	//Launches asteroid from specific point
	void launchAsteroid(double x, double y, int size);

	void determineLuanchAsteroid();

	//Game variables
	int waitCounter;
	int nextLaunchAsteroidTime;
	int state;
};

