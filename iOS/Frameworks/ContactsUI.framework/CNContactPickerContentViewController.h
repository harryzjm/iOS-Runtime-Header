//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactNavigationControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactPickerContentViewController-Protocol.h>

@class CNContactNavigationController, CNContactStoreDataSource, CNManagedConfiguration, NSArray, NSMutableArray, NSPredicate, NSString, UINavigationController;
@protocol CNContactPickerContentDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController>
{
    _Bool _clientWantsSingleContact;
    _Bool _clientWantsSingleProperty;
    _Bool _clientWantsMultipleContacts;
    _Bool _clientWantsMultipleProperties;
    _Bool _clientHasContactsAccess;
    _Bool _hidesSearchableSources;
    _Bool _onlyRealContacts;
    _Bool _allowsEditing;
    _Bool _allowsCancel;
    _Bool _hidesPromptInLandscape;
    id <CNContactPickerContentDelegate> _delegate;
    CNContactNavigationController *_contactNavigationController;
    CNContactStoreDataSource *_dataSource;
    NSMutableArray *_contactProperties;
    NSArray *_displayedPropertyKeys;
    long long _cardActions;
    NSString *_prompt;
    NSString *_bannerTitle;
    NSString *_bannerValue;
    NSPredicate *_predicateForEnablingContact;
    NSPredicate *_predicateForSelectionOfContact;
    NSPredicate *_predicateForSelectionOfProperty;
    CNManagedConfiguration *_managedConfiguration;
}

+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;
@property(retain, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(copy, nonatomic) NSPredicate *predicateForSelectionOfProperty; // @synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty;
@property(copy, nonatomic) NSPredicate *predicateForSelectionOfContact; // @synthesize predicateForSelectionOfContact=_predicateForSelectionOfContact;
@property(copy, nonatomic) NSPredicate *predicateForEnablingContact; // @synthesize predicateForEnablingContact=_predicateForEnablingContact;
@property(copy, nonatomic) NSString *bannerValue; // @synthesize bannerValue=_bannerValue;
@property(copy, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(nonatomic) _Bool hidesPromptInLandscape; // @synthesize hidesPromptInLandscape=_hidesPromptInLandscape;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) _Bool allowsCancel; // @synthesize allowsCancel=_allowsCancel;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) _Bool onlyRealContacts; // @synthesize onlyRealContacts=_onlyRealContacts;
@property(nonatomic) _Bool hidesSearchableSources; // @synthesize hidesSearchableSources=_hidesSearchableSources;
@property(nonatomic) long long cardActions; // @synthesize cardActions=_cardActions;
@property(copy, nonatomic) NSArray *displayedPropertyKeys; // @synthesize displayedPropertyKeys=_displayedPropertyKeys;
@property(retain, nonatomic) NSMutableArray *contactProperties; // @synthesize contactProperties=_contactProperties;
@property(retain, nonatomic) CNContactStoreDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CNContactNavigationController *contactNavigationController; // @synthesize contactNavigationController=_contactNavigationController;
@property(nonatomic) _Bool clientHasContactsAccess; // @synthesize clientHasContactsAccess=_clientHasContactsAccess;
@property(nonatomic) _Bool clientWantsMultipleProperties; // @synthesize clientWantsMultipleProperties=_clientWantsMultipleProperties;
@property(nonatomic) _Bool clientWantsMultipleContacts; // @synthesize clientWantsMultipleContacts=_clientWantsMultipleContacts;
@property(nonatomic) _Bool clientWantsSingleProperty; // @synthesize clientWantsSingleProperty=_clientWantsSingleProperty;
@property(nonatomic) _Bool clientWantsSingleContact; // @synthesize clientWantsSingleContact=_clientWantsSingleContact;
@property(nonatomic) __weak id <CNContactPickerContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_selectedProperties:(id)arg1;
- (void)_selectedContacts:(id)arg1;
- (void)_selectedProperty:(id)arg1;
- (void)_selectedContact:(id)arg1;
- (id)descriptorsForKeysRequiredByDelegate;
- (void)contactNavigationControllerDidCancel:(id)arg1;
- (void)contactNavigationControllerDidComplete:(id)arg1;
- (_Bool)contactNavigationController:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (_Bool)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1;
- (_Bool)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
- (_Bool)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(_Bool)arg1;
@property(readonly, nonatomic) UINavigationController *navigationController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updatePromptWithViewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (id)_validatePredicatesWithError:(id *)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

