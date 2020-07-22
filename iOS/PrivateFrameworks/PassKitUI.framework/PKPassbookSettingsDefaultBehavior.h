//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPassbookSettingsDataSource-Protocol.h>

@class NSString, PKPassLibraryDefaultDataProvider, PKPassbookPeerPaymentSettingsDefaultBehavior, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource>
{
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentOptionsDefaults *_options;
    PKPassbookPeerPaymentSettingsDefaultBehavior *_peerPaymentDefaultBehavior;
}

- (void).cxx_destruct;
- (_Bool)secureElementIsProductionSigned;
- (id)deviceName;
- (_Bool)hasFelicaSecureElement;
- (id)peerPaymentDataSource;
- (id)peerPaymentDelegate;
- (_Bool)canRegisterForPeerPayment;
- (id)setupFeaturedNetworksForDevice;
- (id)secureElementID;
- (id)optionsDelegate;
- (id)paymentDataProvider;
- (id)passLibraryDataProvider;
- (id)setupDelegate;
- (_Bool)deviceSupportsInAppPayments;
- (_Bool)deviceInRestrictedMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

