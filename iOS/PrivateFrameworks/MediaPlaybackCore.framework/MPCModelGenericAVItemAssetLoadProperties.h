//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPIdentifierSet, MPModelFileAsset, MPModelGenericObject, MPModelHomeSharingAsset, MPModelStoreAsset, NSString;
@protocol MPCModelPlaybackAssetCacheProviding;

@interface MPCModelGenericAVItemAssetLoadProperties : NSObject
{
    _Bool _allowsHLSContent;
    _Bool _prefersVideoContent;
    _Bool _prefersHighQualityContent;
    _Bool _radioPlayback;
    NSString *_assetSourceStorefrontID;
    id <MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
    MPModelFileAsset *_fileAsset;
    MPModelGenericObject *_genericObject;
    MPModelHomeSharingAsset *_homeSharingAsset;
    MPIdentifierSet *_itemIdentifiers;
    MPModelStoreAsset *_storeAsset;
    unsigned long long _accountID;
    unsigned long long _delegatedAccountID;
    NSString *_householdID;
    NSString *_storefrontID;
}

@property(copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(copy, nonatomic) NSString *householdID; // @synthesize householdID=_householdID;
@property(nonatomic) unsigned long long delegatedAccountID; // @synthesize delegatedAccountID=_delegatedAccountID;
@property(nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) MPModelStoreAsset *storeAsset; // @synthesize storeAsset=_storeAsset;
@property(nonatomic, getter=isRadioPlayback) _Bool radioPlayback; // @synthesize radioPlayback=_radioPlayback;
@property(nonatomic) _Bool prefersHighQualityContent; // @synthesize prefersHighQualityContent=_prefersHighQualityContent;
@property(retain, nonatomic) MPIdentifierSet *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset; // @synthesize homeSharingAsset=_homeSharingAsset;
@property(retain, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(retain, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(retain, nonatomic) id <MPCModelPlaybackAssetCacheProviding> assetCacheProvider; // @synthesize assetCacheProvider=_assetCacheProvider;
@property(nonatomic) _Bool prefersVideoContent; // @synthesize prefersVideoContent=_prefersVideoContent;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
@property(nonatomic) _Bool allowsHLSContent; // @synthesize allowsHLSContent=_allowsHLSContent;
- (void).cxx_destruct;

@end
