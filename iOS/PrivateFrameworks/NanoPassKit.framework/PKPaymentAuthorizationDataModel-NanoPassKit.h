//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentAuthorizationDataModel.h>

@interface PKPaymentAuthorizationDataModel (NanoPassKit)
- (_Bool)_hasNonPeerPaymentAcceptedPasses;
- (_Bool)npkIsSplitPeerPaymentWithoutAnotherPaymentMethod;
- (_Bool)npkIsSplitPeerPaymentWithAnotherPaymentMethod;
- (_Bool)npkIsSplitPeerPayment;
- (_Bool)npkIsSkeletonPeerPayment;
- (_Bool)npkIsPeerPayment;
- (void)npkSetPassAndPaymentApplicationForAID:(id)arg1;
@end

