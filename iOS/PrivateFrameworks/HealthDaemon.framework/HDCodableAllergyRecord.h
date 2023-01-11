//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableAllergyReactionList, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying>
{
    HDCodableMedicalCodingList *_allergyCodings;
    NSString *_asserter;
    HDCodableMedicalCoding *_criticalityCoding;
    NSData *_lastOccurenceDate;
    HDCodableMedicalRecord *_medicalRecord;
    NSData *_onsetDate;
    HDCodableAllergyReactionList *_reactions;
    NSData *_recordedDate;
    HDCodableMedicalCoding *_statusCoding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property(retain, nonatomic) NSData *recordedDate; // @synthesize recordedDate=_recordedDate;
@property(retain, nonatomic) NSData *lastOccurenceDate; // @synthesize lastOccurenceDate=_lastOccurenceDate;
@property(retain, nonatomic) HDCodableMedicalCoding *criticalityCoding; // @synthesize criticalityCoding=_criticalityCoding;
@property(retain, nonatomic) HDCodableAllergyReactionList *reactions; // @synthesize reactions=_reactions;
@property(retain, nonatomic) NSString *asserter; // @synthesize asserter=_asserter;
@property(retain, nonatomic) NSData *onsetDate; // @synthesize onsetDate=_onsetDate;
@property(retain, nonatomic) HDCodableMedicalCodingList *allergyCodings; // @synthesize allergyCodings=_allergyCodings;
@property(retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasStatusCoding;
@property(readonly, nonatomic) _Bool hasRecordedDate;
@property(readonly, nonatomic) _Bool hasLastOccurenceDate;
@property(readonly, nonatomic) _Bool hasCriticalityCoding;
@property(readonly, nonatomic) _Bool hasReactions;
@property(readonly, nonatomic) _Bool hasAsserter;
@property(readonly, nonatomic) _Bool hasOnsetDate;
@property(readonly, nonatomic) _Bool hasAllergyCodings;
@property(readonly, nonatomic) _Bool hasMedicalRecord;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
