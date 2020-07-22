//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject
{
    NSMutableData *_trafficColors;
    NSMutableData *_trafficOffsets;
    unsigned int _trafficDistance;
}

- (void).cxx_destruct;
- (void)copyTrafficToRoute:(id)arg1;
- (void)_removeDuplicateTraffic;
- (void)addTrafficFromETARoute:(id)arg1;
- (void)addTrafficFromRoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)addTrafficFromRoute:(id)arg1 withStepRange:(struct _NSRange)arg2;
- (id)init;

@end

