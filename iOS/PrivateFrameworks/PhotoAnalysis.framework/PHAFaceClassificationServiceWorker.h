//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/PVVisionIntegrating-Protocol.h>

@class NSMutableArray, NSObject, NSString, PHAAnalysisWorkerJob, PVVisionAnalyzer, VNPersonsModel;
@protocol OS_dispatch_queue;

@interface PHAFaceClassificationServiceWorker <PVVisionIntegrating>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_pendingAssetIdentifiers;
    PHAAnalysisWorkerJob *_currentJob;
    PVVisionAnalyzer *_analyzer;
    VNPersonsModel *_personsModel;
    unsigned long long _numberOfAssetsToProcess;
}

+ (_Bool)persistsState;
+ (long long)applicationDataFolderIdentifier;
+ (short)workerType;
- (void).cxx_destruct;
@property unsigned long long numberOfAssetsToProcess; // @synthesize numberOfAssetsToProcess=_numberOfAssetsToProcess;
@property(retain) VNPersonsModel *personsModel; // @synthesize personsModel=_personsModel;
@property(retain) PVVisionAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
- (void)loadPersonsModel;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (void)processPendingAssetIdentifiers;
- (void)_cleanup;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)cooldown;
- (void)warmupWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
