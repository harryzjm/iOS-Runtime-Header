//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKExpressPassControllerDelegate-Protocol.h>
#import <NanoPassKit/NPKTransitAppletHistoryFetcherDelegate-Protocol.h>

@class NPKExpressPassController, NPKTransitAppletHistoryFetcher, NSString, PKPass, PKPaymentApplication, PKTransitAppletState;
@protocol NPKExpressTransitInterfaceControllerDataSource, NPKExpressTransitInterfaceControllerDelegate, OS_dispatch_source;

@interface NPKExpressTransitInterfaceController : NSObject <NPKTransitAppletHistoryFetcherDelegate, NPKExpressPassControllerDelegate>
{
    id <NPKExpressTransitInterfaceControllerDelegate> _delegate;
    id <NPKExpressTransitInterfaceControllerDataSource> _dataSource;
    NSObject<OS_dispatch_source> *_dismissalTimer;
    NPKTransitAppletHistoryFetcher *_appletHistoryFetcher;
    PKPass *_expressTransitPass;
    PKPaymentApplication *_expressTransitPaymentApplication;
    NPKExpressPassController *_expressPassController;
    PKTransitAppletState *_transactionStartAppletState;
}

@property(retain, nonatomic) PKTransitAppletState *transactionStartAppletState; // @synthesize transactionStartAppletState=_transactionStartAppletState;
@property(readonly, nonatomic) NPKExpressPassController *expressPassController; // @synthesize expressPassController=_expressPassController;
@property(retain, nonatomic) PKPaymentApplication *expressTransitPaymentApplication; // @synthesize expressTransitPaymentApplication=_expressTransitPaymentApplication;
@property(retain, nonatomic) PKPass *expressTransitPass; // @synthesize expressTransitPass=_expressTransitPass;
@property(retain, nonatomic) NPKTransitAppletHistoryFetcher *appletHistoryFetcher; // @synthesize appletHistoryFetcher=_appletHistoryFetcher;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dismissalTimer; // @synthesize dismissalTimer=_dismissalTimer;
@property(nonatomic) __weak id <NPKExpressTransitInterfaceControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NPKExpressTransitInterfaceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transitAppletHistoryFetcher:(id)arg1 gotTransitAppletHistory:(id)arg2 forAppletWithAID:(id)arg3;
- (void)_dismissExpressTransitAlert;
- (void)_scheduleDismissalOfExpressTransitAlertWithTimeout:(double)arg1;
- (void)expressPassController:(id)arg1 didUpdateExpressPasses:(id)arg2 expressPassesInformation:(id)arg3;
- (void)expressPassController:(id)arg1 didFailTransactionForPass:(id)arg2;
- (void)expressPassController:(id)arg1 didCompleteTransactionForPass:(id)arg2;
- (void)expressPassController:(id)arg1 didStartTransactionForPass:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
