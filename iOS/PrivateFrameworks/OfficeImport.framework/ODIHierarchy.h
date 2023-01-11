//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ODIState;

__attribute__((visibility("hidden")))
@interface ODIHierarchy : NSObject
{
    int mType;
    int mMaxMappableTreeDepth;
    ODIState *mState;
    NSMutableDictionary *mNodeInfoMap;
}

+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;
- (void)dealloc;
- (void)map;
- (void)mapNode:(id)arg1;
- (struct CGRect)boundsOfNode:(id)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3;
- (void)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector *)arg1;
- (struct ODIHRangeVector *)mapRangesForNode:(id)arg1;
- (void)createInfoForNode:(id)arg1 depth:(int)arg2;
- (id)infoForNode:(id)arg1;
- (id)initWithType:(int)arg1 state:(id)arg2;

@end

