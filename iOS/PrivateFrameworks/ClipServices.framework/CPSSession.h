//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClipServices/CPSInstallationControllerDelegate-Protocol.h>

@class CPSClipLaunchOptions, CPSClipMetadata, CPSImageLoader, CPSPromise, CPSSessionConfiguration, NSError, NSMutableArray, NSNumber, NSString, NSURL;
@protocol CPSAppInfoFetching, CPSBusinessItemFetching, OS_dispatch_queue;

@interface CPSSession : NSObject <CPSInstallationControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_proxyObjects;
    CPSImageLoader *_imageLoader;
    NSURL *_applicationIconFileURL;
    NSURL *_heroImageFileURL;
    NSURL *_businessIconFileURL;
    long long _clipAvailabilityState;
    long long _installationState;
    long long _metadataFetchState;
    NSError *_metadataFetchError;
    _Bool _didFetchApplicationIcon;
    CDUnknownBlockType _metadataCompletion;
    CDUnknownBlockType _applicationIconFetchCompletion;
    CPSPromise *_businessIconFetchingPromise;
    _Bool _openingWebClipFromDaemon;
    NSURL *_url;
    CPSClipMetadata *_metadata;
    NSNumber *_estimatedProgress;
    id <CPSAppInfoFetching> _appInfoFetcher;
    id <CPSBusinessItemFetching> _businessItemFetcher;
    CPSClipLaunchOptions *_launchOptions;
    CPSSessionConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isOpeningWebClipFromDaemon) _Bool openingWebClipFromDaemon; // @synthesize openingWebClipFromDaemon=_openingWebClipFromDaemon;
@property(retain, nonatomic) CPSSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) CPSClipLaunchOptions *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) id <CPSBusinessItemFetching> businessItemFetcher; // @synthesize businessItemFetcher=_businessItemFetcher;
@property(retain, nonatomic) id <CPSAppInfoFetching> appInfoFetcher; // @synthesize appInfoFetcher=_appInfoFetcher;
@property(readonly, nonatomic) NSNumber *estimatedProgress; // @synthesize estimatedProgress=_estimatedProgress;
@property(readonly, nonatomic) CPSClipMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)installationController:(id)arg1 didFinishWithError:(id)arg2;
- (void)installationController:(id)arg1 didUpdateProgress:(double)arg2;
- (void)installationControllerDidInstallPlaceholder:(id)arg1;
- (void)installationControllerWillStartInstall:(id)arg1;
- (void)_updateWebClipIcon:(id)arg1 metadata:(id)arg2;
- (void)_updateEntryPointForWebClip:(id)arg1;
- (void)_retrieveImageWithURL:(id)arg1 didFetchImage:(_Bool *)arg2 fileURL:(id *)arg3 fetchCompletion:(CDUnknownBlockType)arg4 proxyCompletion:(CDUnknownBlockType)arg5;
- (void)_retrieveHeroImageWithHeroImageURL:(id)arg1;
- (void)_retrieveApplicationIconWithAppIconURL:(id)arg1 clipBundleID:(id)arg2;
- (id)_retrieveInstalledApplicationIconWithAppIconURL:(id)arg1 clipBundleID:(id)arg2;
- (void)_retrieveApplicationIconWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateClipDataForEntryPointWithWebClip:(id)arg1 launchOptions:(id)arg2;
- (void)_updateLocationConfirmationForRecord:(id)arg1 permissionGranted:(id)arg2;
- (void)fetchHeroImage;
- (void)fetchMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)checkAndConsumeShowsAppAttributionBannerLaunchOption;
- (void)didCompleteTestSessionAtTime:(double)arg1;
- (void)clearMetadataAndRefetch;
- (void)setPreloadedMetadata:(id)arg1;
- (void)_evictFromCache;
- (void)_didFetchBusinessIconWithURL:(id)arg1;
- (void)_didFinishLoadingWithError:(id)arg1;
- (void)_notifyObserversOfMetadataFetchResultUpdates:(id)arg1;
- (void)_didUpdateMetadata:(id)arg1;
- (id)_availabilityOptions;
- (void)_didDetermineAvailability:(_Bool)arg1;
@property(readonly, nonatomic) NSURL *applicationIconFileURL;
- (void)_fetchParentApplicationMetadataWithBundleID:(id)arg1;
- (void)_fetchBusinessIconIfNeeded;
- (void)_fetchAppMetadataWithBundleID:(id)arg1;
- (void)_fetchBusinessMetadata;
@property(readonly, nonatomic, getter=isPurgeable) _Bool purgeable;
@property(readonly, nonatomic) NSString *logID;
@property(readonly, nonatomic) _Bool registeredForTest;
- (void)removeRemoteObjectProxy:(id)arg1;
- (void)addRemoteObjectProxy:(id)arg1;
- (id)initWithURL:(id)arg1 usingQueue:(id)arg2 configuration:(id)arg3;
- (id)initWithURL:(id)arg1 usingQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
