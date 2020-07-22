//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCThrottleBase, BRCTransferStream, BRCUserDefaults, CKContainer, CKContainerID, NSDate, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCSyncContext : NSObject
{
    CKContainer *_ckContainer;
    NSString *_contextIdentifier;
    NSString *_sourceAppIdentifier;
    _Bool _isShared;
    _Bool _isCancelled;
    int _notifyTokenForFramework;
    NSMutableSet *_foregroundClients;
    NSString *_lastForegroundClientDescription;
    NSDate *_dateWhenLastForegroundClientLeft;
    NSObject<OS_dispatch_source> *_timerForGraceForegroundPeriod;
    NSObject<OS_dispatch_source> *_timerForForcedForegroundPeriod;
    NSObject<OS_dispatch_queue> *_foregroundStateQueue;
    unsigned long long _foregroundState;
    BRCAccountSession *_session;
    BRCThrottleBase *_readerThrottle;
    BRCThrottleBase *_applyThrottle;
    BRCThrottleBase *_downloadThrottle;
    BRCThrottleBase *_uploadThrottle;
    BRCThrottleBase *_uploadFileModifiedThrottle;
    BRCThrottleBase *_perItemSyncUpThrottle;
    BRCTransferStream *_uploadStream;
    BRCTransferStream *_downloadStream;
}

+ (id)transferContextForServerZone:(id)arg1 appLibrary:(id)arg2;
+ (id)contextIdentifierForMangledID:(id)arg1;
+ (id)_contextIdentifierForMangledID:(id)arg1 metadata:(_Bool)arg2;
+ (id)_sourceAppIdentifierForMangledID:(id)arg1;
@property(readonly, nonatomic) _Bool isShared; // @synthesize isShared=_isShared;
@property(readonly, nonatomic) BRCTransferStream *downloadStream; // @synthesize downloadStream=_downloadStream;
@property(readonly, nonatomic) BRCTransferStream *uploadStream; // @synthesize uploadStream=_uploadStream;
@property(readonly, nonatomic) BRCThrottleBase *perItemSyncUpThrottle; // @synthesize perItemSyncUpThrottle=_perItemSyncUpThrottle;
@property(readonly, nonatomic) BRCThrottleBase *uploadFileModifiedThrottle; // @synthesize uploadFileModifiedThrottle=_uploadFileModifiedThrottle;
@property(readonly, nonatomic) BRCThrottleBase *uploadThrottle; // @synthesize uploadThrottle=_uploadThrottle;
@property(readonly, nonatomic) BRCThrottleBase *downloadThrottle; // @synthesize downloadThrottle=_downloadThrottle;
@property(readonly, nonatomic) BRCThrottleBase *applyThrottle; // @synthesize applyThrottle=_applyThrottle;
@property(readonly, nonatomic) BRCThrottleBase *readerThrottle; // @synthesize readerThrottle=_readerThrottle;
@property(readonly, nonatomic) NSString *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)_notifyContainerBeingNowForeground;
- (void)_notifyFrameworkContainersMonitorWithState:(_Bool)arg1;
- (void)_armForegroundGraceTimerForClientDescription:(id)arg1;
- (void)didReceiveHandoffRequest;
- (id)foregroundClients;
- (_Bool)isForeground;
- (void)removeForegroundClient:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (void)forceContainerForegroundForDuration:(double)arg1;
- (void)dumpToContext:(id)arg1;
- (void)close;
- (void)waitForAllOperations;
- (void)cancel;
- (void)resume;
- (void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2;
- (void)addOperation:(id)arg1;
- (_Bool)allowsCellularAccess;
- (void)notifyDuetFromAccessByBundleID:(id)arg1;
- (id)_database;
@property(readonly, nonatomic) CKContainerID *ckContainerID;
@property(readonly, nonatomic) CKContainer *ckContainer;
- (void)setupIfNeeded;
- (void)dealloc;
- (id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 sourceAppIdentifier:(id)arg3 isShared:(_Bool)arg4;
- (id)description;
@property(readonly, nonatomic) BRCUserDefaults *defaults;

@end

