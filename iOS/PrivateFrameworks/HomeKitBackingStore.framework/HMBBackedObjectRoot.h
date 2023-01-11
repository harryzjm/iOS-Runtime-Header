//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBLocalZoneDelegate-Protocol.h>
#import <HomeKitBackingStore/HMBLocalZoneModelObserver-Protocol.h>

@class HMBLocalZone, HMFUnfairLock, NSMutableDictionary, NSMutableSet, NSString, NSUUID;

@interface HMBBackedObjectRoot <HMBLocalZoneModelObserver, HMBLocalZoneDelegate>
{
    NSUUID *_parentModelID;
    HMBLocalZone *_hmbLocalZone;
    HMFUnfairLock *_transactionLock;
    NSMutableDictionary *_modelCache;
    NSMutableSet *_modifiedModels;
    NSMutableSet *_removedModelIDs;
    NSMutableDictionary *_hmbModelCache;
    HMFUnfairLock *_hmbTransactionLock;
}

@property(readonly, nonatomic) HMFUnfairLock *hmbTransactionLock; // @synthesize hmbTransactionLock=_hmbTransactionLock;
@property(retain, nonatomic) NSMutableDictionary *hmbModelCache; // @synthesize hmbModelCache=_hmbModelCache;
- (void).cxx_destruct;
- (id)hmbParentModelID;
- (void)hmbRunBlock:(CDUnknownBlockType)arg1;
- (id)hmbRunTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)hmbUpdateModel:(id)arg1;
- (void)hmbRemoveModelWithID:(id)arg1;
- (void)hmbSetPropertyIfNotNilForObject:(id)arg1 named:(id)arg2 to:(id)arg3;
- (void)hmbSetPropertyForObject:(id)arg1 named:(id)arg2 to:(id)arg3;
- (_Bool)hmbPropertyWasSetForObject:(id)arg1 named:(id)arg2;
- (id)hmbPropertyForObject:(id)arg1 named:(id)arg2 isSet:(_Bool *)arg3;
- (_Bool)hmbPropertyIsReadOnlyForObject:(id)arg1 named:(id)arg2;
- (_Bool)hmbPropertyIsAvailableForObject:(id)arg1 named:(id)arg2;
- (id)hmbDefaultValueForObject:(id)arg1 named:(id)arg2;
- (void)hmbMarkObjectForRemoval:(id)arg1;
- (id)hmbParent;
- (id)hmbRoot;
- (id)hmbLocalZone;
- (_Bool)hmbValidLocalZone;
- (id)initWithLocalZone:(id)arg1 modelID:(id)arg2 parentModelID:(id)arg3;
- (id)initWithLocalZone:(id)arg1 model:(id)arg2;
- (id)initWithLocalZone:(id)arg1 modelID:(id)arg2 parentModelID:(id)arg3 model:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
