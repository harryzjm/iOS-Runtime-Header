//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/FCAppActivityMonitor-Protocol.h>

@class NSHashTable, NSNotificationCenter, NSString;

@interface NUExtensionAppActivityMonitor : NSObject <FCAppActivityMonitor>
{
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
