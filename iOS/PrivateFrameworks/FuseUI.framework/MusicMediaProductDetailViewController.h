//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicJSNativeViewControllerFactory-Protocol.h>
#import <FuseUI/MusicJSProductNativeViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicMediaProductHeaderContentViewControllerDelegate-Protocol.h>
#import <FuseUI/UIViewControllerRestoration-Protocol.h>

@class MPArtworkCatalog, MusicClientContext, MusicEntityValueContext, MusicMediaDetailHeaderViewController, MusicMediaProductDetailHeaderConfiguration, MusicMediaProductHeaderContentViewController, MusicMediaProductSplitDetailViewController, MusicMediaProductSplitMainViewController, NSArray, NSMutableArray, NSString, UIBarButtonItem, UIImage, UIScrollView, UIViewController;
@protocol MusicEntityProviding;

@interface MusicMediaProductDetailViewController <MusicJSProductNativeViewControllerDelegate, UIViewControllerRestoration, MusicMediaProductHeaderContentViewControllerDelegate, MusicClientContextConsuming, MusicJSNativeViewControllerFactory>
{
    _Bool _allowsProductHairline;
    MPArtworkCatalog *_artworkCatalog;
    UIBarButtonItem *_cancelButtonItem;
    MusicMediaProductDetailHeaderConfiguration *_detailHeaderConfiguration;
    _Bool _hasDetailTintInformation;
    _Bool _hasPresentedExplicitByDefaultAlert;
    _Bool _editingWasCancelled;
    _Bool _hasReceivedViewWillAppearAtLeastOnce;
    _Bool _isObservingClientContextTransferAggregatorDidChangeNotification;
    _Bool _isViewFullyVisible;
    MusicMediaProductHeaderContentViewController *_mediaProductHeaderContentViewController;
    MusicMediaDetailHeaderViewController *_mediaDetailHeaderViewController;
    _Bool _needsEffectiveNavigationItemUpdateForEditingStateChangeUponViewWillAppear;
    _Bool _needsArtworkCatalogUpdate;
    _Bool _needsColorAnalysisUpdate;
    NSArray *_nonEditingLeftBarButtonItems;
    NSArray *_nonEditingRightBarButtonItems;
    NSMutableArray *_pendingTintInformationDispatchEvents;
    struct CGSize _previousMaximumHeaderSize;
    UIViewController *_relatedContentViewController;
    _Bool _forContentCreation;
    MusicEntityValueContext *_containerEntityValueContext;
    MusicClientContext *_clientContext;
    id <MusicEntityProviding> _containerEntityProvider;
    UIImage *_editedContentArtworkImage;
    long long _presentationSource;
    id <MusicEntityProviding> _tracklistEntityProvider;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(readonly, nonatomic) id <MusicEntityProviding> tracklistEntityProvider; // @synthesize tracklistEntityProvider=_tracklistEntityProvider;
@property(readonly, nonatomic) long long presentationSource; // @synthesize presentationSource=_presentationSource;
@property(readonly, nonatomic, getter=isForContentCreation) _Bool forContentCreation; // @synthesize forContentCreation=_forContentCreation;
@property(retain, nonatomic) UIImage *editedContentArtworkImage; // @synthesize editedContentArtworkImage=_editedContentArtworkImage;
@property(readonly, nonatomic) id <MusicEntityProviding> containerEntityProvider; // @synthesize containerEntityProvider=_containerEntityProvider;
@property(retain, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) MusicEntityValueContext *_containerEntityValueContext; // @synthesize _containerEntityValueContext;
- (void).cxx_destruct;
- (void)_updateRelatedContentViewControllerPlacement;
- (void)_updateAllowsProductHairline;
- (void)_updateEffectiveNavigationItemForEditingStateChangeAnimated:(_Bool)arg1;
- (void)_updateDetailHeaderConfiguration;
- (void)_updateColorAnalysisIfNeededWithShouldTemporarilyWait:(_Bool)arg1;
- (void)_unregisterForClientContextTransferAggregatorDidChangeNotification;
- (void)_sendPendingTintInformationDispatchEvents;
- (void)_reloadContainerEntityValueContextProperties;
- (long long)_productDescriptionTextStyle;
- (void)_presentExplicitByDefaultAlertIfNeeded;
- (id)_mediaProductHeaderContentViewController;
- (id)_mediaDetailHeaderViewController;
- (id)_effectiveNavigationItem;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_containerMetadataContextWithContainerJSDictionary:(id)arg1 tracklistItemJSDictionaries:(id)arg2;
- (_Bool)_calculateHeaderContentViewControllerEditing;
- (void)_handleContainerEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_handleCancelButtonTapped:(id)arg1;
- (_Bool)_shouldAutomaticallyPopForMissingContainerEntityValueProvider;
- (void)_setNeedsDetailHeaderConfigurationUpdate;
- (id)_loadProductSplitMainViewController;
- (id)_loadProductSplitDetailViewController;
- (id)_loadProductHeaderContentViewController;
- (id)_loadDetailHeaderConfiguration;
- (_Bool)_editingWasCancelled;
- (void)_commitEditing;
- (void)_cancelEditing;
@property(readonly, nonatomic) UIScrollView *containerScrollView;
- (id)previewMenuItems;
- (void)mediaProductHeaderContentViewControllerDidUpdateEditableText:(id)arg1;
- (void)mediaProductHeaderContentViewController:(id)arg1 didSelectShareButton:(id)arg2;
- (void)mediaProductHeaderContentViewControllerDidTapEdit:(id)arg1;
- (void)jsProductNativeViewController:(id)arg1 setTracklistItems:(id)arg2;
- (void)jsProductNativeViewController:(id)arg1 setReportingInformation:(id)arg2;
- (void)jsProductNativeViewController:(id)arg1 setRelatedContentDocument:(id)arg2 options:(id)arg3;
- (void)jsProductNativeViewController:(id)arg1 setProminentTrackStoreID:(long long)arg2;
- (void)jsProductNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3;
- (void)jsProductNativeViewController:(id)arg1 setProductEntityValueProviderData:(id)arg2;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)showingSplitDetailViewControllerDidChange;
- (void)detailTintInformationDidChange;
- (_Bool)allowsShowingSplitDetailViewController;
- (_Bool)allowsHairline;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(_Bool)arg5;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MusicMediaProductHeaderContentViewController *headerContentViewController; // @dynamic headerContentViewController;
@property(retain, nonatomic) MusicMediaDetailHeaderViewController *headerViewController; // @dynamic headerViewController;
@property(readonly, nonatomic) MusicMediaProductSplitDetailViewController *splitDetailViewController; // @dynamic splitDetailViewController;
@property(retain, nonatomic) MusicMediaProductSplitMainViewController *splitMainViewController; // @dynamic splitMainViewController;
@property(readonly) Class superclass;

@end

