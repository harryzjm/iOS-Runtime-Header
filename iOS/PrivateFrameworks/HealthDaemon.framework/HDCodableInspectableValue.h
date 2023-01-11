//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableCodedQuantity, HDCodableCodedValueCollection, HDCodableDateComponents, HDCodableMedicalCodingList, HDCodableMedicalDate, HDCodableMedicalDateInterval, HDCodableRatioValue, NSString;

@interface HDCodableInspectableValue : PBCodable <NSCopying>
{
    HDCodableCodedQuantity *_codedQuantityValue;
    HDCodableCodedValueCollection *_codedValueCollection;
    HDCodableMedicalCodingList *_dataAbsentReasonCodingsValue;
    HDCodableDateComponents *_dateComponentsValue;
    HDCodableMedicalCodingList *_medicalCodingValue;
    HDCodableMedicalDateInterval *_medicalDateIntervalValue;
    HDCodableMedicalDate *_medicalDateValue;
    HDCodableRatioValue *_ratioValue;
    NSString *_stringValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableMedicalCodingList *dataAbsentReasonCodingsValue; // @synthesize dataAbsentReasonCodingsValue=_dataAbsentReasonCodingsValue;
@property(retain, nonatomic) HDCodableMedicalDateInterval *medicalDateIntervalValue; // @synthesize medicalDateIntervalValue=_medicalDateIntervalValue;
@property(retain, nonatomic) HDCodableMedicalDate *medicalDateValue; // @synthesize medicalDateValue=_medicalDateValue;
@property(retain, nonatomic) HDCodableCodedValueCollection *codedValueCollection; // @synthesize codedValueCollection=_codedValueCollection;
@property(retain, nonatomic) HDCodableMedicalCodingList *medicalCodingValue; // @synthesize medicalCodingValue=_medicalCodingValue;
@property(retain, nonatomic) HDCodableCodedQuantity *codedQuantityValue; // @synthesize codedQuantityValue=_codedQuantityValue;
@property(retain, nonatomic) HDCodableDateComponents *dateComponentsValue; // @synthesize dateComponentsValue=_dateComponentsValue;
@property(retain, nonatomic) HDCodableRatioValue *ratioValue; // @synthesize ratioValue=_ratioValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDataAbsentReasonCodingsValue;
@property(readonly, nonatomic) _Bool hasMedicalDateIntervalValue;
@property(readonly, nonatomic) _Bool hasMedicalDateValue;
@property(readonly, nonatomic) _Bool hasCodedValueCollection;
@property(readonly, nonatomic) _Bool hasMedicalCodingValue;
@property(readonly, nonatomic) _Bool hasCodedQuantityValue;
@property(readonly, nonatomic) _Bool hasDateComponentsValue;
@property(readonly, nonatomic) _Bool hasRatioValue;
@property(readonly, nonatomic) _Bool hasStringValue;

@end
