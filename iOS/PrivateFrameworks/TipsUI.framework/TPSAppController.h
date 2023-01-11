//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSDictionary, NSError, NSHashTable, NSMutableDictionary, NSString, NSUserDefaults, TPSAssetSizes, TPSCollection, TPSFullTipContentManager;
@protocol OS_dispatch_queue;

@interface TPSAppController : NSObject
{
    unsigned long long _supportedInterfaceOrientations;
    _Bool _contentHasLoaded;
    _Bool _updatingContent;
    _Bool _appInBackground;
    _Bool _alwaysShowIntro;
    TPSFullTipContentManager *_fullTipContentManager;
    TPSAssetSizes *_assetSizes;
    NSUserDefaults *_appGroupDefaults;
    TPSCollection *_featuredCollection;
    NSArray *_collections;
    NSError *_lastFetchError;
    NSString *_language;
    long long _userInterfaceStyle;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSBundle *_frameworkBundle;
    NSDictionary *_collectionMap;
    NSDictionary *_tipMap;
    NSHashTable *_delegates;
    NSMutableDictionary *_attributedStringCacheMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *attributedStringCacheMap; // @synthesize attributedStringCacheMap=_attributedStringCacheMap;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSDictionary *tipMap; // @synthesize tipMap=_tipMap;
@property(retain, nonatomic) NSDictionary *collectionMap; // @synthesize collectionMap=_collectionMap;
@property(retain, nonatomic) NSBundle *frameworkBundle; // @synthesize frameworkBundle=_frameworkBundle;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(nonatomic) _Bool alwaysShowIntro; // @synthesize alwaysShowIntro=_alwaysShowIntro;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSError *lastFetchError; // @synthesize lastFetchError=_lastFetchError;
@property(retain, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property(retain, nonatomic) TPSCollection *featuredCollection; // @synthesize featuredCollection=_featuredCollection;
@property(retain, nonatomic) NSUserDefaults *appGroupDefaults; // @synthesize appGroupDefaults=_appGroupDefaults;
@property(retain, nonatomic) TPSAssetSizes *assetSizes; // @synthesize assetSizes=_assetSizes;
@property(retain, nonatomic) TPSFullTipContentManager *fullTipContentManager; // @synthesize fullTipContentManager=_fullTipContentManager;
@property(nonatomic) _Bool appInBackground; // @synthesize appInBackground=_appInBackground;
@property(nonatomic) _Bool updatingContent; // @synthesize updatingContent=_updatingContent;
@property(nonatomic) _Bool contentHasLoaded; // @synthesize contentHasLoaded=_contentHasLoaded;
- (void)networkStateDidChange:(_Bool)arg1;
- (id)imageNamed:(id)arg1;
- (void)resetAttributedStringCache;
- (void)contentSizeCategoryDidChange;
- (void)tipViewed:(id)arg1;
- (id)topFeatureCollectionFromCollections:(id)arg1;
- (id)tipsForCollectionIdentifier:(id)arg1;
- (id)tipForIdentifier:(id)arg1;
- (id)collectionForIdentifier:(id)arg1;
- (void)updateAttributedStringCache:(id)arg1 forIdentifier:(id)arg2;
- (id)attributedStringCacheForIdentifier:(id)arg1;
- (void)updateContent;
- (id)assetConfigurationForAssets:(id)arg1 language:(id)arg2 sizeClass:(long long)arg3 userInterfaceStyle:(long long)arg4;
- (id)tipsForCollection:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateWithDeviceMeta;
- (void)reloadAppGroupDefaults;
@property(readonly, nonatomic) NSArray *tips;
- (id)init;
- (void)dealloc;

@end
