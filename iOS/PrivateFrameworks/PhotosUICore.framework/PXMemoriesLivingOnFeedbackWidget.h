//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSArray, NSString, PHMemory, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXMemoriesLivingOnFeedbackWidget : NSObject <PXWidget>
{
    _Bool _hasLoadedContentData;
    PXPhotosDetailsContext *_context;
    struct NSObject *_contentView;
    id <PXWidgetDelegate> _widgetDelegate;
    NSArray *_features;
    NSArray *_featureViews;
    PHMemory *_memory;
}

@property(retain, nonatomic) PHMemory *memory; // @synthesize memory=_memory;
@property(retain, nonatomic) NSArray *featureViews; // @synthesize featureViews=_featureViews;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_showReportFeedback;
- (void)userDidSelectDisclosureControl;
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) long long contentViewAnchoringType;
- (struct CGSize)_layoutTokenViewsWithWidth:(double)arg1;
- (id)_tokenViewsWithSuperview:(struct NSObject *)arg1;
- (void)_loadFeaturesFromPhotosGraphProperties:(id)arg1;
- (struct NSObject *)_loadContentView;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView; // @synthesize contentView=_contentView;
- (double)preferredContentHeightForWidth:(double)arg1;
@property(readonly, nonatomic) _Bool hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
- (void)unloadContentData;
- (void)_loadContentData;
- (void)loadContentData;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;

// Remaining properties
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(retain, nonatomic) PXWidgetSpec *spec;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate;

@end

