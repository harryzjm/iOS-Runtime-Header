//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAvatarAttributeEditorControllerSubSelectionDelegate-Protocol.h>
#import <AvatarUI/AVTCollapsibleHeaderControllerDelegate-Protocol.h>
#import <AvatarUI/AVTGroupDialDelegate-Protocol.h>
#import <AvatarUI/AVTTransitionModel-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <AvatarUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class AVTAttributeEditorAnimationCoordinator, AVTAvatarAttributeEditorDataSource, AVTAvatarAttributeEditorModelManager, AVTAvatarRecord, AVTCollapsibleHeaderController, AVTGroupDial, AVTImageTransitioningContainerView, AVTShadowView, AVTTransition, AVTUIEnvironment, AVTViewSession, AVTViewSessionProvider, AVTViewThrottler, CALayer, NSString, UICollectionView, UILabel, UITapGestureRecognizer, UIView, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarAttributeEditorLayout, AVTAvatarAttributeEditorViewControllerDelegate, AVTScheduler;

@interface AVTAvatarAttributeEditorViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTGroupDialDelegate, AVTCollapsibleHeaderControllerDelegate, AVTTransitionModel>
{
    _Bool _isCreating;
    _Bool _hasMadeAnySelection;
    _Bool _isAnimatingHighlight;
    id <AVTAvatarAttributeEditorViewControllerDelegate> _delegate;
    id <AVTAvatarAttributeEditorLayout> _currentLayout;
    AVTAvatarAttributeEditorModelManager *_modelManager;
    id <AVTScheduler> _imageProviderScheduler;
    UIView *_headerMaskingView;
    UIView *_groupDialContainerView;
    AVTGroupDial *_groupDial;
    AVTShadowView *_shadowView;
    UICollectionView *_attributesCollectionView;
    AVTAvatarAttributeEditorDataSource *_dataSource;
    AVTAttributeEditorAnimationCoordinator *_animationCoordinator;
    UILabel *_alphaAssetsLabel;
    UIView *_verticleRuleContainer;
    CALayer *_verticleRule;
    AVTViewSessionProvider *_avtViewSessionProvider;
    AVTViewSession *_avtViewSession;
    AVTCollapsibleHeaderController *_collapsibleHeaderController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    AVTViewThrottler *_avtViewThrottler;
    AVTUIEnvironment *_environment;
    CDUnknownBlockType _postSessionDidBecomeActiveHandler;
    _AVTAvatarRecordImageProvider *_thumbnailRenderer;
    AVTImageTransitioningContainerView *_transitioningContainer;
    AVTTransition *_currentTransition;
    CDUnknownBlockType _pendingUnhighlightBlock;
}

+ (id)attributeRowIdentifier;
+ (id)colorRowIdentifier;
@property(copy, nonatomic) CDUnknownBlockType pendingUnhighlightBlock; // @synthesize pendingUnhighlightBlock=_pendingUnhighlightBlock;
@property(nonatomic) _Bool isAnimatingHighlight; // @synthesize isAnimatingHighlight=_isAnimatingHighlight;
@property(retain, nonatomic) AVTTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) AVTImageTransitioningContainerView *transitioningContainer; // @synthesize transitioningContainer=_transitioningContainer;
@property(retain, nonatomic) _AVTAvatarRecordImageProvider *thumbnailRenderer; // @synthesize thumbnailRenderer=_thumbnailRenderer;
@property(nonatomic) _Bool hasMadeAnySelection; // @synthesize hasMadeAnySelection=_hasMadeAnySelection;
@property(readonly, nonatomic) _Bool isCreating; // @synthesize isCreating=_isCreating;
@property(copy, nonatomic) CDUnknownBlockType postSessionDidBecomeActiveHandler; // @synthesize postSessionDidBecomeActiveHandler=_postSessionDidBecomeActiveHandler;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) AVTViewThrottler *avtViewThrottler; // @synthesize avtViewThrottler=_avtViewThrottler;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) AVTCollapsibleHeaderController *collapsibleHeaderController; // @synthesize collapsibleHeaderController=_collapsibleHeaderController;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // @synthesize avtViewSessionProvider=_avtViewSessionProvider;
@property(retain, nonatomic) CALayer *verticleRule; // @synthesize verticleRule=_verticleRule;
@property(retain, nonatomic) UIView *verticleRuleContainer; // @synthesize verticleRuleContainer=_verticleRuleContainer;
@property(retain, nonatomic) UILabel *alphaAssetsLabel; // @synthesize alphaAssetsLabel=_alphaAssetsLabel;
@property(retain, nonatomic) AVTAttributeEditorAnimationCoordinator *animationCoordinator; // @synthesize animationCoordinator=_animationCoordinator;
@property(retain, nonatomic) AVTAvatarAttributeEditorDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *attributesCollectionView; // @synthesize attributesCollectionView=_attributesCollectionView;
@property(retain, nonatomic) AVTShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) AVTGroupDial *groupDial; // @synthesize groupDial=_groupDial;
@property(retain, nonatomic) UIView *groupDialContainerView; // @synthesize groupDialContainerView=_groupDialContainerView;
@property(retain, nonatomic) UIView *headerMaskingView; // @synthesize headerMaskingView=_headerMaskingView;
@property(readonly, nonatomic) id <AVTScheduler> imageProviderScheduler; // @synthesize imageProviderScheduler=_imageProviderScheduler;
@property(readonly, nonatomic) AVTAvatarAttributeEditorModelManager *modelManager; // @synthesize modelManager=_modelManager;
@property(retain, nonatomic) id <AVTAvatarAttributeEditorLayout> currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) __weak id <AVTAvatarAttributeEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateForChangedSelectionIfNeeded;
- (void)updateForSelectionOfItem:(id)arg1 controller:(id)arg2;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1;
- (void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2;
- (void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2;
- (void)groupDial:(id)arg1 didSelectGroupAtIndex:(long long)arg2 tapped:(_Bool)arg3;
- (void)groupDial:(id)arg1 didDeselectGroupAtIndex:(long long)arg2;
- (id)presetSectionItemForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collapsibleHeaderController:(id)arg1 willUpdateHeaderToHeight:(double)arg2;
- (void)updateHeaderDependentLayoutWithHeaderFrame:(struct CGRect)arg1 fittingSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)createVerticleRuleIfNeeded;
- (id)visibleLayout;
- (void)applyLayout:(id)arg1 layoutAvatarView:(_Bool)arg2;
- (void)applyLayout:(id)arg1;
- (void)updateLayoutAttributes;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)createAlphaAssetsLabel;
- (void)didTapAvatarView:(id)arg1;
- (void)tearDownCollapsibleHeaderIfNeeded;
- (void)setupTapGestureForView:(id)arg1;
- (void)setupCollapsibleHeaderIfNeededForLayout:(id)arg1 withSession:(id)arg2;
- (void)configureUserInfoLabel;
- (void)configureAVTViewFromSession:(id)arg1;
- (void)tearDownThrottler;
- (void)configureThrottlerForAVTView:(id)arg1;
- (void)beginAVTViewSessionWithDidBeginBlock:(CDUnknownBlockType)arg1;
- (void)applyFullAlpha;
- (void)applyBaseAlpha;
- (id)liveView;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
- (void)transitionToLiveViewAnimated:(_Bool)arg1;
- (void)updateImageViewWithPosedAvatarRecord;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (struct UIEdgeInsets)adjustedSafeAreaInsets;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) AVTAvatarRecord *avatarRecord;
- (id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 environment:(id)arg3 isCreating:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

