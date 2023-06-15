//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCharacteristicMetadata, MKFCharacteristicDatabaseID, NSArray, NSData, NSDictionary, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFHome, MKFService;

__attribute__((visibility("hidden")))
@interface _MKFCharacteristic
{
}

+ (id)backingModelProtocol;
+ (id)homeRelation;
+ (id)fetchRequest;
@property(readonly, retain, nonatomic) NSArray *notificationRegistrations;
@property(readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property(readonly) id <MKFHome> home;
- (id)castIfCharacteristic;
@property(readonly, copy, nonatomic) MKFCharacteristicDatabaseID *databaseID;
- (void)pr_updateWithHAPMetadata:(id)arg1;
- (void)pr_updateWithDictionary:(id)arg1;
@property(readonly, copy) NSDictionary *pr_dictionaryRepresentation;
@property(readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;

// Remaining properties
@property(retain, nonatomic) NSData *authorizationData; // @dynamic authorizationData;
@property(retain, nonatomic) NSSet *bulletinRegistrations_; // @dynamic bulletinRegistrations_;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *format; // @dynamic format;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *instanceID; // @dynamic instanceID;
@property(copy, nonatomic) NSString *manufacturerDescription; // @dynamic manufacturerDescription;
@property(retain, nonatomic) NSSet *notificationRegistrations_; // @dynamic notificationRegistrations_;
@property(copy, nonatomic) NSNumber *properties; // @dynamic properties;
@property(readonly, retain, nonatomic) id <MKFService> service; // @dynamic service;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSUUID *type; // @dynamic type;
@property(copy, nonatomic) NSString *units; // @dynamic units;

@end

