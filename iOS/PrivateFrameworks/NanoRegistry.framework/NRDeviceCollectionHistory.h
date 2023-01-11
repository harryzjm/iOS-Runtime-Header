//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRMutableStateParentDelegate-Protocol.h>
#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSFastEnumeration-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NRMutableDeviceCollection, NRPBDeviceCollectionHistory, NRSwitchRecordCollection, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet;

@interface NRDeviceCollectionHistory : NSObject <NRMutableStateParentDelegate, NSCopying, NSSecureCoding, NSFastEnumeration>
{
    NSMutableOrderedSet *_observers;
    long long _maxHistoryDepth;
    _Atomic _Bool _atomicDirty;
    struct os_unfair_lock_s _observerLock;
    struct os_unfair_lock_s _cacheLock;
    NRMutableDeviceCollection *_deviceCollection;
    unsigned long long _startIndex;
    NSMutableArray *_history;
    NRSwitchRecordCollection *_switchRecords;
    NSMutableDictionary *_historyStateCache;
    NSMutableArray *_historyStateCacheMRU;
    NSMutableArray *_historyStateCacheIndex;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NRMutableDeviceCollection *deviceCollection; // @synthesize deviceCollection=_deviceCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToHistory:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)description;
- (void)invalidate;
- (void)notifyHistoryObserversWithEntry:(id)arg1;
- (id)deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (id)switchDeviceIDFromDiff:(id)arg1;
@property(readonly, nonatomic) unsigned int switchIndex;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)addObserverQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)applyDiff:(id)arg1;
@property(readonly, nonatomic) unsigned long long nextIndex;
@property(readonly, nonatomic) unsigned long long count;
- (id)historyEntryAtIndex:(unsigned long long)arg1;
- (void)_truncateHistory;
- (void)pruneStateCacheItems:(unsigned long long)arg1;
- (void)_updateHistoryCachesWithIndex:(id)arg1;
- (id)_mostRecentStateBefore:(id)arg1;
- (unsigned long long)_findIndexInHistoryStateCache:(id)arg1 type:(unsigned long long)arg2;
@property(readonly, nonatomic) NRPBDeviceCollectionHistory *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_createIndex;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool dirty;
- (id)init;

@end
