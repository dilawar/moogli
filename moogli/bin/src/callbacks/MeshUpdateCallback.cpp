#include "callbacks/MeshUpdateCallback.hpp"

MeshUpdateCallback::MeshUpdateCallback() : UpdateCallback() { }

void
MeshUpdateCallback::update( osg::NodeVisitor *nv
                          , osg::Drawable *drawable
                          )
{
    Mesh * mesh = static_cast<Mesh *>(drawable);
    if(mesh -> allocation_required())   { mesh -> allocate();  }
    if(mesh -> construction_required()) { mesh -> construct(); }
    if(mesh -> coloring_required())     { mesh -> color();     }
}
