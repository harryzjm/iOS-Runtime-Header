//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject
{
    CNChangesNotifierProxy *_notifierProxy;
}

+ (void)flushSharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2;
+ (id)sharedNotifier;
@property(retain, nonatomic) CNChangesNotifierProxy *notifierProxy; // @synthesize notifierProxy=_notifierProxy;
- (void).cxx_destruct;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(_Bool)arg1;
- (_Bool)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)waitForCurrentTasksToFinish;
- (void)didChangeMeContactSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)didSaveChangesSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)willSaveChanges;
- (void)dealloc;
- (id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2;
- (id)init;

@end

