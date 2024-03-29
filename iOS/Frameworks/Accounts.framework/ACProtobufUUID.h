//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface ACProtobufUUID : PBCodable
{
    NSString *_value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSUUID *uuid;
- (id)initWithUUID:(id)arg1;

@end

