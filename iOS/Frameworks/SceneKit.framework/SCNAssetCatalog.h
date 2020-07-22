//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface SCNAssetCatalog : NSObject
{
    NSURL *_catalogURL;
    NSDictionary *_db;
    NSMutableDictionary *_cache;
}

+ (id)objectWithName:(id)arg1 class:(Class)arg2;
+ (void)clearCache;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)assetCatalogForResourceURL:(id)arg1;
+ (id)assetCatalogWithURL:(id)arg1;
+ (id)assetCatalogNamed:(id)arg1;
@property(readonly, nonatomic) NSURL *catalogURL; // @synthesize catalogURL=_catalogURL;
- (id)pathByMakingURLRelativeToCatalog:(id)arg1;
- (id)particleSystemNamed:(id)arg1;
- (id)actionNamed:(id)arg1;
- (id)animationNamed:(id)arg1;
- (id)sceneNamed:(id)arg1;
- (id)sceneWithURL:(id)arg1;
- (void)cacheObject:(id)arg1 forKey:(id)arg2;
- (id)URLOfResourceNamed:(id)arg1;
- (void)dealloc;

@end

