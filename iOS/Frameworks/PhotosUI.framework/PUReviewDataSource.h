//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PUReviewDataSource : NSObject
{
    NSHashTable *__observers;
    NSMutableArray *__assetIdentifiers;
    NSMutableDictionary *__assetsByIdentifier;
    NSMutableDictionary *__representativeAssetsByBurstIdentifier;
    NSMutableDictionary *__enqueuedBurstAssetIdentifiersByBurstIdentifier;
    NSMutableDictionary *__enqueuedBurstAssetsByAssetIdentifier;
    long long __nestedPerformChanges;
    NSMutableSet *__updatedAssetIdentifiers;
}

@property(readonly, nonatomic) NSMutableSet *_updatedAssetIdentifiers; // @synthesize _updatedAssetIdentifiers=__updatedAssetIdentifiers;
@property(nonatomic, setter=_setNestedPerformChanges:) long long _nestedPerformChanges; // @synthesize _nestedPerformChanges=__nestedPerformChanges;
@property(readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetsByAssetIdentifier; // @synthesize _enqueuedBurstAssetsByAssetIdentifier=__enqueuedBurstAssetsByAssetIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetIdentifiersByBurstIdentifier; // @synthesize _enqueuedBurstAssetIdentifiersByBurstIdentifier=__enqueuedBurstAssetIdentifiersByBurstIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_representativeAssetsByBurstIdentifier; // @synthesize _representativeAssetsByBurstIdentifier=__representativeAssetsByBurstIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_assetsByIdentifier; // @synthesize _assetsByIdentifier=__assetsByIdentifier;
@property(readonly, nonatomic) NSMutableArray *_assetIdentifiers; // @synthesize _assetIdentifiers=__assetIdentifiers;
@property(readonly, nonatomic) NSHashTable *_observers; // @synthesize _observers=__observers;
- (void).cxx_destruct;
- (id)description;
- (id)orderedIdentifiers;
- (id)assetsByIdentifier;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)processPendingBurstAssets;
- (void)enqueuePendingBurstAsset:(id)arg1;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)arg1;
- (void)removeAllAssets;
- (void)removeAssetWithIdentifier:(id)arg1;
- (void)replaceAsset:(id)arg1;
- (void)insertAssets:(id)arg1;
- (void)insertAsset:(id)arg1;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)arg1;
- (id)existingAssetForIdentifier:(id)arg1;
- (id)init;

@end

