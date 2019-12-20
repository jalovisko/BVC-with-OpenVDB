//
//  boundary.cpp
//  OpenVDB_test
//
//  Created by Nikita Letov, 19 December 2019.
//  Copyright © 2019 Additive Design and Manufacturing Lab, McGill University. All rights reserved.
//

#include "boundary.h"
#include <iostream>

class Boundary : public IBoundary
{
    
};

std::unique_ptr<IBoundary> createBoundary()
{
    return nullptr;
}
