//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAutoAssetClientRequest, MADAutoAssetPersisted, MADAutoSetDescriptor, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SUCoreFSM, SUCoreLog;

__attribute__((visibility("hidden")))
@interface MADAutoSetStager : NSObject
{
    _Bool _alwaysPromoteStagedAssets;
    SUCoreLog *_logger;
    NSDictionary *_stateTable;
    SUCoreFSM *_autoStagerFSM;
    MADAutoAssetPersisted *_persistedState;
    NSString *_latestSafeSummary;
    NSString *_stagingFromOSVersion;
    NSString *_stagingFromBuildVersion;
    NSString *_assetTargetOSVersion;
    NSString *_assetTargetBuildVersion;
    MADAutoAssetClientRequest *_stagingClientRequest;
    MADAutoSetDescriptor *_activeJobDescriptor;
    NSArray *_alreadyDownloadedDescriptors;
    NSMutableArray *_candidatesForStaging;
    NSMutableDictionary *_determiningBySelector;
    NSMutableArray *_availableForStaging;
    NSMutableArray *_awaitingStagingAttempt;
    NSMutableDictionary *_successfullyStaged;
    long long _overallStagedTotalExpectedBytes;
    long long _overallStagedDownloadedSoFarBytes;
    NSMutableDictionary *_eliminationSelectors;
    NSMutableDictionary *_eliminationSelectorsAcknowledged;
}

