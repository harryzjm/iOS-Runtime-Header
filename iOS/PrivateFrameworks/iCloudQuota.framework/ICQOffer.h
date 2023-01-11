//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCloudQuota/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, _ICQBannerSpecification, _ICQButtonSpecification, _ICQDeviceInfo, _ICQFollowupSpecification, _ICQUpgradeFlowSpecification, _ICQXMLSpecification;

@interface ICQOffer : NSObject <NSSecureCoding>
{
    NSDictionary *_serverDictionary;
    NSDictionary *_planDetailsOverride;
    long long _actionOverride;
    _Bool _iTunesAccountExists;
    NSDate *_retrievalDate;
    NSDate *_expirationDate;
    long long _offerType;
    long long _level;
    NSString *_bundleIdentifier;
    NSString *_appVersionId;
    NSString *_accountAltDSID;
    NSString *_notificationID;
    NSString *_offerId;
    _ICQBannerSpecification *_bannerSpecification;
    _ICQButtonSpecification *_buttonSpecification;
    _ICQFollowupSpecification *_followupSpecification;
    _ICQUpgradeFlowSpecification *_upgradeFlowSpecification;
    _ICQXMLSpecification *_XMLSpecification;
    _ICQDeviceInfo *_deviceInfo;
    NSString *_context;
}

+ (_Bool)supportsSecureCoding;
+ (id)sampleOfferForLevel:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool iTunesAccountExists; // @synthesize iTunesAccountExists=_iTunesAccountExists;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) _ICQDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) _ICQXMLSpecification *XMLSpecification; // @synthesize XMLSpecification=_XMLSpecification;
@property(retain, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification; // @synthesize upgradeFlowSpecification=_upgradeFlowSpecification;
@property(retain, nonatomic) _ICQFollowupSpecification *followupSpecification; // @synthesize followupSpecification=_followupSpecification;
@property(retain, nonatomic) _ICQButtonSpecification *buttonSpecification; // @synthesize buttonSpecification=_buttonSpecification;
@property(retain, nonatomic) _ICQBannerSpecification *bannerSpecification; // @synthesize bannerSpecification=_bannerSpecification;
@property(retain, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(retain, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(retain, nonatomic) NSString *accountAltDSID; // @synthesize accountAltDSID=_accountAltDSID;
@property(retain, nonatomic) NSString *appVersionId; // @synthesize appVersionId=_appVersionId;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(readonly, nonatomic) long long offerType; // @synthesize offerType=_offerType;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDate *retrievalDate; // @synthesize retrievalDate=_retrievalDate;
- (id)debugDescription;
@property(readonly, nonatomic) NSURL *remoteUIURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)showsPhotoVideoCounts;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (_Bool)placeholderExists;
- (_Bool)isDetailAppBannerOffer;
- (id)alertSpecificationAtIndex:(unsigned long long)arg1;
- (id)alertSpecificationForAlertKey:(id)arg1;
- (id)storagePurchaseKeybagForButtonId:(id)arg1;
@property(readonly, nonatomic, getter=isBuddyOffer) _Bool buddyOffer;
@property(readonly, nonatomic) double _callbackInterval;
- (void)updateOfferWithPlanDetails:(id)arg1 actionString:(id)arg2;
@property(readonly, nonatomic) long long action;
- (id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 retrievalDate:(id)arg4 callbackInterval:(double)arg5 bundleIdentifier:(id)arg6;

@end
