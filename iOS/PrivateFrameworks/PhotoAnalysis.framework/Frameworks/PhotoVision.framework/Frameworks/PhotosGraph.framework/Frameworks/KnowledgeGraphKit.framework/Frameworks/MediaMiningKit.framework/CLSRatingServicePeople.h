//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLSRatingServicePeople
{
    float _contactCountThreshold;
    float _relationshipCountThreshold;
    float _familyCountThreshold;
    float _coworkerCountThreshold;
    float _homeAddressCountThreshold;
    float _workAddressCountThreshold;
    float _birthdayCountThreshold;
    float _companyCountThreshold;
    float _facebookCountThreshold;
    float _emailAddressCountThreshold;
    float _relationshipCountRelationshipsThreshold;
    float _homeAddressCountRelationshipsThreshold;
    float _workAddressCountRelationshipsThreshold;
    float _birthdayCountRelationshipsThreshold;
    float _companyCountRelationshipsThreshold;
    float _facebookCountRelationshipsThreshold;
    float _emailAddressCountRelationshipsThreshold;
}

+ (id)ratingServiceWithDefaultPlistAndRatingServiceContacts:(id)arg1;
- (id)usageRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)localRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)checklistsWithOperation:(id)arg1;
- (void)_setThresholdsWithPlistDictionary:(id)arg1;
- (id)init;
- (id)initWithRatingServiceContacts:(id)arg1 andPlist:(id)arg2;

@end

