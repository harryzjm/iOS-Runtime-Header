//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoRegistry/NSFastEnumeration-Protocol.h>

@class NRPBDeviceDiff, NSDictionary;

@interface NRDeviceDiff <NSFastEnumeration>
{
    NSDictionary *_diffPropertyDiffs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NRPBDeviceDiff *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allPropertyNames;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)diffPropertyDiffForName:(id)arg1;
- (id)initWithDiffPropertyDiffs:(id)arg1;

@end
