//
//  BVCGeometry.h
//  OpenVDB_test
//
//  Created by Nikita Letov, 19 December 2019.
//  Copyright © 2019 Additive Design and Manufacturing Lab, McGill University. All rights reserved.
//

#ifndef __VOLUMETRIC_CELL_H
#define __VOLUMETRIC_CELL_H

// -----------------------------------------------------------------------------
// Volumetric cell interface
// ---
class IVolumetricCell
{
public:
    virtual ~IVolumetricCell() {}
    static int vc_id;
};

std::unique_ptr<IVolumetricCell> createVolumetricCell();

#endif // __VOLUMETRIC_CELL_H
