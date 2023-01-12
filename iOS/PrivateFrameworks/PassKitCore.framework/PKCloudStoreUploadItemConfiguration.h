//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet;
@protocol PKCloudStoreCoding;

@interface PKCloudStoreUploadItemConfiguration : NSObject <NSSecureCoding>
{
    unsigned long long _itemType;
    NSObject<PKCloudStoreCoding> *_item;
    NSSet *_cloudStoreZones;
    NSDictionary *_recordSpecificKeys;
    unsigned long long _codingType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long codingType; // @synthesize codingType=_codingType;
@property(copy, nonatomic) NSDictionary *recordSpecificKeys; // @synthesize recordSpecificKeys=_recordSpecificKeys;
@property(retain, nonatomic) NSSet *cloudStoreZones; // @synthesize cloudStoreZones=_cloudStoreZones;
@property(retain, nonatomic) NSObject<PKCloudStoreCoding> *item; // @synthesize item=_item;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithItem:(id)arg1 recordSpecificKeys:(id)arg2;
- (id)initWithItem:(id)arg1;

@end
