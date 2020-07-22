//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUUUIDSelectionManager;
@protocol PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenActionManager
{
    id <PUAssetExplorerReviewScreenActionManagerDelegate> _reviewScreenActionManagerDelegate;
    id <PUReviewAssetProvider> _reviewAssetProvider;
    PUUUIDSelectionManager *_selectionManager;
    PUUUIDSelectionManager *_disableLivePhotosSelectionManager;
    unsigned long long __sourceType;
}

@property(readonly, nonatomic) unsigned long long _sourceType; // @synthesize _sourceType=__sourceType;
@property(readonly, nonatomic) PUUUIDSelectionManager *disableLivePhotosSelectionManager; // @synthesize disableLivePhotosSelectionManager=_disableLivePhotosSelectionManager;
@property(readonly, nonatomic) PUUUIDSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(nonatomic) __weak id <PUReviewAssetProvider> reviewAssetProvider; // @synthesize reviewAssetProvider=_reviewAssetProvider;
@property(nonatomic) __weak id <PUAssetExplorerReviewScreenActionManagerDelegate> reviewScreenActionManagerDelegate; // @synthesize reviewScreenActionManagerDelegate=_reviewScreenActionManagerDelegate;
- (void).cxx_destruct;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (unsigned long long)_reviewScreenActionTypeForAssetActionType:(unsigned long long)arg1;
- (_Bool)_hasReviewScreenActionTypeForAssetActionType:(unsigned long long)arg1;
- (Class)_actionPerformerClassForActionType:(unsigned long long)arg1;
- (id)initWithSourceType:(unsigned long long)arg1;

@end

