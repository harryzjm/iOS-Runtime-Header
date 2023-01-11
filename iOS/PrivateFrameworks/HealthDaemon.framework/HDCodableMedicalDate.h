//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCodableMedicalDate : PBCodable <NSCopying>
{
    long long _form;
    double _underlyingDate;
    NSString *_originalTimeZoneString;
    struct {
        unsigned int form:1;
        unsigned int underlyingDate:1;
    } _has;
}

@property(retain, nonatomic) NSString *originalTimeZoneString; // @synthesize originalTimeZoneString=_originalTimeZoneString;
@property(nonatomic) double underlyingDate; // @synthesize underlyingDate=_underlyingDate;
@property(nonatomic) long long form; // @synthesize form=_form;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOriginalTimeZoneString;
@property(nonatomic) _Bool hasUnderlyingDate;
@property(nonatomic) _Bool hasForm;

@end

