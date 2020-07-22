//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessProcessManager, NSFilePresenterXPCMessenger, NSFileWatcher, NSMutableArray, NSObject, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy
{
    id _remotePresenter;
    NSFilePresenterXPCMessenger *_forwardedMessenger;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileWatcher *_watcher;
    unsigned long long _writingRelinquishmentCount;
    id _currentWriterPurposeID;
    NSMutableArray *_previousWriterPurposeIDs;
    NSFileAccessProcessManager *_processManager;
    NSSet *_observedUbiquityAttributes;
    unsigned long long _filePresenterResponses;
    _Bool _didObserveMovingByWriter;
    _Bool _didObserveVersionChangingByWriter;
    _Bool _disconnected;
    _Bool _inSubarbiter;
    _Bool _usesMainThreadDuringRelinquishing;
    _Bool _didObserveNonCoordinatedChanges;
}

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;
@property(nonatomic) unsigned long long filePresenterResponses; // @synthesize filePresenterResponses=_filePresenterResponses;
@property(copy) NSSet *observedUbiquityAttributes; // @synthesize observedUbiquityAttributes=_observedUbiquityAttributes;
@property _Bool usesMainThreadDuringReliquishing; // @synthesize usesMainThreadDuringReliquishing=_usesMainThreadDuringRelinquishing;
@property _Bool inSubarbiter; // @synthesize inSubarbiter=_inSubarbiter;
- (void)localFileWasEvicted;
- (void)promisedFileWasFulfilled;
@property(readonly) _Bool disconnected;
- (void)disconnect;
- (void)forwardRelinquishmentForWritingClaim:(_Bool)arg1 withID:(id)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 options:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)observeNewProvider:(id)arg1;
- (void)observePresenterChange:(_Bool)arg1 atSubitemURL:(id)arg2;
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;
- (void)observeChangeAtSubitemPath:(id)arg1;
- (void)observeDisappearanceAtSubitemPath:(id)arg1;
- (void)observeChangeOfUbiquityAttributes:(id)arg1;
- (void)observeSharingChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (void)observeMoveByWriterWithPurposeID:(id)arg1 withPhysicalDestinationURL:(id)arg2;
- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)stopObservingApplicationState;
- (void)startObservingApplicationStateWithQueue:(id)arg1;
- (void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(CDUnknownBlockType)arg3;
- (void)_settleNonCoordinatedChanges;
- (_Bool)allowedForURL:(id)arg1;
- (void)invalidate;
- (void)forwardUsingProxy:(id)arg1;
- (_Bool)shouldSendObservationMessageWithPurposeID:(id)arg1;
- (void)setItemLocation:(id)arg1;
- (id)_clientProxy;
- (void)dealloc;
- (id)initWithClient:(id)arg1 remotePresenter:(id)arg2 reactorID:(id)arg3;

@end

