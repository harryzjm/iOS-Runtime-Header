//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable
{
    unsigned long long _numericValue;
    int _identifier;
    NSString *_stringValue;
    struct {
        unsigned int numericValue:1;
        unsigned int identifier:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) unsigned long long numericValue; // @synthesize numericValue=_numericValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)clearOneofValuesForIdentifier;
- (int)StringAsIdentifier:(id)arg1;
- (id)identifierAsString:(int)arg1;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasNumericValue;

@end

