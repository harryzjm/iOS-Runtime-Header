//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCWaveformDataSource, RCWaveformSegment;

@protocol RCWaveformDataSourceObserver <NSObject>
- (void)waveformDataSource:(RCWaveformDataSource *)arg1 didLoadWaveformSegment:(RCWaveformSegment *)arg2;
- (void)waveformDataSourceDidFinishLoading:(RCWaveformDataSource *)arg1;

@optional
- (void)waveformDataSourceRequiresUpdate:(RCWaveformDataSource *)arg1;
@end

