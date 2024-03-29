//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumMeter
{
    unsigned short _audioSpectrumBinCount;
    struct _VCAudioPowerSpectrumMeterRealtimeContext _realtimeContext;
}

@property(readonly, nonatomic) void *realtimeContext;
- (void)unregisterAllStreams;
- (void)releaseAudioPowerSpectrumForStreamToken:(id)arg1;
- (void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 powerSpectrumKey:(id)arg2 spectrumSource:(id)arg3;
- (void)dealloc;
- (id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

