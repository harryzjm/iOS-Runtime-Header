//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQuery.h>

#import <ActivitySharing/ASFriendListQueryClientInterface-Protocol.h>

@class NSString;

@interface ASFriendListQuery : HKQuery <ASFriendListQueryClientInterface>
{
    CDUnknownBlockType _updateHandler;
    int _mostRecentToken;
}

+ (id)clientInterfaceProtocol;
+ (_Bool)supportsTaskServers;
- (void).cxx_destruct;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)client_deliverFriendList:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
