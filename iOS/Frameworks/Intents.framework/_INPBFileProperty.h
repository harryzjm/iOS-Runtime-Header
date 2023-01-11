//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBFileProperty-Protocol.h>

@class NSString, _INPBFilePropertyValue;

@interface _INPBFileProperty : PBCodable <_INPBFileProperty, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int name:1;
        unsigned int qualifier:1;
    } _has;
    int _name;
    int _qualifier;
    _INPBFilePropertyValue *_value;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBFilePropertyValue *value; // @synthesize value=_value;
@property(nonatomic) int qualifier; // @synthesize qualifier=_qualifier;
@property(nonatomic) int name; // @synthesize name=_name;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsQualifier:(id)arg1;
- (id)qualifierAsString:(int)arg1;
@property(nonatomic) _Bool hasQualifier;
- (int)StringAsName:(id)arg1;
- (id)nameAsString:(int)arg1;
@property(nonatomic) _Bool hasName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
