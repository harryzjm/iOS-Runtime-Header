//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WKBokehMotionManager;

__attribute__((visibility("hidden")))
@interface WKBokehMotionFilter : NSObject
{
    WKBokehMotionManager *_motionManager;
    double _filterCoefficient;
    struct CGPoint _filteredPosition;
    struct CGSize _displacement;
}

- (void).cxx_destruct;
- (id)init;

@end

