//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface NPKPassSyncStateItem : NSObject <NSSecureCoding>
{
    NSString *_passTypeIdentifier;
    NSString *_serialNumber;
    NSNumber *_sequenceCounter;
    NSData *_manifestHash;
    NSDictionary *_manifest;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) NSNumber *sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToPassSyncStateItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)shortDescription;
- (id)description;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)initWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 sequenceCounter:(id)arg3 manifestHash:(id)arg4 manifest:(id)arg5;
- (id)initWithPass:(id)arg1;
- (id)protoSyncStateItem;
- (id)initWithProtoSyncStateItem:(id)arg1;

@end
