//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, PKFelicaTransitAppletState, PKPass, PKPaymentApplication, PKPaymentTransaction;

@protocol NPKExpressFelicaTransitInterfaceServerExportedInterface <NSObject>
- (void)showInterfaceForExpressFelicaTransitTransactionCompleteWithConcreteTransactions:(NSArray *)arg1 ephemeralTransaction:(PKPaymentTransaction *)arg2 forPass:(PKPass *)arg3 paymentApplication:(PKPaymentApplication *)arg4 withAppletState:(PKFelicaTransitAppletState *)arg5 completion:(void (^)(_Bool))arg6;
@end
