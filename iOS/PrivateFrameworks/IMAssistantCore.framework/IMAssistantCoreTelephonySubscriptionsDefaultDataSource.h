//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/IMAssistantCoreTelephonySubscriptionsDataSource-Protocol.h>

@class NSString;

@interface IMAssistantCoreTelephonySubscriptionsDefaultDataSource : NSObject <IMAssistantCoreTelephonySubscriptionsDataSource>
{
}

+ (id)sharedInstance;
- (id)simIDForSenderIdentity:(id)arg1;
- (id)handleIDForSenderIdentity:(id)arg1;
- (id)bestSenderIdentityForChatWithHandleIDs:(id)arg1;
@property(readonly, nonatomic) _Bool deviceHasMultipleSubscriptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
