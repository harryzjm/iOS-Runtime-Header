//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCMMPhotoKitActionPerformer-Protocol.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitForceSyncMomentShareActionPerformer <PXCMMPhotoKitActionPerformer>
{
}

- (void)performBackgroundTask;
- (_Bool)canPerformActionWithSession:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXCMMPhotoKitSession *session;

@end
