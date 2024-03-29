//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPMetadataModel
{
}

+ (id)allowedTypes;
+ (id)modelWithDictionary:(id)arg1;
+ (id)metadataModelObjectUUID;
+ (id)properties;
+ (Class)cd_entityClass;
+ (id)cd_parentReferenceName;
- (id)metadataDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSData *legacyCloudData; // @dynamic legacyCloudData;
@property(retain, nonatomic) NSData *legacyIDSData; // @dynamic legacyIDSData;
@property(retain, nonatomic) NSNumber *metadataVersion; // @dynamic metadataVersion;
@property(retain, nonatomic) NSDictionary *rawPlist; // @dynamic rawPlist;
@property(retain, nonatomic) NSNumber *schemaVersion; // @dynamic schemaVersion;
@property(readonly) Class superclass;

@end

