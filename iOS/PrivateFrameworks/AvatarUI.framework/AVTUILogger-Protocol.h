//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSString;

@protocol AVTUILogger <NSObject>
- (void)logCarouselEndsDraggingWithVelocity:(double)arg1 willSwitchIndexPathInsteadOfScrollBack:(_Bool)arg2 forHighVelocity:(_Bool)arg3;
- (void)logCarouselDelegateDidUpdateRecord:(NSString *)arg1;
- (void)logCarouselDelegateNearnessFactorDidChange:(double)arg1 towardRecord:(_Bool)arg2 editable:(_Bool)arg3;
- (void)logCarouselDelegateWillEndFocusRecord:(NSString *)arg1;
- (void)logCarouselDelegateDidFocusRecord:(NSString *)arg1;
- (void)logCarouselErrorGettingFrameForElementAtIndex:(unsigned long long)arg1;
- (void)logAVTViewCancelingRenderingAvatar:(NSString *)arg1;
- (void)logAVTViewDidRenderCurrentAvatar:(NSString *)arg1;
- (void)logAVTViewDidRenderAvatar:(NSString *)arg1 currentAvatar:(NSString *)arg2;
- (void)logAVTViewSetAvatar:(NSString *)arg1;
- (void)logToLivePoseTransitionEnds:(NSString *)arg1;
- (void)logToLivePoseTransitionBegins:(NSString *)arg1;
- (void)logTransition:(NSString *)arg1 state:(unsigned long long)arg2 reachedStage:(unsigned long long)arg3;
- (void)logCancelTransition:(NSString *)arg1;
- (void)logPerformTransition:(NSString *)arg1;
- (void)logSetupHandlerCompletedForTransition:(NSString *)arg1 state:(long long)arg2 finished:(_Bool)arg3;
- (void)logStartTransition:(NSString *)arg1 state:(long long)arg2;
- (void)logCarouselAddsTransitionToCoordinator:(NSString *)arg1;
- (void)logCarouselCellStopUsingLiveView:(NSString *)arg1 associatedTransition:(NSString *)arg2;
- (void)logCarouselCellStartUsingLiveView:(NSString *)arg1 associatedTransition:(NSString *)arg2;
- (void)logSingleModeControllerStopUsingLiveView:(NSString *)arg1;
- (void)logSingleModeControllerStartUsingLiveView:(NSString *)arg1;
- (void)logCarouselStopsFocusingOnCenterItem:(NSString *)arg1 withCell:(NSString *)arg2;
- (void)logCarouselTransitionCenterItem:(NSString *)arg1 withCell:(NSString *)arg2;
- (void)logCarouselChangesCenterItemTo:(NSString *)arg1;
- (void)logCarouselChangingToMultiMode;
- (void)logCarouselChangingToSingleMode;
- (void)logUsageTrackingBigDifferencesClusterCount:(unsigned long long)arg1;
- (void)logUsageTrackingSmallDifferencesClusterCount:(unsigned long long)arg1;
- (void)logUsageTrackingRecordCount:(unsigned long long)arg1;
- (void)logSingleModeCantSnapshotForLackOfWindow;
- (void)logAvatarPreloadEnd;
- (void)logAvatarPreloadBeginForIdentifier:(NSString *)arg1;
- (void)logCarouselSnapshotForIndex:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)logUnthrottlingAVTView;
- (void)logThrottlingAVTView;
- (void)logRequestingThumbnailForIndex:(unsigned long long)arg1 section:(NSString *)arg2;
- (void)logUpdatingLiveAvatarWithConfiguration:(NSString *)arg1;
- (void)logDonePreLoadingThumbnailForPreLoadingTask:(NSString *)arg1;
- (void)logDonePreLoadingPreset:(NSString *)arg1 task:(NSString *)arg2;
- (void)logPreLoadingPreset:(NSString *)arg1 task:(NSString *)arg2;
- (void)logLookingUpPreLoadedPreset:(NSString *)arg1 task:(NSString *)arg2;
- (void)logCancelingPreLoadingTask:(NSString *)arg1;
- (void)logStartingPreLoadingTask:(NSString *)arg1;
- (void)logRequestingPreLoadingTask:(NSString *)arg1 forIndex:(unsigned long long)arg2 section:(unsigned long long)arg3;
- (void)logPreLoadingNeededForIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)logDidFinishEditingWithError:(NSString *)arg1;
- (void)logDidFinishEditingWithSuccess;
- (void)logErrorFetchingRecords:(NSString *)arg1;
- (void)logErrorDuplicatingThumbnailsForIdentifier:(NSString *)arg1 error:(NSString *)arg2;
- (void)logErrorDeletingThumbnailsForIdentifier:(NSString *)arg1 error:(NSString *)arg2;
- (void)logGeneratingImageError:(NSString *)arg1;
- (void)logGeneratingImageForRecord:(NSString *)arg1 scope:(NSString *)arg2 type:(long long)arg3;
- (void)logInMemoryCacheEvictsResource:(NSString *)arg1;
- (void)logInMemoryCacheHitForResource:(NSString *)arg1;
- (void)logInMemoryCacheStorageForResource:(NSString *)arg1;
- (void)logImageStoreDoneSavingImageForPath:(NSString *)arg1;
- (void)logImageStoreBeginSavingImageForPath:(NSString *)arg1;
- (void)logImageStoreSavingError:(NSString *)arg1 code:(long long)arg2;
- (void)logImageStoreCacheHitForItemDescription:(NSString *)arg1 sizeCost:(unsigned long long)arg2;
- (void)logImageStoreCacheMiss:(NSString *)arg1;
- (void)logCreatingImageStoreForPath:(NSString *)arg1;
- (void)logFileSystemError:(NSString *)arg1;
- (void)logReadingError:(NSString *)arg1;
- (void)logSavingError:(NSString *)arg1;
- (void)logReadingBackend;
- (void)logDuplicatingRecordWithIdentifier:(NSString *)arg1;
- (void)logDeletingRecordWithIdentifier:(NSString *)arg1;
- (void)logSavingBackend;
- (void)logErrorUpdatingVersion:(NSString *)arg1;
- (void)logErrorCreatingBackendContent:(NSString *)arg1;
- (void)logErrorWhileMigratingBackend:(NSString *)arg1;
- (void)logDroppingUnsupportedAvatarRecord:(NSString *)arg1;
- (void)logBackendVersionMismatch:(NSString *)arg1 actual:(NSString *)arg2;
- (void)logCreatingBackendDBAtPath:(NSString *)arg1;
- (void)logCreatingBackendFolderAtPath:(NSString *)arg1;
- (void)logCreatingStoreForPath:(NSString *)arg1;
- (void)logNoAvatarPreset:(NSString *)arg1;
- (void)logSnapshotReturnedImage:(NSString *)arg1;
- (void)logRenderingRecord:(NSString *)arg1 size:(struct CGSize)arg2;
- (void)logRenderingConfiguration:(NSString *)arg1;
- (void)logRenderingModelPreset:(NSString *)arg1;
- (void)logRenderingModelColor:(NSString *)arg1;
- (void)logParsingMetadataDefinitionsError:(NSString *)arg1;
- (void)logParsingMetadataDefinitions;
- (void)logErrorLoadingTemplates:(NSString *)arg1;
@end
