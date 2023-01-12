//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCloudQuotaUI/ICQUpgradeFlowManagerDelegate-Protocol.h>
#import <iCloudQuotaUI/PSCloudStorageOffersManagerDelegate-Protocol.h>
#import <iCloudQuotaUI/PreferencesRemoteUIDelegateProtocol-Protocol.h>
#import <iCloudQuotaUI/RUILoaderDelegate-Protocol.h>
#import <iCloudQuotaUI/RUIObjectModelDelegate-Protocol.h>

@class ICQPreferencesFreshmintManager, ICQPreferencesRemoteUIDelegateTableCellButton, NSMutableArray, NSOperationQueue, NSString, PSCloudStorageOffersManager, RUILoader, UINavigationController;
@protocol DelayedPushDelegate;

@interface ICQPreferencesRemoteUIDelegate : NSObject <PSCloudStorageOffersManagerDelegate, ICQUpgradeFlowManagerDelegate, PreferencesRemoteUIDelegateProtocol, RUIObjectModelDelegate, RUILoaderDelegate>
{
    UINavigationController *_navigationController;
    UINavigationController *_modalNavigationController;
    PSCloudStorageOffersManager *_storageOffersManager;
    CDUnknownBlockType _storageOffersFlowCompletion;
    NSMutableArray *_objectModels;
    RUILoader *_loader;
    NSMutableArray *_deleteLoaders;
    NSOperationQueue *_deleteQueue;
    ICQPreferencesRemoteUIDelegateTableCellButton *_button;
    unsigned long long _forceActionSignal;
    _Bool _cancelled;
    int _deleteAllDocumentsAttemptCount;
    NSString *_requestContentType;
    CDUnknownBlockType _linkCompletionBlock;
    id <DelayedPushDelegate> _delegate;
    NSString *_initialAction;
    RUILoader *_lastDocumentDeleteLoader;
    ICQPreferencesFreshmintManager *_freshmintManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICQPreferencesFreshmintManager *freshmintManager; // @synthesize freshmintManager=_freshmintManager;
@property(retain) RUILoader *lastDocumentDeleteLoader; // @synthesize lastDocumentDeleteLoader=_lastDocumentDeleteLoader;
@property(retain, nonatomic) NSString *initialAction; // @synthesize initialAction=_initialAction;
@property(nonatomic) __weak id <DelayedPushDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_loadCKStoragePluginSettingsBundleIfNeeded;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (id)_healthSettingsSpecifier;
- (id)_afuiSettingsSpecifier;
- (void)_freshmintStorageUpgradeWithCompletion:(CDUnknownBlockType)arg1 withURL:(id)arg2;
- (void)_activatePhotosElementForObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activateBackupsElementForObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentCloudStorageOffersFlowWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_loadNativeURL:(id)arg1;
- (void)buyFlowCompletionDidSucceed:(_Bool)arg1 error:(id)arg2;
- (void)reloadQuotaInfo;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 topActionSignal:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (_Bool)objectModel:(id)arg1 page:(id)arg2 deletedTableRow:(id)arg3 atIndexPath:(id)arg4 withURL:(id)arg5 httpMethod:(id)arg6;
- (void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(_Bool)arg3;
- (void)confirmDeleteWithTitle:(id)arg1 prompt:(id)arg2 explanation:(id)arg3 confirmationAction:(CDUnknownBlockType)arg4;
- (void)confirmDeleteAll;
- (void)deleteAllDocuments;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)popAndReloadFromRemoteUI:(_Bool)arg1 additionalHeaders:(id)arg2;
- (void)reloadTopControllerWithAdditionalHeaders:(id)arg1;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (void)loadURL:(id)arg1 postBody:(id)arg2 additionalHeaders:(id)arg3;
- (void)cleanupLoader;
- (void)cancelRemoteUI;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)willShowController:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;
- (id)initWithNavigationController:(id)arg1 buyStorageFlow:(_Bool)arg2;
- (id)initWithNavigationController:(id)arg1 initialAction:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
