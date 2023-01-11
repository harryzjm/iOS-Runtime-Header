//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PKAccount, PKBankAccountInformation, PKFindBankAccountInformationFooterView, PKTableHeaderView, UIButton;
@protocol PKAddBankAccountInformationViewControllerDelegate;

@interface PKAddBankAccountInformationViewController <UITextFieldDelegate>
{
    PKTableHeaderView *_tableHeader;
    PKFindBankAccountInformationFooterView *_footerView;
    UIButton *_deleteBankInformationButton;
    unsigned long long _state;
    PKBankAccountInformation *_bankInformation;
    NSArray *_cellText;
    NSArray *_cellPlaceholderText;
    NSMutableDictionary *_cells;
    NSString *_accountCountryCode;
    NSMutableDictionary *_userEnteredValues;
    _Bool _isEditingBankInformation;
    _Bool _hasInteractedWithCell;
    _Bool _prefilledFromKeychain;
    PKAccount *_featureAccount;
    _Bool _offerKeychainPreFill;
    id <PKAddBankAccountInformationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PKAddBankAccountInformationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool offerKeychainPreFill; // @synthesize offerKeychainPreFill=_offerKeychainPreFill;
- (void).cxx_destruct;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 minDigits:(unsigned long long)arg2 maxDigits:(unsigned long long)arg3;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 numberOfDigits:(unsigned long long)arg2;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1;
- (unsigned long long)_maxTextLengthForRow:(unsigned long long)arg1;
- (unsigned long long)_minTextLengthForRow:(unsigned long long)arg1;
- (void)_showHowToFindAccountInformationViewController:(id)arg1;
- (id)_footerView;
- (id)_headerTitle;
- (void)_updateHeaderAndNavigationItems;
- (id)_headerSubTitle;
- (void)_addPaymentFundingSourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateBankAccountInformationWithValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteBankInformation;
- (void)_setNavigationBarItemsHidden:(_Bool)arg1;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)_setIdleTimerDisabled:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (void)_setTableViewHeaderActivitySpinnerAnimated:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_hideHeaderActivitySpinner;
- (void)_showHeaderActivitySpinner;
- (id)_placeholderTextForRow:(unsigned long long)arg1;
- (id)_textForRow:(unsigned long long)arg1;
- (id)_bankInformationTextForRow:(unsigned long long)arg1;
- (void)_reloadTableSection;
- (void)_setState:(unsigned long long)arg1;
- (void)_setText:(id)arg1 forForCellAtRow:(unsigned long long)arg2;
- (id)_userEnteredTextForCellAtRow:(unsigned long long)arg1;
- (_Bool)_isCellValidAtRow:(unsigned long long)arg1;
- (_Bool)_isRoutingNumberCellValid;
- (_Bool)_isAccountNumberCellValid;
- (_Bool)_cellValuesAreValid;
- (double)_minimumRequiredWidthForCellText:(id)arg1 withFont:(id)arg2;
- (unsigned long long)_rowWithTextField:(id)arg1;
- (void)_setTableFooterView;
- (void)next:(id)arg1;
- (void)cancel:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithState:(unsigned long long)arg1 delegate:(id)arg2 bankInformation:(id)arg3 accountCountryCode:(id)arg4 featureAccount:(id)arg5;
- (id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3 featureAccount:(id)arg4;
- (id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3;
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
