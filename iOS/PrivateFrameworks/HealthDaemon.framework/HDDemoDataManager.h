//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDDemoDataGenerator, HDProfile, NSString;
@protocol OS_dispatch_queue;

@interface HDDemoDataManager : NSObject <HDHealthDaemonReadyObserver>
{
    NSObject<OS_dispatch_queue> *_demoDataQueue;
    HDProfile *_profile;
    HDDemoDataGenerator *_generator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDDemoDataGenerator *generator; // @synthesize generator=_generator;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void)daemonReady:(id)arg1;
- (void)_queue_generateDemoDataIfNeeded;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
