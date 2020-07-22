//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface CAMCallStatusMonitor : NSObject
{
    _Bool _callActive;
    NSMutableSet *__disabledReasons;
    NSObject<OS_dispatch_queue> *__avscAccessQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_avscAccessQueue; // @synthesize _avscAccessQueue=__avscAccessQueue;
@property(readonly, nonatomic) NSMutableSet *_disabledReasons; // @synthesize _disabledReasons=__disabledReasons;
@property(nonatomic, getter=isCallActive) _Bool callActive; // @synthesize callActive=_callActive;
- (void).cxx_destruct;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_setCallActive:(_Bool)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (void)_handleCallIsActiveDidChangeNotification:(id)arg1;
- (void)_accessQueue_queryCallActiveStatusForReason:(id)arg1;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (void)removeDisabledReason:(long long)arg1;
- (void)addDisabledReason:(long long)arg1;
- (void)_enableCallStatusMonitor;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_registerForAVSystemControllerNotifications;
- (void)dealloc;
- (id)initDisabledForLaunch;
- (id)init;
- (id)initWithInitialDisabledReasons:(id)arg1;

@end
