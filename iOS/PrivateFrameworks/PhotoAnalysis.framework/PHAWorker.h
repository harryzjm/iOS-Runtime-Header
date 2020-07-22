//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAWorkerConfiguration-Protocol.h>

@class NSString, NSURL, PHALibraryChangeListener, PHAManager, PHAServiceCancelableOperation, PHPhotoLibrary;
@protocol OS_dispatch_queue, PHAAssetResourceDataLoading;

@interface PHAWorker : NSObject <PHAWorkerConfiguration>
{
    PHAManager *_photoAnalysisManager;
    _Bool _shutdownHasBeenCalled;
    _Bool _warmedUp;
    id <PHAAssetResourceDataLoading> _dataLoader;
    PHAServiceCancelableOperation *_currentOperation;
    NSObject<OS_dispatch_queue> *_userInitiatedRequestQueue;
}

+ (void)configureXPCConnection:(id)arg1;
+ (_Bool)persistsState;
+ (_Bool)wantsToReceiveXPCRequestsOnUserInitiatedRequestQueue;
+ (_Bool)runsExclusively;
+ (short)workerType;
+ (long long)applicationDataFolderIdentifier;
@property(retain) NSObject<OS_dispatch_queue> *userInitiatedRequestQueue; // @synthesize userInitiatedRequestQueue=_userInitiatedRequestQueue;
@property(retain) PHAServiceCancelableOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain, nonatomic) id <PHAAssetResourceDataLoading> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic, getter=isWarmedUp) _Bool warmedUp; // @synthesize warmedUp=_warmedUp;
- (void).cxx_destruct;
@property(readonly, getter=isQuiescent) _Bool quiescent;
- (_Bool)allowCooldownForWorkerChange:(id)arg1;
- (_Bool)workerJobCausesCooldown:(id)arg1;
- (_Bool)shouldCooldownForConstraintChange:(id)arg1;
- (_Bool)shouldWarmupForConstraintChange:(id)arg1;
- (_Bool)warmupBasedOnConstraintChanges;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (_Bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (_Bool)stopAcknowledgeDeletionsJob:(id)arg1 error:(id *)arg2;
- (_Bool)startAcknowledgeDeletionsJob:(id)arg1 error:(id *)arg2;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)shutdown;
- (void)cooldown;
- (void)warmup;
- (void)startup;
- (id)libraryScopedWorkerPreferencesURL;
- (void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2;
- (id)libraryScopedWorkerPreferences;
- (void)dispatchAsyncToExecutiveStateQueue:(CDUnknownBlockType)arg1;
- (void)assertUserInitiatedRequestQueue;
- (_Bool)dispatchSyncToUserInitiatedRequestQueue:(CDUnknownBlockType)arg1;
- (_Bool)dispatchAsyncToUserInitiatedRequestQueue:(CDUnknownBlockType)arg1;
- (id)statusAsDictionary;
@property(readonly) _Bool isEnabled;
@property(readonly) PHALibraryChangeListener *changeListener;
@property(readonly) NSURL *persistentStorageDirectoryURL;
@property(readonly) NSObject<OS_dispatch_queue> *executiveStateQueue;
@property(readonly) PHPhotoLibrary *photoLibrary;
@property(readonly) PHAManager *photoAnalysisManager;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

