//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCGLWaveformViewController;

@protocol RCGLWaveformViewDelegate <NSObject>
- (void)waveformViewController:(RCGLWaveformViewController *)arg1 didChangeToSelectedTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(RCGLWaveformViewController *)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(RCGLWaveformViewController *)arg1;
- (void)waveformViewController:(RCGLWaveformViewController *)arg1 didScrubToTime:(double)arg2 finished:(_Bool)arg3;
@end

