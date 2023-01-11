//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKMonthDayCollectionViewControllerDelegate-Protocol.h>

@class NSCalendar, NSDate, NSDateFormatter, NSIndexPath, NSNumberFormatter, NSString, NSTimeZone, PKAccount, PKAccountAutomaticPaymentsController, PKAccountAutomaticPaymentsDateFooterView, PKMonthDayCollectionViewController, PKTableHeaderView;

@interface PKAccountAutomaticPaymentsDateViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate>
{
    NSDate *_date;
    long long _scheduledDay;
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    unsigned long long _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSIndexPath *_selectedIndexPath;
    PKMonthDayCollectionViewController *_monthDayCollectionViewController;
    NSNumberFormatter *_ordinalDayNumberFormatter;
    NSDateFormatter *_cardinalDayDateFormatter;
    _Bool _useOrdinalDay;
    PKAccountAutomaticPaymentsDateFooterView *_collectionFooterView;
    NSTimeZone *_productTimeZone;
    NSCalendar *_productCalendar;
}

- (void).cxx_destruct;
- (void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (id)_addBankAccountInformationViewController;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)monthDaySelectionViewController:(id)arg1 didSelectDate:(id)arg2 day:(long long)arg3;
- (id)_footerText;
- (void)_updateNextButtonEnabledIfNecessary;
- (void)_performPresentPayment;
- (void)_handlePresentPayment;
- (_Bool)_shouldShowCollectionView;
- (long long)_frequency;
- (void)_handleNext:(id)arg1;
- (id)tableHeaderView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
