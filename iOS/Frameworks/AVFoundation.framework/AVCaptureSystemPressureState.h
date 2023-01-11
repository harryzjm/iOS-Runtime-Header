//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureSystemPressureStateInternal, NSString;

@interface AVCaptureSystemPressureState : NSObject
{
    AVCaptureSystemPressureStateInternal *_internal;
}

- (id)spiDebugDescription;
- (int)figLevel;
- (id)recommendedFrameRateRangeForPortrait;
@property(readonly) unsigned long long factors;
@property(readonly) NSString *level;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;
- (id)init;

@end

