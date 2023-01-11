//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSArray, NSSet, NSString, PHFetchResult, PXCMMSendBackSuggestionSource, PXPhotoKitAssetActionManager, PXPhotoKitAssetCollectionActionManager;
@protocol PXActionMenuDelegate;

@interface PXActionMenuController : NSObject <PXActionPerformerDelegate, PXChangeObserver>
{
    struct {
        _Bool action;
    } _needsUpdateFlags;
    NSSet *_disabledActionTypes;
    NSSet *_excludedActionTypes;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PHFetchResult *_people;
    id <PXActionMenuDelegate> _delegate;
    PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
    PXPhotoKitAssetActionManager *_assetActionManager;
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) PXPhotoKitAssetActionManager *assetActionManager; // @synthesize assetActionManager=_assetActionManager;
@property(readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetCollectionActionManager; // @synthesize assetCollectionActionManager=_assetCollectionActionManager;
@property(nonatomic) __weak id <PXActionMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property(retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource; // @synthesize sendBackSuggestionSource=_sendBackSuggestionSource;
@property(copy, nonatomic) NSSet *excludedActionTypes; // @synthesize excludedActionTypes=_excludedActionTypes;
@property(copy, nonatomic) NSSet *disabledActionTypes; // @synthesize disabledActionTypes=_disabledActionTypes;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (void)_updateActionsIfNeeded;
- (void)_invalidateActions;
- (id)_availableActionTypes;
- (id)initWithSelectionManager:(id)arg1 displayTitleInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

