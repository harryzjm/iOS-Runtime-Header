//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PHAssetExportRequestDelegate-Protocol.h>
#import <PhotosUI/PUActivityItemSourceOperationDelegate-Protocol.h>
#import <PhotosUI/PUMutableActivityItemSource-Protocol.h>
#import <PhotosUI/UIActivityItemApplicationExtensionSource-Protocol.h>
#import <PhotosUI/UIActivityItemDeferredSource-Protocol.h>
#import <PhotosUI/UIActivityItemImageDataProvider-Protocol.h>
#import <PhotosUI/UIActivityItemSource-Protocol.h>

@class NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSObject, NSProgress, NSString, NSURL, PHAsset, PHAssetExportRequest, PUActivityItemSourceAnchorOperation, PUActivityItemSourceConfiguration, PUActivityItemSourceOperation;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PUActivityItemSource : PXObservable <PHAssetExportRequestDelegate, PUActivityItemSourceOperationDelegate, PUMutableActivityItemSource, UIActivityItemDeferredSource, UIActivityItemApplicationExtensionSource, UIActivityItemImageDataProvider, UIActivityItemSource>
{
    PHAsset *_asset;
    NSDictionary *_cachedSharingVariants;
    NSObject<OS_dispatch_group> *_cachedSharingVariantsDisptachGroup;
    NSMutableSet *_onDemandExports;
    NSMutableDictionary *_sharingURLs;
    NSString *_sharingUUID;
    NSString *_assetOriginalFilenameBase;
    PUActivityItemSourceOperation *_currentOperation;
    PUActivityItemSourceAnchorOperation *_anchorOperation;
    _Bool _shouldSkipPreparation;
    _Bool _shouldAnchorPreparation;
    CDStruct_915a387c _sharingPreferences;
    unsigned long long _state;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _postCompletionHandler;
    NSError *_lastPreparationError;
    PUActivityItemSourceConfiguration *_exportConfiguration;
    PHAssetExportRequest *__assetExportRequest;
    NSProgress *__exportProgress;
    CDUnknownBlockType __exportProgressHandler;
    NSDictionary *__pasteboardRepresentation;
    NSURL *__assetsLibraryURL;
    unsigned long long _signpostId;
    NSMutableDictionary *_preparationStepTimingInfo;
    NSDate *_preparationStepSignpostIntervalStartTime;
    long long _prepareItemEventCPAnalyticsSignpostId;
    NSObject<OS_dispatch_queue> *_externalIsolation;
}

+ (id)activityItemSourceLog;
+ (void)initialize;
+ (id)_sharingErrorWithCode:(long long)arg1 underlyingError:(id)arg2 localizedDescription:(id)arg3 additionalInfo:(id)arg4;
+ (_Bool)supportsAssetLocalIdentifierForActivityType:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *externalIsolation; // @synthesize externalIsolation=_externalIsolation;
@property(readonly, nonatomic) long long prepareItemEventCPAnalyticsSignpostId; // @synthesize prepareItemEventCPAnalyticsSignpostId=_prepareItemEventCPAnalyticsSignpostId;
@property(retain, nonatomic) NSDate *preparationStepSignpostIntervalStartTime; // @synthesize preparationStepSignpostIntervalStartTime=_preparationStepSignpostIntervalStartTime;
@property(readonly, nonatomic) NSMutableDictionary *preparationStepTimingInfo; // @synthesize preparationStepTimingInfo=_preparationStepTimingInfo;
@property(readonly, nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;
@property(retain, setter=_setAssetsLibraryURL:) NSURL *_assetsLibraryURL; // @synthesize _assetsLibraryURL=__assetsLibraryURL;
@property(retain, setter=_setPasteboardRepresentation:) NSDictionary *_pasteboardRepresentation; // @synthesize _pasteboardRepresentation=__pasteboardRepresentation;
@property(copy, nonatomic, setter=_setExportProgressHandler:) CDUnknownBlockType _exportProgressHandler; // @synthesize _exportProgressHandler=__exportProgressHandler;
@property(retain, nonatomic, setter=_setExportProgress:) NSProgress *_exportProgress; // @synthesize _exportProgress=__exportProgress;
@property(retain, nonatomic, setter=_setAssetExportRequest:) PHAssetExportRequest *_assetExportRequest; // @synthesize _assetExportRequest=__assetExportRequest;
@property(retain, nonatomic) PUActivityItemSourceConfiguration *exportConfiguration; // @synthesize exportConfiguration=_exportConfiguration;
@property(nonatomic) _Bool shouldAnchorPreparation; // @synthesize shouldAnchorPreparation=_shouldAnchorPreparation;
@property(nonatomic) _Bool shouldSkipPreparation; // @synthesize shouldSkipPreparation=_shouldSkipPreparation;
@property(retain, nonatomic) NSError *lastPreparationError; // @synthesize lastPreparationError=_lastPreparationError;
@property(copy) CDUnknownBlockType postCompletionHandler; // @synthesize postCompletionHandler=_postCompletionHandler;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) CDStruct_df7f102b sharingPreferences; // @synthesize sharingPreferences=_sharingPreferences;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void)cleanUpExportedFiles;
- (void)_setResourceURL:(id)arg1 forType:(long long)arg2;
- (id)_resourceURLForType:(long long)arg1;
- (id)_createManagedURLForResourceAtURL:(id)arg1 shouldMove:(_Bool)arg2 forType:(long long)arg3;
- (_Bool)_copyResourceAtURL:(id)arg1 toURL:(id)arg2 shouldMove:(_Bool)arg3;
- (id)_generateURLForType:(long long)arg1 withPathExtension:(id)arg2 preferredFilename:(id)arg3;
- (id)_outboundResourcesDirectoryURL;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerApplicationExtensionItem:(id)arg1;
- (id)_runOnDemandSingleFileExportForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_runOnDemandExportForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)activityViewController:(id)arg1 thumbnailImageDataForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)_generateAnalyticsPayloadWithTimingInfo:(id)arg1;
- (void)sendPreparationCompletedEventForActivityType:(id)arg1 preparationTimingInfo:(id)arg2 withError:(id)arg3 didCancel:(_Bool)arg4;
- (id)finalizeTotalPreparationDurationTimingInfoDictionary;
- (void)commitTimingInfoForPreparationStep:(id)arg1 fromStartTime:(id)arg2;
- (void)assetExportRequest:(id)arg1 didChangeToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingExportRequest;
- (void)_beginObservingExportRequest:(id)arg1 withProgressHandler:(CDUnknownBlockType)arg2;
- (id)_itemForActivityType:(id)arg1;
- (void)_fetchAlternateWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchLivePhotoWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchVideoWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchImageWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_runExportRequestWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)activityItemSourceOperation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)_newPasteboardRepresentationForURL:(id)arg1;
- (id)_newOperationForActivityType:(id)arg1;
- (id)_uniformTypeIdentifierForActivityType:(id)arg1;
- (void)signalAnchorCompletion;
- (void)cancel;
- (void)_resetState;
- (void)setSharingPreferences:(CDStruct_df7f102b)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)_fetchSharingVariants;
- (id)_sharingVariants;
- (void)runWithActivityType:(id)arg1;
- (id)_activityOperationQueue;
- (void)dealloc;
@property(readonly, nonatomic) NSString *sharingUUID;
- (id)initWithAsset:(id)arg1 sharingPreferences:(CDStruct_df7f102b)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
