//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIViewServiceViewController.h"

@class NSArray, NSString, NSURL, UIViewController;
@protocol _UIDocumentPickerViewControllerHost;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerViewServiceViewController : _UIViewServiceViewController
{
    _Bool _displayedAsMenu;
    _Bool _hasBeenDismissed;
    _Bool _showingSpinner;
    int _sortOrder;
    NSArray *_pickableTypes;
    unsigned long long _pickerMode;
    NSURL *_uploadURL;
    NSArray *_auxiliaryOptions;
    NSString *_currentPickerIdentifier;
    UIViewController *_currentPicker;
}

+ (id)_logicalURLForPhysicalURL:(id)arg1;
+ (id)_urlByResolvingExternalDocumentReferenceForURL:(id)arg1;
+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *currentPicker; // @synthesize currentPicker=_currentPicker;
@property(nonatomic) _Bool showingSpinner; // @synthesize showingSpinner=_showingSpinner;
@property(nonatomic) _Bool hasBeenDismissed; // @synthesize hasBeenDismissed=_hasBeenDismissed;
@property(nonatomic) _Bool displayedAsMenu; // @synthesize displayedAsMenu=_displayedAsMenu;
@property(retain, nonatomic) NSString *currentPickerIdentifier; // @synthesize currentPickerIdentifier=_currentPickerIdentifier;
@property(retain, nonatomic, setter=_setAuxiliaryOptions:) NSArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(copy, nonatomic, setter=_setUploadURL:) NSURL *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(nonatomic, setter=_setPickerMode:) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
@property(copy, nonatomic, setter=_setPickableTypes:) NSArray *pickableTypes; // @synthesize pickableTypes=_pickableTypes;
- (void)_warnSharingForTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_warnSharingPreMove;
- (_Bool)_shouldWarnForSharing;
- (void)_tryExportingFile:(id)arg1 toLocation:(id)arg2;
- (void)_showExistsAlertForFile:(id)arg1 withSourceURL:(id)arg2;
- (id)_mangledFilenameForURL:(id)arg1;
- (void)pickLocationForUpload:(id)arg1;
- (void)documentTargetSelectionController:(id)arg1 didSelectItemAtURL:(id)arg2;
- (void)documentListController:(id)arg1 performAction:(long long)arg2 URL:(id)arg3 originatingView:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)documentListController:(id)arg1 didSelectContainerWithViewController:(id)arg2;
- (void)documentListController:(id)arg1 didSelectItemAtURL:(id)arg2;
- (void)setNavigationItemSpinner:(_Bool)arg1;
- (void)_didSelectPicker;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_didSelectURL:(id)arg1;
- (void)_invalidatePicker:(id)arg1;
- (void)_doneButton:(id)arg1;
- (void)_dismissViewController;
- (struct CGSize)_updatedContentSizeForPreferredContentSize:(struct CGSize)arg1;
- (void)overviewController:(id)arg1 selectedAuxiliaryOptionWithIdentifier:(id)arg2;
- (void)overviewController:(id)arg1 selectedDocumentPickerWithIdentifier:(id)arg2;
- (void)_showLocationPopupFromBarButtonItem:(id)arg1 rect:(struct CGRect)arg2;
- (void)_showLocationPopup:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg1;
- (void)_presentError:(id)arg1 forThirdPartyPickerWithDescription:(id)arg2;
- (void)_didInstantiateThirdPartyPickerWithDescription:(id)arg1 placeholder:(id)arg2;
- (void)_showPicker:(id)arg1;
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(_Bool)arg2;
- (void)_showTopLevelViewController;
- (void)_willAppearInRemoteViewController;
- (void)_cloudEnabledStatusDidChange:(id)arg1;
- (void)_prepareForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setSourceIsManaged:(_Bool)arg1;
- (void)_setIsContentManaged:(_Bool)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_updateDefaultPicker;
- (void)_showDefaultPicker;
- (void)_setTintColor:(id)arg1;
- (void)_documentPickerDidDismiss;
- (void)_waitForDownloadOfURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_dismissWithImportURL:(id)arg1;
- (void)_dismissWithFileProviderURL:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_createBookmarkAndDismissWithCloudURL:(id)arg1;
@property(readonly, nonatomic) id <_UIDocumentPickerViewControllerHost> hostingViewController; // @dynamic hostingViewController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

