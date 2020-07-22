//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject
{
    AVFrameRateRangeInternal *_internal;
}

+ (id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2;
- (_Bool)includesFrameDuration:(CDStruct_1b6d18a9)arg1;
- (_Bool)includesFrameRate:(double)arg1;
@property(readonly) CDStruct_1b6d18a9 minFrameDuration;
@property(readonly) CDStruct_1b6d18a9 maxFrameDuration;
@property(readonly) double maxFrameRate;
@property(readonly) double minFrameRate;
- (void)dealloc;
- (id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
