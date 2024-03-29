//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PUPhotoKitTrashActionPerformer;

__attribute__((visibility("hidden")))
@interface PUPhotoKitRemoveSharingSuggestionAssetActionPerformer
{
    PUPhotoKitTrashActionPerformer *_trashActionPerformer;
}

+ (Class)pxActionPerformerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer; // @synthesize trashActionPerformer=_trashActionPerformer;
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)undoManagerForAssetActionPerformer:(id)arg1;
- (void)_performTrashTask;
- (void)performUserInteractionTask;
- (id)pxActionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

