//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

#import <PhotosUI/PUSlideshowViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer <PUSlideshowViewControllerDelegate>
{
}

+ (id)createActivityWithActionManager:(id)arg1;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (_Bool)canPerformOnImplicitSelection;
+ (_Bool)canPerformOnSubsetOfSelection;
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;
- (void)_startSlideshow;
- (void)performUserInteractionTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
