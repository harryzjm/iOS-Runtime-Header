//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactListActionConfiguration, CNContactListActionExecutor, CNContactOrbActionsController, NSArray, NSString;
@protocol CNContactListActionHelperDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListActionHelper : NSObject
{
    _Bool _includesContactOrbActions;
    _Bool _includesEditingActions;
    id <CNContactListActionHelperDelegate> _delegate;
    CNContactListActionConfiguration *_actionConfiguration;
    NSArray *_contacts;
    CNContactListActionExecutor *_actionExecutor;
    CNContactOrbActionsController *_contactActionsController;
}

+ (id)descriptorForRequiredKeysForMultiSelectAction:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContactOrbActionsController *contactActionsController; // @synthesize contactActionsController=_contactActionsController;
@property(retain, nonatomic) CNContactListActionExecutor *actionExecutor; // @synthesize actionExecutor=_actionExecutor;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) _Bool includesEditingActions; // @synthesize includesEditingActions=_includesEditingActions;
@property(nonatomic) _Bool includesContactOrbActions; // @synthesize includesContactOrbActions=_includesContactOrbActions;
@property(retain, nonatomic) CNContactListActionConfiguration *actionConfiguration; // @synthesize actionConfiguration=_actionConfiguration;
@property(nonatomic) __weak id <CNContactListActionHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)presentingViewControllerForActionsController:(id)arg1;
- (void)contactOrbActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;
- (id)presentingViewControllerForActions;
- (void)actionDidFinish:(id)arg1;
- (void)action:(id)arg1 presentViewController:(id)arg2;
- (_Bool)canShowContactActionsForContacts:(id)arg1;
- (id)contactActionsMenuFromItems:(id)arg1;
- (id)contactActionsMenuForContact:(id)arg1;
- (void)copyContacts:(id)arg1;
- (_Bool)canShowSetAsMyCardActionForContacts:(id)arg1;
- (void)updateMeContact:(id)arg1;
- (_Bool)canShowMergeActionForContacts:(id)arg1;
- (void)mergeContacts:(id)arg1;
- (void)deleteContacts:(id)arg1 dataSourceFilter:(id)arg2;
- (void)deleteContacts:(id)arg1;
- (void)shareContacts:(id)arg1 sourceView:(id)arg2;
- (_Bool)canRemoveFromGroup;
- (void)removeContactsFromGroup:(id)arg1 withConfirmation:(_Bool)arg2;
- (id)trailingSwipeActionsForContact:(id)arg1 dataSourceFilter:(id)arg2;
- (id)actionsForContacts:(id)arg1 dataSourceFilter:(id)arg2 sourceView:(id)arg3;
- (id)searchActionsForContacts:(id)arg1;
- (id)initWithContactStore:(id)arg1 environment:(id)arg2 contactFormatter:(id)arg3 undoManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

