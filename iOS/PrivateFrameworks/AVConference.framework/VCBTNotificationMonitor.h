//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCBTNotificationMonitor : NSObject
{
    NSMutableArray *_handlerArray;
    struct os_unfair_lock_s _btNotificationHandlerLock;
}

+ (id)sharedInstance;
- (void)unregisterBluetoothImmediateNotifications;
- (void)registerForBluetoothImmediateNotifications;
- (void)unregisterDarwinNotification:(id)arg1;
- (void)registerDarwinNotification:(id)arg1;
- (void)processBTNotification:(CDStruct_b9c9288f *)arg1;
- (void)setupBTEventHandler;
- (void)unregisterAllBTNotificationHandlers;
- (void)unregisterBTNotificationHandler:(int)arg1;
- (int)registerBTNotificationHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
