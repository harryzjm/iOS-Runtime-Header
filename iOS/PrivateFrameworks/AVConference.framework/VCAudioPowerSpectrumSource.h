//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCAudioIOSink-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumSource <VCAudioIOSink>
{
    NSMutableArray *_powerSpectrumSinks;
    long long _streamToken;
    id _powerSpectrumSourceDelegate;
    struct opaqueCMSimpleQueue *_eventQueueAdd;
    struct opaqueCMSimpleQueue *_eventQueueRemove;
}

@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (void)unregisterAudioPowerSpectrumSink:(id)arg1;
- (void)registerAudioPowerSpectrumSink:(id)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)processInternalEvents;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
