//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ProductKitCatalogInternal : NSObject
{
    MISSING_TYPE *catalog;
    MISSING_TYPE *assetManager;
}

+ (_Bool)isProductKitURL:(id)arg1;
- (void).cxx_destruct;
- (void)watchBandImageForFeatureWithURL:(id)arg1 featureString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)watchBandFilesForFeatureWithURL:(id)arg1 featureString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)watchBandStringForFeatureWithURL:(id)arg1 featureString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateCatalogWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)selectTestingAssetManager;

@end
