//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicJSNativeViewControllerFactory-Protocol.h>
#import <FuseUI/MusicJSProfileNativeViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicMediaProfileHeaderContentViewControllerDelegate-Protocol.h>
#import <FuseUI/SKUIModalSourceViewProvider-Protocol.h>
#import <FuseUI/UIViewControllerRestoration-Protocol.h>

@class MPArtworkCatalog, MPMediaItemCollection, MusicClientContext, MusicEntityValueContext, MusicMediaDetailHeaderViewController, MusicMediaProfileHeaderContentViewController, MusicMediaProfileSplitDetailViewController, MusicMediaProfileSplitMainViewController, NSArray, NSMutableArray, NSNumber, NSString, UIViewController;
@protocol MusicEntityProviding;

@interface MusicMediaProfileDetailViewController <MusicJSNativeViewControllerFactory, MusicJSProfileNativeViewControllerDelegate, MusicMediaProfileHeaderContentViewControllerDelegate, SKUIModalSourceViewProvider, UIViewControllerRestoration, MusicClientContextConsuming>
{
    MPMediaItemCollection *_artistMediaItemCollection;
    MPArtworkCatalog *_artworkCatalog;
    id <MusicEntityProviding> _containerEntityProvider;
    MusicEntityValueContext *_containerEntityValueContext;
    _Bool _didDispatchLoadEvent;
    NSString *_followerCountText;
    NSString *_followersText;
    _Bool _hasDetailTintInformation;
    _Bool _isAdminEnabled;
    _Bool _isAlbumArtist;
    _Bool _isExpectingRelatedContentDocument;
    _Bool _isUsingHeaderLockupProfileImage;
    _Bool _isUsingUberArtistHeroImage;
    _Bool _isWaitingToPushMoreRelatedContentView;
    NSArray *_jsVisibleSegments;
    _Bool _needsArtworkCatalogUpdate;
    _Bool _needsColorAnalysisUpdate;
    long long _numberOfFollowers;
    NSMutableArray *_pendingTintInformationDispatchEvents;
    struct CGSize _previousMaximumHeaderSize;
    unsigned long long _profileType;
    UIViewController *_relatedContentViewController;
    NSString *_segmentIdentifierNeedingContent;
    _Bool _socialHidden;
    _Bool _sharingHidden;
    NSNumber *_storeAdamID;
    MusicClientContext *_clientContext;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_updateStoreCapabilities;
- (void)_updateProfileTitle;
- (void)_updateFollowText;
- (void)_updateColorAnalysisIfNeededWithShouldTemporarilyWait:(_Bool)arg1;
- (_Bool)_shouldUseAvailableContent;
- (void)_sendPendingTintInformationDispatchEvents;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_pushMoreRelatedContentDocument:(id)arg1 options:(id)arg2;
- (void)_dispatchNeedsContentForSegmentWithIdentifier:(id)arg1;
- (void)_dispatchNeedsContentForDocumentIdentifier:(id)arg1;
- (void)_updateHeaderProperties;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_checkAdminPermissionForCurrentProfile;
- (void)_checkAdminPermission;
- (id)_activeDocumentContainerViewController;
- (void)_accessMoreRelatedContentDocumentUsingBlock:(CDUnknownBlockType)arg1;
- (void)_containerEntityValueProviderDidInvalidateNotification:(id)arg1;
@property(nonatomic) _Bool shouldAutomaticallySelectMyMusicSegment;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)mediaProfileSplitMainViewControllerSegmentedControlVisibleDidChange:(id)arg1;
- (void)mediaProfileSplitMainViewController:(id)arg1 needsContentForSegmentWithIdentifier:(id)arg2;
- (void)mediaProfileHeaderContentViewControllerDidSelectProfileTitle:(id)arg1;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didSelectEditButton:(id)arg2;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didSelectShareButton:(id)arg2;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didUpdateFollowingState:(_Bool)arg2 forStoreID:(long long)arg3;
- (_Bool)jsProfileNativeViewControllerSupportsRelatedContentDocument:(id)arg1;
- (void)jsProfileNativeViewController:(id)arg1 setVisibleSegments:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setSocialHidden:(_Bool)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setSelectedSegmentIdentifier:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setRelatedContentDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setReportingInformation:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setProfileEntityValueProviderData:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setNumberOfFollowers:(long long)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setFollowerCountText:(id)arg2 followersText:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setDocument:(id)arg2 options:(id)arg3 forSegmentIdentifier:(id)arg4;
- (void)jsProfileNativeViewController:(id)arg1 setMoreRelatedContentDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setAvailableContentFlags:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 presentBiographyEditorDocument:(id)arg2 options:(id)arg3;
- (void)visuallyInsetDidChange;
- (void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)supportsSplitDetailViewControllerDidChange;
- (void)showingSplitDetailViewControllerDidChange;
- (_Bool)allowsShowingSplitDetailViewController;
- (_Bool)allowsHairline;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2 existingJSProfileNativeViewController:(id)arg3 profileType:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MusicMediaProfileHeaderContentViewController *headerContentViewController; // @dynamic headerContentViewController;
@property(retain, nonatomic) MusicMediaDetailHeaderViewController *headerViewController; // @dynamic headerViewController;
@property(readonly, nonatomic) MusicMediaProfileSplitDetailViewController *splitDetailViewController; // @dynamic splitDetailViewController;
@property(retain, nonatomic) MusicMediaProfileSplitMainViewController *splitMainViewController; // @dynamic splitMainViewController;
@property(readonly) Class superclass;

@end

