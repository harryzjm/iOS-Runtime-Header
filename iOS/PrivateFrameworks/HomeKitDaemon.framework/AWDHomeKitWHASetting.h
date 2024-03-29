//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class AWDHomeKitValue, NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitWHASetting : PBCodable
{
    unsigned long long _timestamp;
    NSString *_keyPath;
    AWDHomeKitValue *_value;
    CDStruct_b5306035 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWDHomeKitValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKeyPath;
@property(nonatomic) _Bool hasTimestamp;

@end

