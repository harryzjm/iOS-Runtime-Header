//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsRemoteMic
{
    int _preferredAudioPayload;
    unsigned long long _channelCount;
}

- (unsigned long long)ptime;
- (int)operatingMode;
- (long long)audioStreamMode;
- (int)preferredAudioCodec;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;

@end

