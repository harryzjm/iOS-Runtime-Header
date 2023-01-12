//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsRemoteCamera
{
    long long _captureSource;
}

+ (_Bool)isOfferSupported;
- (unsigned long long)minBandwidth;
- (long long)tilesPerFrame;
- (int)operatingMode;
- (long long)captureSource;
- (long long)videoStreamMode;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;

@end

