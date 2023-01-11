//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL, PKPaymentSetupProductImageAssetURLs, PKPaymentSetupProductImageAssets;

@interface PKPaymentSetupProduct : NSObject <NSCopying>
{
    NSString *_displayName;
    unsigned long long _type;
    NSSet *_regions;
    NSString *_productIdentifier;
    NSString *_partnerIdentifier;
    NSArray *_requiredFields;
    NSArray *_supportedProtocols;
    NSURL *_termsURL;
    long long _supportedProvisioningMethods;
    NSDictionary *_readerModeMetadata;
    unsigned long long _flags;
    long long _hsa2Requirement;
    PKPaymentSetupProductImageAssetURLs *_imageAssetURLs;
    PKPaymentSetupProductImageAssets *_imageAssets;
    NSArray *_associatedStoreIdentifiers;
    NSURL *_appLaunchURL;
    NSArray *_searchTerms;
    NSArray *_supportedCameraCaptureTypes;
    NSArray *_supportedInAppTypes;
    NSArray *_paymentOptions;
    NSDictionary *_rawDictionary;
    NSString *_identifier;
    NSDictionary *_minimumOSVersion;
    NSMutableDictionary *_requestedProvisioningMethods;
}

+ (id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2;
+ (id)_inAppProvisioningURLWthScheme:(id)arg1 path:(id)arg2;
+ (id)_displayNameForCardType:(id)arg1;
+ (id)productsFromBrowseableBankApps:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *requestedProvisioningMethods; // @synthesize requestedProvisioningMethods=_requestedProvisioningMethods;
@property(retain, nonatomic) NSDictionary *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDictionary *rawDictionary; // @synthesize rawDictionary=_rawDictionary;
@property(readonly, copy, nonatomic) NSArray *paymentOptions; // @synthesize paymentOptions=_paymentOptions;
@property(readonly, copy, nonatomic) NSArray *supportedInAppTypes; // @synthesize supportedInAppTypes=_supportedInAppTypes;
@property(readonly, copy, nonatomic) NSArray *supportedCameraCaptureTypes; // @synthesize supportedCameraCaptureTypes=_supportedCameraCaptureTypes;
@property(readonly, copy, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(copy, nonatomic) NSURL *appLaunchURL; // @synthesize appLaunchURL=_appLaunchURL;
@property(copy, nonatomic) NSArray *associatedStoreIdentifiers; // @synthesize associatedStoreIdentifiers=_associatedStoreIdentifiers;
@property(readonly, nonatomic) PKPaymentSetupProductImageAssets *imageAssets; // @synthesize imageAssets=_imageAssets;
@property(readonly, nonatomic) PKPaymentSetupProductImageAssetURLs *imageAssetURLs; // @synthesize imageAssetURLs=_imageAssetURLs;
@property(readonly, nonatomic) long long hsa2Requirement; // @synthesize hsa2Requirement=_hsa2Requirement;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *readerModeMetadata; // @synthesize readerModeMetadata=_readerModeMetadata;
@property(nonatomic) long long supportedProvisioningMethods; // @synthesize supportedProvisioningMethods=_supportedProvisioningMethods;
@property(copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
@property(copy, nonatomic) NSArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(copy, nonatomic) NSArray *requiredFields; // @synthesize requiredFields=_requiredFields;
@property(copy, nonatomic) NSString *partnerIdentifier; // @synthesize partnerIdentifier=_partnerIdentifier;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSSet *regions; // @synthesize regions=_regions;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (_Bool)supportsOSVersion:(id)arg1 deviceClass:(id)arg2;
- (id)provisioningMethodTypes;
- (void)setProvisioningMethodMetadata:(id)arg1 forType:(id)arg2;
- (id)provisioningMethodMetadataForType:(id)arg1;
- (long long)allSupportedProtocols;
@property(readonly, copy, nonatomic) NSString *partnerName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProductDictionary:(id)arg1;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 paymentOptions:(id)arg4 termsURL:(id)arg5 provisioningMethods:(id)arg6 readerModeMetadata:(id)arg7 requiredFields:(id)arg8 imageAssets:(id)arg9 minimumOSVersion:(id)arg10 region:(id)arg11 hsa2Requirement:(id)arg12;

@end

