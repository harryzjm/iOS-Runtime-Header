//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCMMPhotoKitActionPerformer-Protocol.h>

@class PXCMMPhotoKitSession, UIViewController;

@interface PXCMMPhotoKitPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer>
{
    UIViewController *_photosPickerViewController;
}

- (void).cxx_destruct;
- (id)_currentSelectedAssets;
- (id)_currentAssets;
- (void)_pickerDidCompleteWithPickedAssets:(id)arg1;
- (void)performUserInteractionTask;

// Remaining properties
@property(readonly, nonatomic) PXCMMPhotoKitSession *session;

@end

