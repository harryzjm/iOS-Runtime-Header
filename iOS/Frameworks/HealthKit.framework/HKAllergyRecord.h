//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKAllergyRecordType, HKConcept, HKMedicalCoding, HKMedicalDate, NSArray, NSLocale, NSString, NSUUID;

@interface HKAllergyRecord <HKConceptIndexable, NSSecureCoding, NSCopying>
{
    NSArray *_allergyCodings;
    HKMedicalDate *_onsetDate;
    NSString *_asserter;
    NSArray *_reactions;
    HKMedicalCoding *_criticalityCoding;
    HKMedicalDate *_lastOccurenceDate;
    HKMedicalDate *_recordedDate;
    HKMedicalCoding *_statusCoding;
    HKConcept *_allergy;
    HKConcept *_criticality;
    HKConcept *_status;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)_newAllergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 allergyCodings:(id)arg13 onsetDate:(id)arg14 asserter:(id)arg15 reactions:(id)arg16 criticalityCoding:(id)arg17 lastOccurenceDate:(id)arg18 recordedDate:(id)arg19 statusCoding:(id)arg20 config:(CDUnknownBlockType)arg21;
+ (id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 allergyCodings:(id)arg13 onsetDate:(id)arg14 asserter:(id)arg15 reactions:(id)arg16 criticalityCoding:(id)arg17 lastOccurenceDate:(id)arg18 recordedDate:(id)arg19 statusCoding:(id)arg20;
+ (id)defaultDisplayString;
+ (id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 allergyCodings:(id)arg12 onsetDate:(id)arg13 asserter:(id)arg14 reactions:(id)arg15 criticalityCoding:(id)arg16 lastOccurenceDate:(id)arg17 recordedDate:(id)arg18 statusCoding:(id)arg19;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)indexableConceptKeyPaths;
- (void).cxx_destruct;
@property(readonly, copy) HKAllergyRecordType *allergyRecordType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;
- (void)_setStatus:(id)arg1;
@property(readonly, copy) HKConcept *status;
- (void)_setCriticality:(id)arg1;
@property(readonly, copy) HKConcept *criticality;
- (void)_setAllergy:(id)arg1;
@property(readonly, copy) HKConcept *allergy;
- (void)_setStatusCoding:(id)arg1;
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setRecordedDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *recordedDate;
- (void)_setLastOccurenceDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *lastOccurenceDate;
- (void)_setCriticalityCoding:(id)arg1;
@property(readonly, copy) HKMedicalCoding *criticalityCoding;
- (void)_setReactions:(id)arg1;
@property(readonly, copy) NSArray *reactions;
- (void)_setAsserter:(id)arg1;
@property(readonly, copy) NSString *asserter;
- (void)_setOnsetDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *onsetDate;
- (void)_setAllergyCodings:(id)arg1;
@property(readonly, copy) NSArray *allergyCodings;
- (id)statusCodingCollection;
- (id)criticalityCodingCollection;
- (id)allergyCodingsCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)medicalRecordCodings;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly) NSUUID *UUID;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly) Class superclass;

@end
