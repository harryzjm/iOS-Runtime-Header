//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_path, OS_nw_path_monitor;

@interface TPSNetworkPathMonitor : NSObject
{
    _Bool _networkReachable;
    _Bool _networkConstrained;
    _Bool _networkExpensive;
    _Bool _networkPathMonitorActive;
    _Bool _shouldNotify;
    NSMapTable *_observers;
    NSObject<OS_dispatch_queue> *_monitorQueue;
    NSObject<OS_dispatch_source> *_notifyTimer;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_nw_path> *_currentPath;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_nw_path> *currentPath; // @synthesize currentPath=_currentPath;
@property(retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // @synthesize pathMonitor=_pathMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *notifyTimer; // @synthesize notifyTimer=_notifyTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // @synthesize monitorQueue=_monitorQueue;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool shouldNotify; // @synthesize shouldNotify=_shouldNotify;
@property(nonatomic) _Bool networkPathMonitorActive; // @synthesize networkPathMonitorActive=_networkPathMonitorActive;
@property(nonatomic, getter=isNetworkExpensive) _Bool networkExpensive; // @synthesize networkExpensive=_networkExpensive;
@property(nonatomic, getter=isNetworkConstrained) _Bool networkConstrained; // @synthesize networkConstrained=_networkConstrained;
@property(nonatomic, getter=isNetworkReachable) _Bool networkReachable; // @synthesize networkReachable=_networkReachable;
- (void)_cancelPendingNotifications;
- (void)_notifyObserversWithDelay:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_networkPathUpdated:(id)arg1;
- (void)_uninitializeMonitor;
- (void)_initializeMonitor;
- (void)_initializeMonitorIfNeeded;
- (id)description;
- (_Bool)isNetworkError:(id)arg1;
- (_Bool)usesWifiConnection;
- (_Bool)usesCellularConnection;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end
