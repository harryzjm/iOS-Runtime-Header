//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RSFloorPlan;

@interface RSScanUIFormatter : NSObject
{
    RSFloorPlan *_prevFloorPlan;
}

- (void).cxx_destruct;
- (void)reset;
- (id)runWithFloorPlan:(id)arg1 temporalMeta:(id)arg2 geometryMeta:(id)arg3;
- (id)processWithFloorPlan:(id)arg1 temporalMeta:(id)arg2 geometryMeta:(id)arg3;
- (id)init;

@end

