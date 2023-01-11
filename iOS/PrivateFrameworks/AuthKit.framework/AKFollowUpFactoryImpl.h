//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AKFollowUpItemFactory-Protocol.h>

@class NSString;

@interface AKFollowUpFactoryImpl : NSObject <AKFollowUpItemFactory>
{
}

- (_Bool)IsFollowUpItemNotificationForced:(id)arg1;
- (id)actionWithTitle:(id)arg1 andActionKey:(id)arg2;
- (id)_clearAction;
- (id)_notificationFromPayload:(id)arg1;
- (id)_actionFromInfo:(id)arg1;
- (id)_actionsFromPayload:(id)arg1;
- (id)_itemFromPayload:(id)arg1 withAltDSID:(id)arg2;
- (id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1;
- (id)itemsForAltDSID:(id)arg1 fromIDMSPayload:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

