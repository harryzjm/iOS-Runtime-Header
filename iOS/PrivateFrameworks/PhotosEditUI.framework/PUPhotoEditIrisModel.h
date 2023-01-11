//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosEditUI/NSCopying-Protocol.h>

@class PLPhotoEditModel, PUPhotoEditIrisModelChange;
@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUPhotoEditIrisModel : PUViewModel <NSCopying>
{
    _Bool _videoEnabled;
    _Bool _ignoresUpdates;
    _Bool __assetHasAdjustments;
    unsigned short __editingVisibility;
    unsigned short __assetVisibility;
    id <PUEditableAsset> _asset;
    PLPhotoEditModel *_photoEditModel;
}

+ (void)updateChangeRequestForRevert:(id)arg1;
@property(readonly, nonatomic) _Bool _assetHasAdjustments; // @synthesize _assetHasAdjustments=__assetHasAdjustments;
@property(readonly, nonatomic) unsigned short _assetVisibility; // @synthesize _assetVisibility=__assetVisibility;
@property(nonatomic, setter=_setEditingVisibility:) unsigned short _editingVisibility; // @synthesize _editingVisibility=__editingVisibility;
@property(nonatomic) _Bool ignoresUpdates; // @synthesize ignoresUpdates=_ignoresUpdates;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(retain, nonatomic, setter=_setPhotoEditModel:) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(readonly, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_setHidden:(_Bool)arg1 explicit:(_Bool)arg2 supportable:(_Bool)arg3;
- (id)newViewModelChange;
@property(readonly, nonatomic) PUPhotoEditIrisModelChange *currentChange;
- (void)_updateAutoDisableStateIfNeeded;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)updateChangeRequestForSave:(id)arg1;
@property(readonly, nonatomic) _Bool hasUnsavedChanges;
- (_Bool)reenablingLivePhotoShouldRemoveEdits;
- (void)notifyCannotSupportVideoEdits;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIrisVisibilityState:(unsigned short)arg1 hasAdjustments:(_Bool)arg2 editModel:(id)arg3;
- (id)initWithAsset:(id)arg1 editModel:(id)arg2;
- (id)init;

@end

