//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoKitRemoveFromFeaturedPhotosActionPerformer
{
    NSDictionary *_assetToSuggestionMap;
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *assetToSuggestionMap; // @synthesize assetToSuggestionMap=_assetToSuggestionMap;
- (void)performBackgroundTask;

@end
