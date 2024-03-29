//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCIDRScheduler : NSObject
{
    NSMutableDictionary *_schedulerGroups;
    NSMutableArray *_schedulerItems;
    NSArray *_streams;
    unsigned int _basePeriodMs;
    unsigned int _framesPerBasePeriod;
    unsigned int _captureFramerate;
}

+ (unsigned int)computeGcdForX:(unsigned int)arg1 y:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int captureFramerate; // @synthesize captureFramerate=_captureFramerate;
@property(readonly, nonatomic) unsigned int basePeriodMs; // @synthesize basePeriodMs=_basePeriodMs;
- (id)description;
- (void)realignStreams;
- (void)computeStreamsIDRPosition;
- (void)computeSchedulerItemsPosition;
- (void)placeRemainingItems:(id)arg1 placedItems:(id)arg2 leftItem:(id)arg3 rightItem:(id)arg4;
- (void)computeSchedulerItemsBudget;
- (void)computeSchedulerItemList;
- (void)computeGroupList;
- (_Bool)computeCaptureFramerate;
- (void)computeBasePeriod;
- (void)dealloc;
- (id)initWithStreams:(id)arg1 captureFramerate:(unsigned int)arg2;

@end