+ (id)migrateMismatchedPersistedStateVersion:(id)arg1 forEntryID:(id)arg2 withMismatchedState:(id)arg3;
+ (void)resumeFromPersisted;
+ (void)extendSummaryWithStagedAssets:(id)arg1 basedOnControl:(id)arg2;
+ (void)extendSummaryWithStagingAssets:(id)arg1 basedOnControl:(id)arg2;
+ (void)extendSummaryWithDeterminedAssets:(id)arg1 basedOnControl:(id)arg2;
+ (void)garbageCollectEliminateSelector:(id)arg1;
+ (void)controlEliminateSelector:(id)arg1;
+ (void)controlForcePurge:(id)arg1;
+ (id)controlConvertStagedToDownloaded:(id)arg1;
+ (void)controlAlreadyDownloadedDescriptors:(id)arg1;
+ (id)controlCopyCurrentStagedDescriptors;
+ (void)autoAssetSetStagerJobDownloadDone:(id)arg1 withDownloadError:(id)arg2;
+ (void)autoAssetSetStagerJobDownloadProgress:(id)arg1 withProgressError:(id)arg2;
+ (void)autoAssetSetStagerJobDetermineDone:(id)arg1 withDetermineError:(id)arg2;
+ (void)autoAssetSetStagerJobFailedToStart:(id)arg1;
+ (void)clientPurgeAll:(id)arg1;
+ (void)clientDownloadAll:(id)arg1;
+ (void)clientDetermineAllAvailable:(id)arg1;
+ (id)autoAssetSetStager;
+ (id)_getAutoAssetStagerStateTable;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *eliminationSelectorsAcknowledged; // @synthesize eliminationSelectorsAcknowledged=_eliminationSelectorsAcknowledged;
@property(retain, nonatomic) NSMutableDictionary *eliminationSelectors; // @synthesize eliminationSelectors=_eliminationSelectors;
@property(nonatomic) long long overallStagedDownloadedSoFarBytes; // @synthesize overallStagedDownloadedSoFarBytes=_overallStagedDownloadedSoFarBytes;
@property(nonatomic) long long overallStagedTotalExpectedBytes; // @synthesize overallStagedTotalExpectedBytes=_overallStagedTotalExpectedBytes;
@property(retain, nonatomic) NSMutableDictionary *successfullyStaged; // @synthesize successfullyStaged=_successfullyStaged;
@property(retain, nonatomic) NSMutableArray *awaitingStagingAttempt; // @synthesize awaitingStagingAttempt=_awaitingStagingAttempt;
@property(retain, nonatomic) NSMutableArray *availableForStaging; // @synthesize availableForStaging=_availableForStaging;
@property(retain, nonatomic) NSMutableDictionary *determiningBySelector; // @synthesize determiningBySelector=_determiningBySelector;
@property(retain, nonatomic) NSMutableArray *candidatesForStaging; // @synthesize candidatesForStaging=_candidatesForStaging;
@property(retain, nonatomic) NSArray *alreadyDownloadedDescriptors; // @synthesize alreadyDownloadedDescriptors=_alreadyDownloadedDescriptors;
@property(retain, nonatomic) MADAutoSetDescriptor *activeJobDescriptor; // @synthesize activeJobDescriptor=_activeJobDescriptor;
@property(retain, nonatomic) MADAutoAssetClientRequest *stagingClientRequest; // @synthesize stagingClientRequest=_stagingClientRequest;
@property(retain, nonatomic) NSString *assetTargetBuildVersion; // @synthesize assetTargetBuildVersion=_assetTargetBuildVersion;
@property(retain, nonatomic) NSString *assetTargetOSVersion; // @synthesize assetTargetOSVersion=_assetTargetOSVersion;
@property(nonatomic) _Bool alwaysPromoteStagedAssets; // @synthesize alwaysPromoteStagedAssets=_alwaysPromoteStagedAssets;
@property(retain, nonatomic) NSString *stagingFromBuildVersion; // @synthesize stagingFromBuildVersion=_stagingFromBuildVersion;
@property(retain, nonatomic) NSString *stagingFromOSVersion; // @synthesize stagingFromOSVersion=_stagingFromOSVersion;
@property(retain, nonatomic) NSString *latestSafeSummary; // @synthesize latestSafeSummary=_latestSafeSummary;
@property(readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState; // @synthesize persistedState=_persistedState;
@property(retain, nonatomic) SUCoreFSM *autoStagerFSM; // @synthesize autoStagerFSM=_autoStagerFSM;
@property(readonly, retain, nonatomic) NSDictionary *stateTable; // @synthesize stateTable=_stateTable;
@property(readonly, retain, nonatomic) SUCoreLog *logger; // @synthesize logger=_logger;
- (id)_updateLatestSummary;
- (id)summary;
- (id)description;
- (void)_logPersistedTableOfContents:(id)arg1;
- (void)_logPersistedRemovedEntry:(id)arg1 removedDescriptor:(id)arg2 message:(id)arg3;
- (void)_logPersistedEntry:(id)arg1 operation:(id)arg2 persistingDescriptor:(id)arg3 withRepresentation:(long long)arg4 message:(id)arg5;
- (void)_logPersistedConfigSet:(id)arg1 message:(id)arg2;
- (void)_logPersistedConfigLoad:(id)arg1 lastStagingFromOSVersion:(id)arg2 lastStagingFromBuildVersion:(id)arg3 assetTargetOSVersion:(id)arg4 assetTargetBuildVersion:(id)arg5 candidateAssetCount:(unsigned long long)arg6 determinedAvailableAssetCount:(unsigned long long)arg7 activelyStagingAssetCount:(unsigned long long)arg8 awaitingStagingAssetCount:(unsigned long long)arg9 stagedAssetCount:(unsigned long long)arg10 stagedAssetTotalContentBytes:(unsigned long long)arg11 message:(id)arg12;
- (void)_persistRemoveAll:(id)arg1 message:(id)arg2 flushing:(_Bool)arg3;
- (void)_removeDescriptorFromSuccessfullyStaged:(id)arg1 message:(id)arg2;
- (void)_trackReloadedDescriptorAvailableForStaging:(id)arg1;
- (id)_persistRebuildTrackingForFollowupEvent:(id)arg1;
- (long long)_persistDescriptor:(id)arg1 operation:(id)arg2 persistingDescriptor:(id)arg3 withRepresentation:(long long)arg4 message:(id)arg5;
- (void)_persistLastStagingFrom;
- (void)_acknowledgeEliminatedForCurrentJob;
- (void)_removeEliminatedFromStaged;
- (void)_removeEliminatedFromCandidatesAndAvaliable;
- (id)_allEliminationSelectors;
- (_Bool)_doesSelector:(id)arg1 matchDescriptor:(id)arg2;
- (_Bool)_doesSelectorMatchCurrentJob:(id)arg1;
- (_Bool)_isAssetTypeInvolvedInStaging:(id)arg1;
- (void)_maintainLatestCandidate:(id)arg1 candidateDescriptor:(id)arg2;
- (void)_removeStagedAssetFromFilesystem:(id)arg1 forHistoryOperation:(long long)arg2;
- (void)_removeAllStagedContent;
- (void)_setupAwaitingStagingAndBeginFirstDownload;
- (void)_acknowlegdeAndClearAllEliminations;
- (void)_clearAllTrackingOfActiveOperations;
- (void)_clearBeforeDetermineAvailable;
- (void)_cancelCurrentJob;
- (void)_updateDescriptor:(id)arg1 withLatestJobStatus:(id)arg2;
- (void)_replyHaveStagedContent;
- (void)_replyNothingStaged;
- (void)_replyToStagingClientOperationSuccess;
- (void)_replyToStagingClient:(id)arg1 withErrorCode:(long long)arg2 withUnderlyingError:(id)arg3 withDescription:(id)arg4;
- (id)_stagingClientMessageDesire;
- (id)_stagingClientMessageInstance;
- (void)_acceptStagingClientRequest:(id)arg1;
- (long long)actionUnknownAction:(id)arg1 error:(id *)arg2;
- (long long)action_EliminateCancelActiveJob:(id)arg1 error:(id *)arg2;
- (long long)action_EliminateDoneStagedDecideEmpty:(id)arg1 error:(id *)arg2;
- (long long)action_EliminateDoneDecideMoreDownload:(id)arg1 error:(id *)arg2;
- (long long)action_EliminateAvailableDecideEmpty:(id)arg1 error:(id *)arg2;
- (long long)action_EliminateDoneDecideMoreCandidates:(id)arg1 error:(id *)arg2;
- (long long)action_EliminateDeterminingDecideMatch:(id)arg1 error:(id *)arg2;
- (long long)action_EliminateDecideMatch:(id)arg1 error:(id *)arg2;
- (long long)action_RemeberEliminateDone:(id)arg1 error:(id *)arg2;
- (long long)action_EliminateDone:(id)arg1 error:(id *)arg2;
- (long long)action_CancelActiveJob:(id)arg1 error:(id *)arg2;
- (long long)action_RemoveAllReplyPurged:(id)arg1 error:(id *)arg2;
- (long long)action_ReplyHaveStaged:(id)arg1 error:(id *)arg2;
- (long long)action_ReplyNothingStaged:(id)arg1 error:(id *)arg2;
- (long long)action_ReplyNoCandidates:(id)arg1 error:(id *)arg2;
- (long long)action_ReplyHaveAvailable:(id)arg1 error:(id *)arg2;
- (long long)action_DoneAvailableDecideAnyStaged:(id)arg1 error:(id *)arg2;
- (long long)action_NextAwaitingBeginDownload:(id)arg1 error:(id *)arg2;
- (long long)action_NextCandidateBeginDetermine:(id)arg1 error:(id *)arg2;
- (long long)action_DoneCandidatesDecideAnyAvailable:(id)arg1 error:(id *)arg2;
- (long long)action_FormCandidatesDecideDetermine:(id)arg1 error:(id *)arg2;
- (long long)action_DecideMoreAvailable:(id)arg1 error:(id *)arg2;
- (long long)action_AddToStagedDecideMoreAvailable:(id)arg1 error:(id *)arg2;
- (long long)action_ReportStagingProgressToClient:(id)arg1 error:(id *)arg2;
- (long long)action_DecideMoreCandidates:(id)arg1 error:(id *)arg2;
- (long long)action_AddToAvailableDecideMoreCandidates:(id)arg1 error:(id *)arg2;
- (long long)action_ClientInvalidStagingPhase:(id)arg1 error:(id *)arg2;
- (long long)action_ClientHaveStagedContent:(id)arg1 error:(id *)arg2;
- (long long)action_ClientNothingStaged:(id)arg1 error:(id *)arg2;
- (long long)action_ClientAcceptRemoveAllReplyPurged:(id)arg1 error:(id *)arg2;
- (long long)action_ClientAcceptCancelActiveJob:(id)arg1 error:(id *)arg2;
- (long long)action_ClientAcceptNextAvailableBeginDownload:(id)arg1 error:(id *)arg2;
- (long long)action_ClientRequestAlreadyDownloaded:(id)arg1 error:(id *)arg2;
- (long long)action_ClientContinueUsingLatestRequest:(id)arg1 error:(id *)arg2;
- (long long)action_ClientAccept:(id)arg1 error:(id *)arg2;
- (long long)action_ControlUnstagedDecideRemoveAll:(id)arg1 error:(id *)arg2;
- (long long)action_ControlUnstagedDecideCancelJob:(id)arg1 error:(id *)arg2;
- (long long)action_ResumingNextAvailableBeginDownload:(id)arg1 error:(id *)arg2;
- (long long)action_LoadPersistedDecideResume:(id)arg1 error:(id *)arg2;
- (void)_addDescriptor:(id)arg1 withRepresentation:(long long)arg2 toSummary:(id)arg3;
- (void)_extendSummaryWithStagedAssets:(id)arg1 basedOnControl:(id)arg2;
- (void)_extendSummaryWithStagingAssets:(id)arg1 basedOnControl:(id)arg2;
- (void)_extendSummaryWithDeterminedAssets:(id)arg1 basedOnControl:(id)arg2;
- (id)_controlConvertStagedToDownloaded:(id)arg1;
- (id)init;
- (long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id *)arg6;

@end

