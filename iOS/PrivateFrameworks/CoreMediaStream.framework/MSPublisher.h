//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMediaStream/MSPublishStorageProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSPublishStreamsProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSPublisher-Protocol.h>

@class MSMediaStreamDaemon, MSObjectQueue, MSPublishStreamsProtocol, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol MSPublishStorageProtocol, MSPublisherDelegate;

@interface MSPublisher <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate>
{
    id <MSPublisherDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
    int _state;
    MSObjectQueue *_uploadQueue;
    MSObjectQueue *_derivativesQueue;
    MSObjectQueue *_quarantinedQueue;
    NSArray *_pendingDerivativesQueue;
    NSMutableArray *_requestAuthQueue;
    unsigned long long _sendingQueueCount;
    NSMutableArray *_sendingQueue;
    NSMutableDictionary *_fileHashToAssetMap;
    MSPublishStreamsProtocol *_protocol;
    id <MSPublishStorageProtocol> _storageProtocol;
    NSURL *_storageProtocolURL;
    NSMutableArray *_tempFiles;
    NSMutableDictionary *_maxSizeByUTI;
    long long _publishTargetByteCount;
    int _publishBatchSize;
    int _maxErrorCount;
}

+ (_Bool)isInRetryState;
+ (void)stopAllActivities;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)nextActivityDate;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (void)forgetPersonID:(id)arg1;
+ (id)_clearInstantiatedPublishersByPersonID;
+ (id)existingPublisherForPersonID:(id)arg1;
+ (id)publisherForPersonID:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int publishBatchSize; // @synthesize publishBatchSize=_publishBatchSize;
@property(nonatomic) long long publishTargetByteCount; // @synthesize publishTargetByteCount=_publishTargetByteCount;
@property(retain, nonatomic) NSURL *storageProtocolURL; // @synthesize storageProtocolURL=_storageProtocolURL;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) id <MSPublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isInRetryState;
- (void)stop;
- (void)abort;
- (void)_forget;
- (void)_abort;
- (id)_abortedError;
- (int)_stop;
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;
- (void)_sendUploadComplete;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(_Bool *)arg2 setOutIsCounted:(_Bool *)arg3 setOutIsFatal:(_Bool *)arg4 setOutNeedsBackoff:(_Bool *)arg5 setOutIsTemporary:(_Bool *)arg6 setOutIsTokenAuth:(_Bool *)arg7 setOutIsAuthError:(_Bool *)arg8;
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
- (void)_sendFilesToMMCS;
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;
- (void)_sendMetadataToStreams;
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
- (void)_didFinishUsingAssetCollections:(id)arg1;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;
- (void)_removeAssetFromFileHashMap:(id)arg1;
- (void)_addAssetToFileHashMap:(id)arg1;
- (void)_requestDerivatives;
- (void)publish;
- (_Bool)_isAllowedToUpload;
- (void)reenqueueQuarantinedAssetCollections;
- (id)_checkObjectWrappers:(id)arg1;
- (id)_checkAssetCollectionFiles:(id)arg1;
- (id)_collectionWithNoDerivatives:(id)arg1;
- (_Bool)_verifyAssetFile:(id)arg1;
- (void)_quarantineOrDiscardWrappers:(id)arg1 withError:(id)arg2;
- (void)_registerAllAssetsForWrapper:(id)arg1;
- (void)_registerAsset:(id)arg1;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (void)_refreshServerSideConfiguredParameters;
- (void)computeHashForAsset:(id)arg1;
- (_Bool)dequeueAssetCollectionWithGUIDs:(id)arg1 outError:(id *)arg2;
- (_Bool)enqueueAssetCollections:(id)arg1 outError:(id *)arg2;
- (void)_updateMasterManifest;
- (void)dealloc;
- (void)deactivate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
