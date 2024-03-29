//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentPass.h>

@interface PKPaymentPass (NanoPassKit)
- (_Bool)npkIsInSuspendedState;
- (_Bool)npkIsInActivatingState;
- (_Bool)npkIsInLostMode;
- (void)npkSetPreferredPaymentApplication:(id)arg1;
- (id)npkPreferredContactlessPaymentApplication;
- (id)npkDevicePaymentApplicationForAID:(id)arg1;
- (id)npkSortedDeviceContactlessPaymentApplications;
- (_Bool)npkHasMultiplePaymentApplications;
- (_Bool)npkHasUserSelectableContactlessPaymentApplications;
@end

