#include "CircleGenerator.h"

CircleGenerator::CircleGenerator()
{
	pos = ofVec3f(0);
	offset = ofVec3f(0);
}

CircleGenerator::~CircleGenerator()
{
}


void CircleGenerator::generate(double dt, ParticleData* p, size_t startId, size_t endId)
{
	for (int i = startId; i < endId; i++)
	{
		p->force[i] = ofVec3f(0, 0, 0);
		p->acceleration[i] = ofVec3f(0, 0, 0);
		p->velocity[i] = ofVec3f(0, 0, 0);

		float radius = 30;
		float ang = ofRandomf() * 2 * PI;
		float hyp = sqrt(ofRandomf() * radius * radius);
		float adj = cos(ang) * hyp;
		float opp = sin(ang) * hyp;
		p->position[i] = ofVec3f(adj, -599, opp);
		p->radius[i] = ofRandom(2) + 1;
		p->mass[i] = -ofRandom(0.35) - 0.1;
		p->alive = endId;
		p->creationTime[i] = std::chrono::high_resolution_clock::now();
		p->lifeTime[i] = 2500;

		p->color[i] = ofColor(ofRandom(200, 255), ofRandom(0, 150), ofRandom(0, 30));
	}
}
