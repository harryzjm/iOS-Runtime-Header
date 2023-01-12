//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ProductKitCatalogInternal;

@interface ProductKitCatalog : NSObject
{
    ProductKitCatalogInternal *_underlyingObject;
}

+ (_Bool)isProductKitURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) ProductKitCatalogInternal *underlyingObject; // @synthesize underlyingObject=_underlyingObject;
- (void)watchBandImageForFeatureWithURL:(id)arg1 featureString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)watchBandFilesForFeatureWithURL:(id)arg1 featureString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)watchBandStringForFeatureWithURL:(id)arg1 featureString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateCatalogWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)selectTestingAssetManager;
- (id)init;

@end
