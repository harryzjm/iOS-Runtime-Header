//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/QLPreviewControllerDataSource-Protocol.h>
#import <PassKitUI/QLPreviewControllerDelegate-Protocol.h>
#import <PassKitUI/QLPreviewItemDataProvider-Protocol.h>

@class NSString, PKPaymentService, PKPaymentTransaction, PKTransactionReceipt, QLItem, QLPreviewController;

@interface PKTransactionReceiptDebugViewController <PKPaymentServiceDelegate, QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource>
{
    PKPaymentService *_paymentService;
    PKPaymentTransaction *_transaction;
    PKTransactionReceipt *_receipt;
    QLItem *_receiptPreviewItem;
    QLPreviewController *_previewController;
}

- (void).cxx_destruct;
- (id)_previewCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_amountCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_summaryItemCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_lineItemCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_headerFieldCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_infoCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_presentReceiptPreview;
- (void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)provideDataForItem:(id)arg1;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (id)initWithPaymentTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
