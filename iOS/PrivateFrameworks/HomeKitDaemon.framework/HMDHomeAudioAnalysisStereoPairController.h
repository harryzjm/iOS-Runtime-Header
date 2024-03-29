//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDHomeAudioAnalysisStereoPairController : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_audioAnalysisStereoPairDetectedEventsMap;
}

- (void).cxx_destruct;
- (void)updateAudioAnalysisStereoPairDetectedEvent:(id)arg1 key:(id)arg2 accessory:(id)arg3 notificationUUID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)compareOrUpdateRecentAudioAnalysisStereoPairEvent:(id)arg1 key:(id)arg2 accessory:(id)arg3 notificationUUID:(id)arg4 window:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

@end

