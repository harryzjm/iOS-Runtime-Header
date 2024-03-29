//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKRepairZonePCSOperationCallbacks;

@interface CKDRepairZonePCSOperation
{
    CDUnknownBlockType _zonePCSRepairProgressBlock;
    NSArray *_zoneIDs;
    NSMutableArray *_fetchedZones;
    NSMutableArray *_fixedZones;
    NSMutableDictionary *_pcsInfoByZoneID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // @synthesize pcsInfoByZoneID=_pcsInfoByZoneID;
@property(retain, nonatomic) NSMutableArray *fixedZones; // @synthesize fixedZones=_fixedZones;
@property(retain, nonatomic) NSMutableArray *fetchedZones; // @synthesize fetchedZones=_fetchedZones;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(copy, nonatomic) CDUnknownBlockType zonePCSRepairProgressBlock; // @synthesize zonePCSRepairProgressBlock=_zonePCSRepairProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_fetchZones;
- (void)_checkZonePCS;
- (id)_checkPCSDataForZone:(id)arg1;
- (void)_uploadRepairedZones;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

