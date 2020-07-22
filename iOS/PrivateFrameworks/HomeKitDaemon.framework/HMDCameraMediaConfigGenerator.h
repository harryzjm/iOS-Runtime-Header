//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@interface HMDCameraMediaConfigGenerator : HMFObject
{
}

- (void)_loadMiscConfig:(id)arg1;
- (_Bool)_loadConfig:(id)arg1 cipherCuite:(id)arg2;
- (void)_loadConfig:(id)arg1 sendSrtpParameters:(id)arg2 receiveSrtpParameters:(id)arg3;
- (_Bool)extractReselectedConfigFromVideoTier:(id)arg1 videoStreamConfig:(id *)arg2;
- (_Bool)_loadAVCVideoStreamConfig:(id)arg1 protocolParameters:(id)arg2;
- (_Bool)_loadAVCAudioStreamConfig:(id)arg1 protocolParameters:(id)arg2;
- (_Bool)extractSelectedConfigFromProtocolParameters:(id)arg1 videoStreamConfig:(id *)arg2 audioStreamConfig:(id *)arg3;

@end

