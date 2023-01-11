//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding>
{
    _Bool _familyShared;
    _Bool _firstParty;
    _Bool _hasMessagesExtension;
    _Bool _hidden;
    _Bool _hiddenFromSpringboard;
    _Bool _is32BitOnly;
    _Bool _isPreorder;
    _Bool _supportsIPad;
    _Bool _supportsIPhone;
    unsigned int _purchaseToken;
    NSString *_bundleID;
    long long _contentRatingFlags;
    NSDate *_datePurchased;
    NSString *_developerName;
    NSString *_iconURLString;
    NSString *_longTitle;
    NSString *_ovalIconURLString;
    NSURL *_preflightPackageURL;
    NSURL *_productURL;
    long long _purchaserDSID;
    NSString *_redownloadParams;
    NSArray *_requiredCapabilities;
    long long _storeItemID;
    unsigned long long _lockerItemID;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long lockerItemID; // @synthesize lockerItemID=_lockerItemID;
@property unsigned int purchaseToken; // @synthesize purchaseToken=_purchaseToken;
@property _Bool supportsIPhone; // @synthesize supportsIPhone=_supportsIPhone;
@property _Bool supportsIPad; // @synthesize supportsIPad=_supportsIPad;
@property long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property(copy) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(copy) NSString *redownloadParams; // @synthesize redownloadParams=_redownloadParams;
@property long long purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(copy) NSURL *productURL; // @synthesize productURL=_productURL;
@property(copy) NSURL *preflightPackageURL; // @synthesize preflightPackageURL=_preflightPackageURL;
@property(copy) NSString *ovalIconURLString; // @synthesize ovalIconURLString=_ovalIconURLString;
@property(copy) NSString *longTitle; // @synthesize longTitle=_longTitle;
@property _Bool isPreorder; // @synthesize isPreorder=_isPreorder;
@property _Bool is32BitOnly; // @synthesize is32BitOnly=_is32BitOnly;
@property(copy) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(getter=isHiddenFromSpringboard) _Bool hiddenFromSpringboard; // @synthesize hiddenFromSpringboard=_hiddenFromSpringboard;
@property(getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property _Bool hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property(getter=isFirstParty) _Bool firstParty; // @synthesize firstParty=_firstParty;
@property(getter=isFamilyShared) _Bool familyShared; // @synthesize familyShared=_familyShared;
@property(copy) NSString *developerName; // @synthesize developerName=_developerName;
@property(copy) NSDate *datePurchased; // @synthesize datePurchased=_datePurchased;
@property long long contentRatingFlags; // @synthesize contentRatingFlags=_contentRatingFlags;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)_setBooleanPropertiesForBitfield:(int)arg1;
- (int)_bitfieldForBooleanProperties;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

