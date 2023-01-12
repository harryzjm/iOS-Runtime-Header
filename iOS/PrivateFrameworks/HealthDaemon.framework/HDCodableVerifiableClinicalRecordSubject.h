//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableDateComponents, NSString;

@interface HDCodableVerifiableClinicalRecordSubject : PBCodable <NSCopying>
{
    HDCodableDateComponents *_dateOfBirthComponents;
    NSString *_fullName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableDateComponents *dateOfBirthComponents; // @synthesize dateOfBirthComponents=_dateOfBirthComponents;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDateOfBirthComponents;
@property(readonly, nonatomic) _Bool hasFullName;

@end
