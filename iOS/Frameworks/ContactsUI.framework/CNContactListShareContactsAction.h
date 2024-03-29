//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactCardFieldPicker, CNContactListShareContactsActionContext, NSArray, NSString, UIActivityViewController, UIView;
@protocol CNContactListActionDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListShareContactsAction : NSObject
{
    id <CNContactListActionDelegate> _delegate;
    CNContactListShareContactsActionContext *_context;
    NSArray *_contacts;
    NSArray *_filteredContacts;
    CNContactCardFieldPicker *_fieldPicker;
    UIActivityViewController *_activityViewController;
    UIView *_sourceView;
}

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) CNContactCardFieldPicker *fieldPicker; // @synthesize fieldPicker=_fieldPicker;
@property(retain, nonatomic) NSArray *filteredContacts; // @synthesize filteredContacts=_filteredContacts;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(readonly, nonatomic) CNContactListShareContactsActionContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <CNContactListActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contactCardFieldPicker:(id)arg1 didFinishWithContacts:(id)arg2;
- (id)customActionViewControllerForActivityViewController:(id)arg1;
- (id)customLocalizedActionTitleForActivityViewController:(id)arg1;
- (_Bool)_customizationAvailableForActivityViewController:(id)arg1;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (id)activityItemForContacts:(id)arg1;
- (void)presentShareSheet;
- (void)presentFilterFieldPicker;
- (void)setupForContactFieldPicker;
- (_Bool)editRequiresAuthorization;
- (void)performAction;
- (_Bool)shouldReloadListOnCompletion;
- (id)initWithContacts:(id)arg1 sourceView:(id)arg2 context:(id)arg3;
- (id)initWithContacts:(id)arg1 sourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

