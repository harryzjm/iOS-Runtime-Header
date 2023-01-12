//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUHidePhotosActionController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitHideActionPerformer
{
    _Bool _isHiding;
    PUHidePhotosActionController *_hideActionController;
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isHiding; // @synthesize isHiding=_isHiding;
@property(retain, nonatomic) PUHidePhotosActionController *hideActionController; // @synthesize hideActionController=_hideActionController;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

