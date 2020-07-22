//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileGestaltExtensions/MCProfileConnectionObserver-Protocol.h>
#import <MobileGestaltExtensions/NSCopying-Protocol.h>

@class CADisplay, MCProfileConnection, MGFileWatcher, NSMutableArray, NSMutableSet, NSString;

@interface MGNotificationObserver : NSObject <NSCopying, MCProfileConnectionObserver>
{
    NSMutableSet *_blocks;
    int _type;
    NSString *_argument;
    union {
        NSMutableArray *_darwinTokens;
        struct __SCPreferences *_scPrefs;
        MGFileWatcher *_fileWatcher;
        MCProfileConnection *_mcConnection;
        CADisplay *_mainDisplay;
        void *_swBehaviorHandle;
        struct __CTServerConnection *_ctCenter;
        struct __SCDynamicStore *_scdynaStore;
    } _registration;
}

- (void)_removeBlock:(CDUnknownBlockType)arg1;
- (void)_addBlock:(CDUnknownBlockType)arg1;
- (void)_cancelRegistration;
- (id)initWithType:(int)arg1 argument:(id)arg2;
- (void)startDynaStoreMonitoringWithArgument:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)invokeBlocks;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

