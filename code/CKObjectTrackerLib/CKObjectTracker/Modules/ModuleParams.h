//
//  ModuleParams.h
//  CKObjectTrackerLib
//
//  Created by Christoph Kapffer on 25.08.12.
//  Copyright (c) 2012 HTW Berlin. All rights reserved.
//

#ifndef CKObjectTrackerLib_ModuleParams_h
#define CKObjectTrackerLib_ModuleParams_h

#include "ModuleTypes.h"

namespace ck {
    
    struct ModuleParams {
        ModuleType successor;
        cv::Mat sceneImage;
        cv::Mat homography;
        bool isObjectPresent;
        
        ModuleParams() : successor(MODULE_TYPE_EMPTY), homography(cv::Mat()) {};
    };
    
} // end of namespace

#endif
