//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHAssetCollection;

@interface PXStoryPPTConfiguration : NSObject
{
    NSString *_contentDescription;
    PHAssetCollection *_assetCollection;
    long long _collectionType;
    unsigned long long _assetType;
    unsigned long long _assetCount;
    double _preferredStoryDuration;
    unsigned long long _subpreset;
}

+ (void)_requestPhotoLibraryWithResultHandler:(CDUnknownBlockType)arg1;
+ (void)_fetchLatestMemoriesWithMaximumCount:(long long)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)_configureConfiguration:(id)arg1 forSubpreset:(unsigned long long)arg2;
+ (id)configurationsForPreset:(unsigned long long)arg1 subpreset:(unsigned long long)arg2 testOptions:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long subpreset; // @synthesize subpreset=_subpreset;
@property(nonatomic) double preferredStoryDuration; // @synthesize preferredStoryDuration=_preferredStoryDuration;
@property(nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property(readonly, nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
- (id)init;
- (id)_stringFromAssetType:(unsigned long long)arg1;
- (id)_stringFromAssetCount:(unsigned long long)arg1;
- (void)_performPhotoLibraryFetch:(CDUnknownBlockType)arg1;
- (void)_completeConfigurationRequestWithStoryConfiguration:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_completeConfigurationRequestWithFetchResult:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_completeConfigurationRequestWithAssetCollection:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_createSyntheticAssetsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_fetchAssetsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_fetchLatestAssetCollectionOfType:(long long)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)requestStoryConfigurationWithOptions:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *name;
- (id)initWithAssetType:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (id)initWithAssetCollection:(id)arg1 name:(id)arg2;
- (id)initWithLatestCollectionOfType:(long long)arg1;
- (id)initWithPreset:(unsigned long long)arg1;

@end
