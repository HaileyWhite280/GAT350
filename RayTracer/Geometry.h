#pragma once
#include "Material.h"

class Geometry
{
public:
    Geometry() = default;
    virtual ~Geometry() = default;

    virtual bool Hit(const ray_t& r, float tMin, float tMax, raycastHit_t& hit) = 0;

public:
    Geometry(std::shared_ptr<Material> material) : material{ material } {}
   
    std::shared_ptr<Material> material;

};