#include "../include/scene.h"


Scene::Intersect(const Ray &ray, Intersection *itsc)
{ /* Traces the given ray into the scene and returns a bool
   * indicating whether it has intersected any of the primitives.
   * If so it fills the intersection structure with informations about
   * the closest intersection point along the ray.
   */
   bool hit = aggregate->Intersect(ray, itsc);
   return hit;
}

Scene::IntersectP(const Ray &ray)
{ /* Checks for the existence of intersections along the ray but
   * doesn't return any information about those intersections.
   * Generally faster than Scene::Intersect
   */
   bool hit = aggregate->IntersectP(ray);
   return hit;
}