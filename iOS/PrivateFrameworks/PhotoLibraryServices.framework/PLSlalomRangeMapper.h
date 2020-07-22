//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLSlalomRangeMapper : NSObject
{
    NSMutableArray *_originalLengths;
    NSMutableArray *_scaledLengths;
    NSMutableArray *_scaledRegions;
}

- (void)enumerateScaledRegionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5;
- (float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3;
- (float)originalTimeForScaledTime:(float)arg1;
- (float)scaledTimeForOriginalTime:(float)arg1;
- (void)addNextRange:(float)arg1 scaledLength:(float)arg2;
- (void)dealloc;
- (id)init;

@end
