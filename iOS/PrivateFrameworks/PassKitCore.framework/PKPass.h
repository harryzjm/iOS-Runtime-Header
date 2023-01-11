//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, PKBarcode, PKImage, PKLiveRenderedShaderSet, PKNFCPayload, PKPassBarcodeSettings, PKPassDisplayProfile, PKPassFrontFaceImageSet, PKPassLiveRenderedImageSet, PKPassPersonalization, PKPaymentPass, PKSecureElementPass, UIImage;

@interface PKPass <NSCopying, NSSecureCoding>
{
    PKLiveRenderedShaderSet *_liveRenderedShaderSet;
    _Bool _remotePass;
    _Bool _isCloudKitArchived;
    _Bool _voided;
    _Bool _hasStoredValue;
    _Bool _liveRenderedBackground;
    _Bool _supportsCategoryVisualization;
    _Bool _revoked;
    NSArray *_embeddedLocations;
    unsigned long long _passType;
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    NSString *_organizationName;
    NSDate *_relevantDate;
    NSDictionary *_userInfo;
    NSString *_deviceName;
    NSString *_passLibraryMachServiceName;
    NSNumber *_sequenceCounter;
    NSURL *_passURL;
    NSString *_teamID;
    NSDate *_expirationDate;
    NSString *_groupingID;
    NSSet *_embeddedBeacons;
    NSURL *_webLocationsURL;
    NSURL *_localLocationsURL;
    long long _sharingMethod;
    NSURL *_sharingURL;
    NSString *_sharingText;
    NSSet *_associatedPassTypeIdentifiers;
    PKNFCPayload *_nfcPayload;
    PKImage *_partialFrontFaceImagePlaceholder;
    NSString *_provisioningCredentialHash;
    NSString *_cardholderInfoSectionTitle;
    NSDate *_ingestedDate;
    NSDate *_modifiedDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)recordNamePrefix;
