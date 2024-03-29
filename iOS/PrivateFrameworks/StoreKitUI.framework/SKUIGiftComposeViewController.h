//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, NSMutableArray, NSObject, NSString, SKUIGiftAddressingSection, SKUIGiftAmountSection, SKUIGiftItemView, SKUIGiftSendDateSection, SKUIGiftTermsAndConditionsSection, SKUIGiftValidationResponse, SKUIGiftValidator, UIBarButtonItem, UIImage, UIPopoverController, UITableView, UIView;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUIGiftComposeViewController
{
    SKUIGiftAddressingSection *_addressingSection;
    SKUIGiftAmountSection *_amountSection;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    UIView *_searchResultsView;
    NSMutableArray *_sections;
    SKUIGiftSendDateSection *_sendDateSection;
    NSIndexPath *_showDatePickerIndexPathAfterKeyboardDismiss;
    UITableView *_tableView;
    _Bool _tappedNextWhileValidating;
    SKUIGiftTermsAndConditionsSection *_termsSection;
    NSObject<OS_dispatch_source> *_validationTimer;
    SKUIGiftValidator *_validator;
    UIPopoverController *_peoplePickerPopover;
    UIPopoverController *_searchResultsPopover;
    UIBarButtonItem *_nextButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
- (void)_validateGiftThrottled:(_Bool)arg1;
- (void)_validateGift;
- (void)_setItemImage:(id)arg1 error:(id)arg2;
- (void)_reloadSections;
- (void)_pushThemePickerOrShowInvalidAlert;
- (id)_itemView;
- (id)_itemImage;
- (id)_headerView;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;
- (void)_textViewDidEndEditingNotification:(id)arg1;
- (void)_textViewChangeNotification:(id)arg1;
- (void)_textFieldChangeNotification:(id)arg1;
- (void)_recipientsDidChangeNotification:(id)arg1;
- (void)_keyboardChangeNotification:(id)arg1;
- (void)_nextAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_amountControlAction:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)giftSendDateSection:(id)arg1 didChangeDate:(id)arg2;
- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 presentContactPicker:(id)arg3;
- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 dismissContactPicker:(id)arg3;
- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 didUpdateSearchController:(id)arg3;
- (void)tableView:(id)arg1 giftRecipientCellDidChangeSize:(id)arg2;
- (void)tableView:(id)arg1 giftRecipientCellDidChangeRecipients:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

