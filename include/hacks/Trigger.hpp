/*
 * HTrigger.h
 *
 *  Created on: Oct 5, 2016
 *      Author: nullifiedcat
 */

#pragma once

#include "common.hpp"

class CatVar;

namespace hacks
{
namespace shared
{
namespace triggerbot
{

void CreateMove();
bool ShouldShoot();
bool IsTargetStateGood(CachedEntity *entity);
CachedEntity *FindEntInSight(float range);
bool HeadPreferable(CachedEntity *target);
bool UpdateAimkey();
float EffectiveTargetingRange();
void Draw();
bool CheckLineBox(Vector B1, Vector B2, Vector L1, Vector L2, Vector &Hit);
}
}
}
