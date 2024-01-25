#include "Updater.h"
#include "src/ofApp.h"
#include <chrono>

void Updater::update(ParticleData* p, float windStrengthX, float windStrengthZ)
{
	for (int i = 0; i < p->alive; i++)
	{
		p->force[i] = ofVec3f(windStrengthX, -9.8, windStrengthZ);
		p->acceleration[i].x = p->force[i].x / abs(p->mass[i]);
		p->acceleration[i].y = p->force[i].y / p->mass[i];
		p->acceleration[i].z = p->force[i].z / abs(p->mass[i]);
		p->velocity[i] += p->acceleration[i] * 0.016;

		if(p->position[i].y > -600)
			p->position[i] += p->velocity[i] * 0.016;


		if (std::chrono::duration<double, std::milli>(std::chrono::high_resolution_clock::now() - p->creationTime[i]).count() > p->lifeTime[i])
			p->kill(i);
	}
}
