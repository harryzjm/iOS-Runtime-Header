//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOControllerControl-Protocol.h>

@class NSString, VCSystemAudioCapture;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSystemAudioCaptureController : NSObject <VCAudioIOControllerControl>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    VCSystemAudioCapture *_systemAudioCapture;
    _Bool _running;
}

- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)updateClient:(id)arg1 direction:(unsigned char)arg2;
- (void)stopClient:(id)arg1;
- (void)startClient:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
