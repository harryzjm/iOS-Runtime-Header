//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUViewModel.h"

@class NSString, PICompositionController, PUPhotoEditIrisModelChange;
@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUPhotoEditIrisModel : PUViewModel
{
    _Bool _videoEnabled;
    _Bool _ignoresUpdates;
    _Bool _assetHasAdjustments;
    unsigned short _editingVisibility;
    unsigned short _assetVisibility;
    id <PUEditableAsset> _asset;
    PICompositionController *_compositionController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool assetHasAdjustments; // @synthesize assetHasAdjustments=_assetHasAdjustments;
@property(readonly, nonatomic) unsigned short assetVisibility; // @synthesize assetVisibility=_assetVisibility;
@property(retain, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(nonatomic) unsigned short editingVisibility; // @synthesize editingVisibility=_editingVisibility;
@property(nonatomic) _Bool ignoresUpdates; // @synthesize ignoresUpdates=_ignoresUpdates;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(readonly, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
- (void)_setHidden:(_Bool)arg1 explicit:(_Bool)arg2 supportable:(_Bool)arg3;
- (id)newViewModelChange;
@property(readonly, nonatomic) PUPhotoEditIrisModelChange *currentChange;
- (_Bool)_hasLegacyIrisConflicts;
- (void)_updateAutoDisableStateIfNeeded;
- (void)compositionDidChange;
@property(readonly, nonatomic) _Bool hasUnsavedChanges;
- (_Bool)reenablingLivePhotoShouldRemoveEdits;
- (void)notifyCannotSupportVideoEdits;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIrisVisibilityState:(unsigned short)arg1 hasAdjustments:(_Bool)arg2 compositionController:(id)arg3;
- (id)initWithAsset:(id)arg1 compositionController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

