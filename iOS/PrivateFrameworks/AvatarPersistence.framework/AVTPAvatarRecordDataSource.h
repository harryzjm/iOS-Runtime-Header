//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarPersistence/AVTAvatarRecordDataSource-Protocol.h>
#import <AvatarPersistence/AVTAvatarRecordDataSourceInternal-Protocol.h>
#import <AvatarPersistence/AVTAvatarStoreDelegate-Protocol.h>

@class AVTAvatarFetchRequest, AVTObservableAvatarStore, AVTPAvatarStore, NSMutableArray, NSNotificationCenter, NSPointerArray, NSString;
@protocol AVTUILogger, NSObject, OS_dispatch_queue;

@interface AVTPAvatarRecordDataSource : NSObject <AVTAvatarStoreDelegate, AVTAvatarRecordDataSourceInternal, AVTAvatarRecordDataSource>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AVTPAvatarStore *_underlyingStore;
    AVTObservableAvatarStore *_backingStore;
    AVTAvatarFetchRequest *_fetchRequest;
    NSMutableArray *_nts_recordStorage;
    id <AVTUILogger> _logger;
    NSNotificationCenter *_notificationCenter;
    NSPointerArray *_nts_observers;
    id <NSObject> _nts_changeNotificationObserver;
}

+ (id)loadRecordsWithStore:(id)arg1 request:(id)arg2 logger:(id)arg3;
+ (unsigned long long)indexForInsertingDuplicateRecord:(id)arg1 original:(id)arg2 inRecords:(id)arg3;
+ (unsigned long long)indexForInsertingRecord:(id)arg1 inRecords:(id)arg2;
+ (id)sortedRecordsEditableFirstReverseOrder:(id)arg1;
+ (id)defaultUIDataSourceWithDomainIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <NSObject> nts_changeNotificationObserver; // @synthesize nts_changeNotificationObserver=_nts_changeNotificationObserver;
@property(readonly, nonatomic) NSPointerArray *nts_observers; // @synthesize nts_observers=_nts_observers;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSMutableArray *nts_recordStorage; // @synthesize nts_recordStorage=_nts_recordStorage;
@property(readonly, nonatomic) AVTAvatarFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) AVTObservableAvatarStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) AVTPAvatarStore *underlyingStore; // @synthesize underlyingStore=_underlyingStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void)store:(id)arg1 didCreateDuplicateAvatar:(id)arg2 forOriginal:(id)arg3 postCompletionHandler:(CDUnknownBlockType)arg4;
- (void)store:(id)arg1 didDeleteAvatarWithIdentifier:(id)arg2 postCompletionHandler:(CDUnknownBlockType)arg3;
- (void)store:(id)arg1 didSaveAvatar:(id)arg2 postCompletionHandler:(CDUnknownBlockType)arg3;
- (id)indexSetForEditableRecords;
- (unsigned long long)indexOfRecordPassingTest:(CDUnknownBlockType)arg1;
- (id)indexesOfRecordsPassingTest:(CDUnknownBlockType)arg1;
- (id)internalRecordStore;
- (id)recordStore;
- (id)recordAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRecords;
- (void)avatarStoreDidChange:(id)arg1;
- (void)didRecieveAvatarChangeDistributedNotification:(id)arg1;
- (void)enumerateObserversRespondingToSelector:(SEL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addPriorityObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)performObserversWork:(CDUnknownBlockType)arg1;
- (void)performSyncWorkWithRecords:(CDUnknownBlockType)arg1;
- (_Bool)areRecordsLoaded;
- (void)dealloc;
- (void)flushRecordsForEnteringBackground;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 callbackQueue:(id)arg3 logger:(id)arg4 notificationCenter:(id)arg5;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 callbackQueue:(id)arg3 environment:(id)arg4;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 environment:(id)arg3;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
