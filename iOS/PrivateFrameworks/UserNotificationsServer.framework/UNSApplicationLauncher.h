//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSystemService, NSMutableDictionary, UNSLocationMonitor;
@protocol OS_dispatch_queue;

@interface UNSApplicationLauncher : NSObject
{
    FBSSystemService *_systemService;
    UNSLocationMonitor *_locationMonitor;
    NSMutableDictionary *_bundleIdentifierToAssertions;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_removeAllProcessAssertionsAndInvalidate:(_Bool)arg1;
- (void)_removeAllProcessAssertionsAndInvalidate:(_Bool)arg1;
- (void)_queue_removeProcessAssertionsHavingReason:(unsigned int)arg1 forBundleID:(id)arg2 invalidate:(_Bool)arg3;
- (void)_queue_removeProcessAssertion:(id)arg1 forBundleID:(id)arg2 invalidate:(_Bool)arg3;
- (void)_queue_addProcessAssertion:(id)arg1 forBundleID:(id)arg2;
- (id)_queue_newProcessAssertionForBundleID:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 watchdogInterval:(double)arg5 acquisitionHandler:(CDUnknownBlockType)arg6 invalidationHandler:(CDUnknownBlockType)arg7;
- (void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_queue_actionForNotificationResponse:(id)arg1 bundleIdentifier:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_queue_backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithSystemService:(id)arg1 locationMonitor:(id)arg2;

@end

