//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UISApplicationStateClient : NSObject
{
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _queue_invalidated;
    BSServiceConnection *_queue_connection;
}

- (void).cxx_destruct;
- (id)_remoteTarget;
@property(nonatomic) double nextWakeIntervalSinceReferenceDate;
- (void)setMinimumBackgroundFetchInterval:(double)arg1;
@property(nonatomic) _Bool usesBackgroundNetwork;
@property(copy, nonatomic) NSString *badgeValue;
- (void)invalidate;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

