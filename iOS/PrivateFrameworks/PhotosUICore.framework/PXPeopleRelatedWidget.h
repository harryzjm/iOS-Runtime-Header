//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDataSourceDelegate-Protocol.h>
#import <PhotosUICore/PXPeopleStripCollectionViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXWidget-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PXPeopleStripCollectionViewController, PXPeopleWidgetDataSource, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXUITapGestureRecognizer, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXPeopleRelatedWidget : NSObject <PXPeopleStripCollectionViewControllerDelegate, PXPeopleDataSourceDelegate, UIGestureRecognizerDelegate, PXWidget>
{
    _Bool _userInteractionEnabled;
    _Bool _isSummaryMode;
    _Bool _showFooter;
    _Bool _startedLoadingDataSource;
    _Bool _hasLoadedContentData;
    id <PXWidgetDelegate> _widgetDelegate;
    PXPhotosDetailsContext *_context;
    PXWidgetSpec *_spec;
    long long _contentViewAnchoringType;
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXPeopleStripCollectionViewController *_collectionViewController;
    double _cellMinInteritemSpacing;
    double _cellMinLineSpacing;
    PXPeopleWidgetDataSource *_dataSource;
    unsigned long long _viewType;
    PXUITapGestureRecognizer *__tapRecognizer;
    double _targetPrefetchWidth;
    struct CGSize _contentSize;
    struct CGSize _cellSize;
}

@property(nonatomic, setter=_setHasLoadedContentData:) _Bool hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
@property(nonatomic) double targetPrefetchWidth; // @synthesize targetPrefetchWidth=_targetPrefetchWidth;
@property(retain, nonatomic) PXUITapGestureRecognizer *_tapRecognizer; // @synthesize _tapRecognizer=__tapRecognizer;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic, getter=hasStartedLoadingDataSource) _Bool startedLoadingDataSource; // @synthesize startedLoadingDataSource=_startedLoadingDataSource;
@property(retain, nonatomic) PXPeopleWidgetDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool showFooter; // @synthesize showFooter=_showFooter;
@property(nonatomic) double cellMinLineSpacing; // @synthesize cellMinLineSpacing=_cellMinLineSpacing;
@property(nonatomic) double cellMinInteritemSpacing; // @synthesize cellMinInteritemSpacing=_cellMinInteritemSpacing;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool isSummaryMode; // @synthesize isSummaryMode=_isSummaryMode;
@property(retain, nonatomic) PXPeopleStripCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate; // @synthesize widgetUnlockDelegate=_widgetUnlockDelegate;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(readonly, nonatomic) long long contentViewAnchoringType; // @synthesize contentViewAnchoringType=_contentViewAnchoringType;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_resetControllerLayoutInfosForWidth:(double)arg1;
- (unsigned long long)_numberOfVisibleFacesForWidth:(double)arg1;
- (id)traitCollection;
- (struct CGSize)_sizeForItemWithWidth:(double)arg1 withInterItemSpacing:(double)arg2;
- (_Bool)_calculateLayoutInfosForWidth:(double)arg1 cellSize:(struct CGSize *)arg2 interitemSpacing:(double *)arg3;
- (void)_loadContainerView;
- (struct UIEdgeInsets)_realContentInset;
- (void)_prepareDataSource;
- (void)peopleDataSource:(id)arg1 didUpdateMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didRemoveMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didAddMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (void)memberTappedAtIndexPath:(id)arg1 forPeopleStripController:(id)arg2;
- (struct UIEdgeInsets)sectionInset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct CGSize)sizeForItem;
- (void)contentSizeCategoryChanged:(id)arg1;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
- (double)preferredContentHeightForWidth:(double)arg1;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (void)unloadContentData;
- (void)loadContentData;
- (void)_handleTap:(id)arg1;
- (id)initWithViewType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;

@end

