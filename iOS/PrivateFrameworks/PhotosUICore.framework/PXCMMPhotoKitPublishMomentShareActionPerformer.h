//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, PHMomentShare, UIAlertController;

@interface PXCMMPhotoKitPublishMomentShareActionPerformer
{
    UIAlertController *_progressAlertController;
    int _thumbnailRequestID;
    int _previewRequestID;
    PHMomentShare *_momentShare;
    _Bool _didFinalize;
    NSDate *_initialStartDate;
    NSDate *_previewRequestStartDate;
    NSDate *_creationRequestStartDate;
    NSDate *_publishStartDate;
    NSDate *_finishedDate;
}

- (void).cxx_destruct;
- (void)_performCleanupIfNeeded;
- (void)_handleSharingProgressCancellation;
- (void)_presentAlertControllerForCurrentCPLStateIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_finalizePublishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_acceptSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_publishingMomentShare:(id)arg1 didCompleteWithShareURL:(id)arg2 error:(id)arg3;
- (void)_publishMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_publishMomentShare:(id)arg1;
- (void)_setupSharingProgressController;
- (void)_budgetOverridePromptForMomentShare:(id)arg1 completedWithOutcome:(_Bool)arg2 error:(id)arg3;
- (void)_presentBudgetOverridePromptForMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_creatingMomentShareDidCompleteWithMomentShare:(id)arg1 error:(id)arg2;
- (void)_createMomentShareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_createMomentShare;
- (void)_presentInternalSharingAlert;
- (void)performUserInteractionTask;
- (id)_creationRequestForMomentShareParticipant:(id)arg1;
- (id)_keyAssetForMomentShareCreationWithAssets:(id)arg1;
- (void)_requestPreviewImagesForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end

