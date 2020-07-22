//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject
{
    AVCaptureAudioChannelInternal *_internal;
}

@property(readonly, nonatomic) float peakHoldLevel;
@property(readonly, nonatomic) float averagePowerLevel;
- (void)invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end
