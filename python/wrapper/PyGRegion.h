/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: PyGRegion.h
@Time: 2025/1/30 21:44
@Desc: 
***************************/

#ifndef CGRAPH_PYGREGION_H
#define CGRAPH_PYGREGION_H

#include "CGraph.h"

class PyGRegion : public CGraph::GRegion {
public:
    explicit PyGRegion() : CGraph::GRegion() {};
    ~PyGRegion() override {};

    CStatus addGElement(CGraph::GElementPtr element) {
        return addElement(element);
    }
};

#endif //CGRAPH_PYGREGION_H
