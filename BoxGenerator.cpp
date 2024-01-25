#include "BoxGenerator.h"
#include <ofAppRunner.h>
#include <chrono>

BoxGenerator::BoxGenerator()
{
	pos = ofVec3f(0);
	offset = ofVec3f(0);
}

BoxGenerator::~BoxGenerator()
{
}

void BoxGenerator::generate(double dt, ParticleData* p, size_t startId, size_t endId)
{
	for (int i = startId; i < endId; i++)
	{
		p->force[i] = ofVec3f(0, 0, 0);
		p->acceleration[i] = ofVec3f(0, 0, 0);
		p->velocity[i] = ofVec3f(0, 0, 0);
		p->position[i] = ofVec3f(rand() % 700 - 350, 0, rand() % 700 - 350);
		p->radius[i] = ofRandom(2) + 1;
		p->mass[i] = ofRandom(0.25) + 0.05;
		p->color[i] = ofColor::white;
		p->alive = endId;
		p->creationTime[i] = std::chrono::high_resolution_clock::now();
		p->lifeTime[i] = 20000;
	}
}
