//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitAutoEnhanceActionPerformer
{
}

+ (id)systemImageNameForActionManager:(id)arg1;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (_Bool)_canPerformOnAsset:(id)arg1;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
- (void)performUserInteractionTask;

@end

