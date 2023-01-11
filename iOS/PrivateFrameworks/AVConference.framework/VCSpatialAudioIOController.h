//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOControllerControl-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCSpatialAudioIOController : NSObject <VCAudioIOControllerControl>
{
}

- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)updateClient:(id)arg1;
- (void)stopClient:(id)arg1;
- (void)startClient:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
