//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSignedClinicalDataRecord, NSArray, NSMutableDictionary;

@interface HKSignedClinicalDataDetailDataProvider : NSObject
{
    HKSignedClinicalDataRecord *_record;
    NSArray *_medicalRecords;
    NSMutableDictionary *_displayItems;
    NSMutableDictionary *_sectionHeaders;
    NSMutableDictionary *_sectionFooters;
    long long _sectionIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) NSMutableDictionary *sectionFooters; // @synthesize sectionFooters=_sectionFooters;
@property(retain, nonatomic) NSMutableDictionary *sectionHeaders; // @synthesize sectionHeaders=_sectionHeaders;
@property(retain, nonatomic) NSMutableDictionary *displayItems; // @synthesize displayItems=_displayItems;
@property(retain, nonatomic) NSArray *medicalRecords; // @synthesize medicalRecords=_medicalRecords;
@property(retain, nonatomic) HKSignedClinicalDataRecord *record; // @synthesize record=_record;
- (id)expiresItem;
- (id)issuedItem;
- (id)statusItem;
- (id)sourceItem;
- (void)createVerificationItems;
- (id)valueItemWithTestResult:(id)arg1;
- (id)statusItemWithMedicalRecord:(id)arg1;
- (id)recordItemWithMedicalRecord:(id)arg1;
- (void)createRecordSections;
- (id)birthSexItem;
- (id)ethnicityItem;
- (id)raceItem;
- (id)maritalStatusItem;
- (id)addressesItem;
- (id)phoneNumbersItem;
- (id)emailAddressesItem;
- (id)genderItem;
- (id)birthdayItem;
- (id)nameItem;
- (void)createPersonalInfoItems;
- (void)createDisplayItems;
- (id)displayItemForSection:(long long)arg1 row:(long long)arg2;
- (id)footerForSection:(long long)arg1;
- (id)headerForSection:(long long)arg1;
- (long long)numberOfRowsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithSignedRecord:(id)arg1 medicalRecords:(id)arg2;

@end
