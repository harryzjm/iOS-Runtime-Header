//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCharacteristicRangeEventDatabaseID, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome, MKFService;

__attribute__((visibility("hidden")))
@interface _MKFCharacteristicRangeEvent
{
}

+ (id)backingModelProtocol;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
@property(readonly) id <MKFHome> home;
- (id)castIfCharacteristicRangeEvent;
@property(readonly, copy, nonatomic) MKFCharacteristicRangeEventDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;
- (_Bool)validateMax:(id *)arg1 error:(id *)arg2;
- (_Bool)validateMin:(id *)arg1 error:(id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSNumber *characteristicID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(retain, nonatomic) NSObject *max; // @dynamic max;
@property(retain, nonatomic) NSObject *min; // @dynamic min;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFService> service;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