+ (unsigned long long)defaultSettings;
+ (_Bool)isValidObjectWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
+ (Class)classForPassType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isRevoked) _Bool revoked; // @synthesize revoked=_revoked;
@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(copy, nonatomic) NSString *cardholderInfoSectionTitle; // @synthesize cardholderInfoSectionTitle=_cardholderInfoSectionTitle;
@property(copy, nonatomic) NSString *provisioningCredentialHash; // @synthesize provisioningCredentialHash=_provisioningCredentialHash;
@property(nonatomic) _Bool supportsCategoryVisualization; // @synthesize supportsCategoryVisualization=_supportsCategoryVisualization;
@property(nonatomic) _Bool liveRenderedBackground; // @synthesize liveRenderedBackground=_liveRenderedBackground;
@property(readonly, nonatomic) PKImage *partialFrontFaceImagePlaceholder; // @synthesize partialFrontFaceImagePlaceholder=_partialFrontFaceImagePlaceholder;
@property(nonatomic) _Bool hasStoredValue; // @synthesize hasStoredValue=_hasStoredValue;
@property(copy, nonatomic, setter=setNFCPayload:) PKNFCPayload *nfcPayload; // @synthesize nfcPayload=_nfcPayload;
@property(copy, nonatomic) NSSet *associatedPassTypeIdentifiers; // @synthesize associatedPassTypeIdentifiers=_associatedPassTypeIdentifiers;
@property(copy, nonatomic) NSString *sharingText; // @synthesize sharingText=_sharingText;
@property(copy, nonatomic) NSURL *sharingURL; // @synthesize sharingURL=_sharingURL;
@property(nonatomic) long long sharingMethod; // @synthesize sharingMethod=_sharingMethod;
@property(copy, nonatomic) NSURL *localLocationsURL; // @synthesize localLocationsURL=_localLocationsURL;
@property(copy, nonatomic) NSURL *webLocationsURL; // @synthesize webLocationsURL=_webLocationsURL;
@property(copy, nonatomic) NSSet *embeddedBeacons; // @synthesize embeddedBeacons=_embeddedBeacons;
@property(copy, nonatomic) NSString *groupingID; // @synthesize groupingID=_groupingID;
@property(nonatomic, getter=isVoided) _Bool voided; // @synthesize voided=_voided;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(nonatomic) _Bool isCloudKitArchived; // @synthesize isCloudKitArchived=_isCloudKitArchived;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(copy, nonatomic) NSNumber *sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
@property(copy, nonatomic) NSString *passLibraryMachServiceName; // @synthesize passLibraryMachServiceName=_passLibraryMachServiceName;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic, getter=isRemotePass) _Bool remotePass; // @synthesize remotePass=_remotePass;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned long long passType; // @synthesize passType=_passType;
@property(copy, nonatomic) NSArray *embeddedLocationsArray; // @synthesize embeddedLocationsArray=_embeddedLocations;
- (id)_changeMessageForFieldKey:(id)arg1;
- (id)_localizationKeyForMultipleDiff;
- (id)dictionariesForSemanticKey:(id)arg1;
- (id)stringsForSemanticKey:(id)arg1;
- (id)personNameComponentsForSemanticKey:(id)arg1;
- (id)currencyAmountForSemanticKey:(id)arg1;
- (id)locationForSemanticKey:(id)arg1;
- (id)numberForSemanticKey:(id)arg1;
- (id)dateForSemanticKey:(id)arg1;
- (id)stringForSemanticKey:(id)arg1;
- (_Bool)availableForAutomaticPresentationUsingBeaconContext;
- (_Bool)availableForAutomaticPresentationUsingVASContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPassIncludingMetadata:(id)arg1;
@property(readonly, nonatomic) struct CGRect logoRect;
- (id)passLocalizedStringForKey:(id)arg1;
@property(readonly, nonatomic) PKLiveRenderedShaderSet *liveRenderedShaderSet;
@property(readonly, nonatomic) PKPassFrontFaceImageSet *frontFaceImageSet;
@property(readonly, nonatomic) PKPassLiveRenderedImageSet *liveRenderedImageSet;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) PKPassBarcodeSettings *barcodeSettings;
@property(readonly, nonatomic) NSString *businessChatIdentifier;
@property(readonly, nonatomic) PKImage *compactBankLogoLightImage;
@property(readonly, nonatomic) PKImage *compactBankLogoDarkImage;
- (id)thumbnailImage;
- (id)stripImage;
- (id)backgroundImage;
- (id)logoImage;
@property(readonly, nonatomic) PKImage *personalizationLogoImage;
@property(readonly, nonatomic) PKImage *cardHolderPicture;
@property(readonly, nonatomic) PKImage *footerImage;
@property(readonly, nonatomic) struct CGRect stripRect;
@property(readonly, nonatomic) struct CGRect thumbnailRect;
@property(readonly, nonatomic) PKImage *partialFrontFaceImage;
@property(readonly, nonatomic) PKImage *frontFaceShadowImage;
@property(readonly, nonatomic) PKImage *frontFaceImage;
@property(readonly, nonatomic) PKImage *notificationIconImage;
@property(readonly, nonatomic) PKImage *rawIcon;
@property(readonly, nonatomic) PKImage *iconImage;
- (id)allSemantics;
- (id)semantics;
@property(readonly, nonatomic) _Bool isPersonalizable;
@property(readonly, nonatomic) PKPassPersonalization *personalization;
@property(readonly, nonatomic) NSURL *appLaunchURL;
@property(readonly, nonatomic) NSArray *storeIdentifiers;
- (id)balanceFields;
- (id)primaryFields;
@property(readonly, nonatomic) NSArray *backFieldBuckets;
@property(readonly, nonatomic) NSArray *frontFieldBuckets;
@property(readonly, nonatomic) long long transitType;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *logoText;
@property(readonly, nonatomic) PKBarcode *barcode;
@property(readonly) NSString *notificationCenterTitle;
- (id)diff:(id)arg1;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)fieldForKey:(id)arg1;
- (id)localizedValueForFieldKey:(id)arg1;
- (_Bool)supportsSharing;
- (_Bool)isExpired;
- (_Bool)isUpdatable;
- (_Bool)isRelevantDateOld;
- (_Bool)hasValidNFCPayload;
- (_Bool)hasLocationRelevancyInfo;
- (_Bool)hasTimeOrLocationRelevancyInfo;
@property(readonly, nonatomic) PKSecureElementPass *secureElementPass;
@property(readonly, nonatomic) PKPaymentPass *paymentPass;
@property(readonly, nonatomic) NSString *pluralLocalizedName;
@property(readonly, nonatomic) NSString *lowercaseLocalizedName;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) long long style;
@property(copy, nonatomic) NSSet *embeddedLocations; // @dynamic embeddedLocations;
- (unsigned long long)itemType;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesIncludingServerData:(_Bool)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) long long eventType;
@property(readonly, nonatomic) _Bool silenceRequested;
- (void)loadFlightsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *flightCode;
@property(readonly, nonatomic) NSString *airlineCode;
@property(readonly, nonatomic) unsigned long long flightNumber;
@property(readonly, nonatomic) _Bool hasFlightDetails;

// Remaining properties
@property(copy, nonatomic) NSString *authenticationToken; // @dynamic authenticationToken;
@property(copy, nonatomic) PKPassDisplayProfile *displayProfile; // @dynamic displayProfile;
@property(readonly, copy, nonatomic) UIImage *icon; // @dynamic icon;
@property(copy, nonatomic) NSURL *webServiceURL; // @dynamic webServiceURL;

@end
