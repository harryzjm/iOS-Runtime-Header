//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSActivityMonitor, NSString;

__attribute__((visibility("hidden")))
@interface HMDIDSActivityMonitor : NSObject
{
    IDSActivityMonitor *_activityMonitor;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) IDSActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (void)stopBroadcastingSubActivity:(id)arg1;
- (void)broadcastSubActivity:(id)arg1 toPushTokens:(id)arg2;
- (void)listenWithDelegate:(id)arg1;
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

