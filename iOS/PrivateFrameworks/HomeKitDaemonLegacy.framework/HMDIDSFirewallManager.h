//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDIDSFirewallManagerContext, NSString;

__attribute__((visibility("hidden")))
@interface HMDIDSFirewallManager : HMFObject
{
    HMDIDSFirewallManagerContext *_context;
}

+ (id)logCategory;
+ (id)firewallEntriesForUserIDs:(id)arg1;
- (void).cxx_destruct;
@property(readonly) HMDIDSFirewallManagerContext *context; // @synthesize context=_context;
- (void)handleDidRemoveUser;
- (void)handleDidAddUserWithUserID:(id)arg1;
- (void)handleDidRemoveHome;
- (void)handleDidAddHome;
- (void)addFireWallEntryForUserIDs:(id)arg1;
- (void)replaceFireWallEntriesWithUserIDs:(id)arg1;
- (void)start;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

