//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKHome, MKFCKRoom, NSData, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKAccessory
{
}

+ (id)fetchRequest;
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (_Bool)isReadyToImportIntoLocalModelWithContext:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDictionary *applicationData; // @dynamic applicationData;
@property(retain, nonatomic) NSSet *automations; // @dynamic automations;
@property(copy, nonatomic) NSString *configuredName; // @dynamic configuredName;
@property(copy, nonatomic) NSUUID *flags; // @dynamic flags;
@property(copy, nonatomic) NSUUID *groupIdentifier; // @dynamic groupIdentifier;
@property(copy, nonatomic) NSString *groupName; // @dynamic groupName;
@property(retain, nonatomic) MKFCKHome *home; // @dynamic home;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(retain, nonatomic) MKFCKAccessory *hostAccessory; // @dynamic hostAccessory;
@property(retain, nonatomic) NSSet *hostedAccessories; // @dynamic hostedAccessories;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSNumber *initialCategory; // @dynamic initialCategory;
@property(copy, nonatomic) NSString *initialManufacturer; // @dynamic initialManufacturer;
@property(copy, nonatomic) NSString *initialModel; // @dynamic initialModel;
@property(nonatomic) _Bool isHosted; // @dynamic isHosted;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(nonatomic) long long networkClientIdentifier; // @dynamic networkClientIdentifier;
@property(nonatomic) long long networkClientLAN; // @dynamic networkClientLAN;
@property(copy, nonatomic) NSUUID *networkRouterUUID; // @dynamic networkRouterUUID;
@property(nonatomic) _Bool ownerListeningHistoryEnabled; // @dynamic ownerListeningHistoryEnabled;
@property(nonatomic) _Bool ownerMediaContentProfileEnabled; // @dynamic ownerMediaContentProfileEnabled;
@property(nonatomic) _Bool ownerPersonalRequestsEnabled; // @dynamic ownerPersonalRequestsEnabled;
@property(copy, nonatomic) NSString *productData; // @dynamic productData;
@property(retain, nonatomic) MKFCKRoom *room; // @dynamic room;
@property(retain, nonatomic) NSSet *scenes; // @dynamic scenes;
@property(copy, nonatomic) NSString *serialNumber; // @dynamic serialNumber;
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey; // @dynamic wiFiUniquePreSharedKey;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end

