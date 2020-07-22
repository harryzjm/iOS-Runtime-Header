//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIDefaultUserActionFetcher-Protocol.h>

@class CRRecentContactsLibrary, NSString;

@interface CNUIDefaultUserActionFetcher : NSObject <CNUIDefaultUserActionFetcher>
{
    CRRecentContactsLibrary *_library;
}

+ (_Bool)doesRecentContact:(id)arg1 matchUserActionItem:(id)arg2;
+ (id)defaultActionItemForActionItem:(id)arg1 recentContacts:(id)arg2;
+ (id)queryForUserActionItem:(id)arg1;
+ (id)recentContactsForUserActionItem:(id)arg1 recentsLibrary:(id)arg2 scheduler:(id)arg3;
@property(readonly, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)defaultActionItemForActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)observableForDefaultActionsChanged;
- (id)initWithRecentsLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

