//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOVStyleAttribute : PBCodable <NSCopying>
{
    int _intValue;
    unsigned int _key;
    struct {
        unsigned int intValue:1;
    } _has;
}

@property(nonatomic) int intValue; // @synthesize intValue=_intValue;
@property(nonatomic) unsigned int key; // @synthesize key=_key;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIntValue;

@end
