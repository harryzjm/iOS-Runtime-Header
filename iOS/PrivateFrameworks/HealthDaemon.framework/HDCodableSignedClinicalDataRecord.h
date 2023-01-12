//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalRecord, HDCodableSignedClinicalDataItemList, HDCodableSignedClinicalDataSubject, HDCodableStringList, NSData, NSString;

@interface HDCodableSignedClinicalDataRecord : PBCodable <HDDecoding, NSCopying>
{
    double _expirationDate;
    double _issuedDate;
    double _relevantDate;
    long long _signatureStatus;
    HDCodableStringList *_credentialTypes;
    NSData *_dataValue;
    NSString *_issuerIdentifier;
    HDCodableSignedClinicalDataItemList *_items;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableSignedClinicalDataSubject *_subject;
    struct {
        unsigned int expirationDate:1;
        unsigned int issuedDate:1;
        unsigned int relevantDate:1;
        unsigned int signatureStatus:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) HDCodableSignedClinicalDataItemList *items; // @synthesize items=_items;
@property(retain, nonatomic) HDCodableSignedClinicalDataSubject *subject; // @synthesize subject=_subject;
@property(nonatomic) long long signatureStatus; // @synthesize signatureStatus=_signatureStatus;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) double relevantDate; // @synthesize relevantDate=_relevantDate;
@property(nonatomic) double issuedDate; // @synthesize issuedDate=_issuedDate;
@property(retain, nonatomic) NSString *issuerIdentifier; // @synthesize issuerIdentifier=_issuerIdentifier;
@property(retain, nonatomic) HDCodableStringList *credentialTypes; // @synthesize credentialTypes=_credentialTypes;
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
@property(readonly, nonatomic) _Bool hasDataValue;
@property(readonly, nonatomic) _Bool hasItems;
@property(readonly, nonatomic) _Bool hasSubject;
@property(nonatomic) _Bool hasSignatureStatus;
@property(nonatomic) _Bool hasExpirationDate;
@property(nonatomic) _Bool hasRelevantDate;
@property(nonatomic) _Bool hasIssuedDate;
@property(readonly, nonatomic) _Bool hasIssuerIdentifier;
@property(readonly, nonatomic) _Bool hasCredentialTypes;
@property(readonly, nonatomic) _Bool hasMedicalRecord;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
