//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImportUrlSource
{
    NSObject<OS_dispatch_queue> *_pendingAssetDataRequestQueue;
    NSObject<OS_dispatch_queue> *_activeAssetDataRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentAssetDataRequestSemaphore;
    _Bool _isReadonlyVolume;
    NSString *_prefix;
    NSArray *_urls;
    NSMutableDictionary *_pathsByFileBaseName;
    NSArray *_baseNames;
    NSObject<OS_dispatch_queue> *_pathsByFileBaseNameAccess;
}

+ (_Bool)treatAsReadonlyVolume:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pathsByFileBaseNameAccess; // @synthesize pathsByFileBaseNameAccess=_pathsByFileBaseNameAccess;
@property(retain, nonatomic) NSArray *baseNames; // @synthesize baseNames=_baseNames;
@property(retain, nonatomic) NSMutableDictionary *pathsByFileBaseName; // @synthesize pathsByFileBaseName=_pathsByFileBaseName;
@property(nonatomic) _Bool isReadonlyVolume; // @synthesize isReadonlyVolume=_isReadonlyVolume;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (void)setPrefix:(id)arg1;
- (id)prefix;
- (id)rootUrlOfUrls:(id)arg1;
- (void)dispatchAssetDataRequestAsyncUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)canReference;
- (id)volumePath;
- (_Bool)isAvailable;
- (id)path;
- (id)productKind;
- (id)name;
- (void)endWork;
- (id)assetsByProcessingItem:(id)arg1;
- (void)beginWork;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToImportUrlSource:(id)arg1;
- (void)dealloc;
- (id)initWithUrls:(id)arg1;

@end
