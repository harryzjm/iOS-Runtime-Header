//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentPass.h>

@interface PKPaymentPass (NanoPassKit)
- (void)npkSetPreferredPaymentApplication:(id)arg1;
- (id)npkPreferredInAppPaymentApplication;
- (id)npkPreferredContactlessPaymentApplication;
- (id)npkSortedDeviceInAppPaymentApplications;
- (id)npkSortedDeviceContactlessPaymentApplications;
- (_Bool)npkHasUserSelectableInAppPaymentApplications;
- (_Bool)npkHasUserSelectableContactlessPaymentApplications;
- (id)npkDeviceInAppPaymentApplications;
- (id)npkDeviceContactlessPaymentApplications;
@end

