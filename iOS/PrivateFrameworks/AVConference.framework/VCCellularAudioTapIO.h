//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCAudioIO, VCAudioPowerSpectrumSource;

__attribute__((visibility("hidden")))
@interface VCCellularAudioTapIO : NSObject
{
    VCAudioIO *_audioIO;
    VCAudioPowerSpectrumSource *_powerSpectrumSource;
    struct tagVCCellularAudioTapIORealtimeContext _realtimeContext;
}

@property(readonly, nonatomic) VCAudioPowerSpectrumSource *powerSpectrumSource; // @synthesize powerSpectrumSource=_powerSpectrumSource;
@property(retain, nonatomic) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(readonly, nonatomic) long long streamToken;
@property(readonly, nonatomic) struct tagVCCellularAudioTapIORealtimeContext *realtimeContext;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 powerSpectrumSource:(id)arg2;

@end

