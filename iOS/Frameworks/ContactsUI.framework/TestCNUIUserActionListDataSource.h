//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIUserActionListDataSource-Protocol.h>

@class CNContact, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TestCNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource>
{
    _Bool _tracksChanges;
    NSDictionary *_userActionListModelResultBlocksByActionTypeAskedFor;
    NSDictionary *_actionsByActionTypeByContact;
    CNContact *_contact;
}

+ (id)allSupportedActionTypesWithCapabilities:(id)arg1;
+ (id)allSupportedActionTypes;
+ (id)allActionTypes;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSDictionary *actionsByActionTypeByContact; // @synthesize actionsByActionTypeByContact=_actionsByActionTypeByContact;
@property(retain, nonatomic) NSDictionary *userActionListModelResultBlocksByActionTypeAskedFor; // @synthesize userActionListModelResultBlocksByActionTypeAskedFor=_userActionListModelResultBlocksByActionTypeAskedFor;
@property(nonatomic) _Bool tracksChanges; // @synthesize tracksChanges=_tracksChanges;
- (void).cxx_destruct;
- (id)consumer:(id)arg1 imageForActionType:(id)arg2;
- (id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2;
- (id)actionTypesForConsumer:(id)arg1;
- (id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithActionsByActionTypeByContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
