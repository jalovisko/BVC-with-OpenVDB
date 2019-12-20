//
//  boundary.h
//  OpenVDB_test
//
//  Created by Nikita Letov, 19 December 2019.
//  Copyright © 2019 Additive Design and Manufacturing Lab, McGill University. All rights reserved.
//

#ifndef __BOUNDARY_H
#define __BOUNDARY_H

// -----------------------------------------------------------------------------
// Volumetric cell interface
// ---
class IBoundary
{
public:
    virtual ~IBoundary() {}
};

std::unique_ptr<IBoundary> createBoundary();

#endif // __BOUNDARY_H
