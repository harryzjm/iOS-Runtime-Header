//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <DocumentManager/DOCAppearanceProtocol-Protocol.h>
#import <DocumentManager/DOCHostBrowserViewControllerProxy-Protocol.h>
#import <DocumentManager/DOCNavigationBarOverwriteProtocol-Protocol.h>
#import <DocumentManager/DOCRemoteSourceManagementInterface-Protocol.h>

@class DOCAppearance, DOCConcreteLocation, DOCConfiguration, DOCSearchContext, NSArray, NSMutableArray, NSOperationQueue, NSString, _UIResilientRemoteViewContainerViewController;
@protocol DOCDocumentBrowserDelegate, DOCRemoteAppearanceInterface><DOCRemoteSourceManagementInterface, DOCServiceBrowserViewControllerProxy;

@interface DOCBrowserViewController : UIViewController <DOCHostBrowserViewControllerProxy, DOCNavigationBarOverwriteProtocol, DOCRemoteSourceManagementInterface, DOCAppearanceProtocol>
{
    UIViewController<DOCRemoteAppearanceInterface><DOCRemoteSourceManagementInterface> *_localViewController;
    _UIResilientRemoteViewContainerViewController *_remoteViewController;
    DOCAppearance *_lastAppearance;
    _Bool _isTopNavigationItem;
    _Bool _supportsImportInCurrentLocation;
    _Bool _currentLocationIsWritable;
    _Bool _currentLocationCanSelect;
    NSString *_overriddenTitle;
    id <DOCDocumentBrowserDelegate> _delegate;
    DOCConcreteLocation *_selectedLocation;
    DOCSearchContext *_searchContext;
    NSArray *_hostProvidedActions;
    NSArray *_builtinActionsForSelectedItems;
    NSMutableArray *_remoteViewControllerAvailableCompletionHandlers;
    NSOperationQueue *_serviceProxyOperationQueue;
    id <DOCServiceBrowserViewControllerProxy> _serviceBrowserProxy;
    DOCConfiguration *_configuration;
}

@property(readonly) DOCConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) id <DOCServiceBrowserViewControllerProxy> serviceBrowserProxy; // @synthesize serviceBrowserProxy=_serviceBrowserProxy;
@property(readonly) NSOperationQueue *serviceProxyOperationQueue; // @synthesize serviceProxyOperationQueue=_serviceProxyOperationQueue;
@property(retain) NSMutableArray *remoteViewControllerAvailableCompletionHandlers; // @synthesize remoteViewControllerAvailableCompletionHandlers=_remoteViewControllerAvailableCompletionHandlers;
@property(readonly) DOCAppearance *lastAppearance; // @synthesize lastAppearance=_lastAppearance;
@property(nonatomic) _Bool currentLocationCanSelect; // @synthesize currentLocationCanSelect=_currentLocationCanSelect;
@property(nonatomic) _Bool currentLocationIsWritable; // @synthesize currentLocationIsWritable=_currentLocationIsWritable;
@property(nonatomic) _Bool supportsImportInCurrentLocation; // @synthesize supportsImportInCurrentLocation=_supportsImportInCurrentLocation;
@property(copy, nonatomic) NSArray *builtinActionsForSelectedItems; // @synthesize builtinActionsForSelectedItems=_builtinActionsForSelectedItems;
@property(copy, nonatomic) NSArray *hostProvidedActions; // @synthesize hostProvidedActions=_hostProvidedActions;
@property(retain, nonatomic) DOCSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(copy, nonatomic) DOCConcreteLocation *selectedLocation; // @synthesize selectedLocation=_selectedLocation;
@property(nonatomic) __weak id <DOCDocumentBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *overriddenTitle; // @synthesize overriddenTitle=_overriddenTitle;
@property _Bool isTopNavigationItem; // @synthesize isTopNavigationItem=_isTopNavigationItem;
- (void).cxx_destruct;
- (void)updateAppearance:(id)arg1;
- (void)_updateAppearance;
- (void)revealItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)lastVisitedLocation;
- (void)saveLastVisitedLocationIfNeeded;
- (void)browserDidFinishGatheringItemsAndThumbnails;
- (void)didUpdateCurrentLocationCanSelect:(_Bool)arg1;
- (void)didUpdateCurrentLocationIsWritable:(_Bool)arg1;
- (void)didUpdateImportSupportInCurrentLocation:(_Bool)arg1;
- (void)browserDidUpdateNumberOfItems:(unsigned long long)arg1;
- (void)browserIsDisplayingEmptyCollection:(_Bool)arg1;
- (void)browserDismissButtonWasTapped;
- (void)browserLocationsButtonWasTappedWithSourceRect:(struct CGRect)arg1;
- (void)didPickLocation:(id)arg1 forceReplaceLocation:(_Bool)arg2;
- (void)builtinActionsDidChange:(id)arg1;
- (void)didTriggerFPUIActionWithIdentifier:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 title:(id)arg4 onItems:(id)arg5;
- (void)didTriggerActionWithIdentifier:(id)arg1 onItems:(id)arg2;
- (void)didSelectItems:(id)arg1;
- (void)callViewControllerCompletionHandlersWithError:(id)arg1;
- (void)fetchAllSourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didCommitPreviewOfDocument:(id)arg1;
- (void)didPickItem:(id)arg1;
- (void)showInfoForItem:(id)arg1;
- (void)createNewFolder;
- (void)createNewFile;
- (void)_updateHostProvidedActions;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isRelevantBrowser;
- (void)tagsDidChange:(id)arg1;
- (void)_setResolvedSelectedLocation:(id)arg1;
- (void)_updateSelectedBrowserLocation;
- (void)setSelectedLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (id)remoteInterface;
- (id)remoteViewController;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

