//
//  ObjectTrackerDebugger.h
//  CKObjectTrackerLib
//
//  Created by Christoph Kapffer on 24.08.12.
//  Copyright (c) 2012 HTW Berlin. All rights reserved.
//

#ifndef CKObjectTrackerLib_ObjectTrackerDebugger_h
#define CKObjectTrackerLib_ObjectTrackerDebugger_h

#include "ObjectTrackerTypeDefinitions.h"

namespace ck {

class ObjectTrackerDebugger {
    
public:
    static std::string debugString(TrackerDebugInfoStripped info);
    static std::vector<std::pair<std::string, cv::Mat> > debugImages(TrackerDebugInfo info, bool drawTransformedRect = true, bool drawFilteredMatches = true, bool drawAllMatchess = false);
};

} // end of namespace
    
#endif
