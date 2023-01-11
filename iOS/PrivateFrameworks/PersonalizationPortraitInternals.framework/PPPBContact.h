//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PPPBDateComponents;

@interface PPPBContact : PBCodable <NSCopying>
{
    long long _createdAt;
    PPPBDateComponents *_birthday;
    int _displayNameOrder;
    NSMutableArray *_emailAddresses;
    NSString *_familyName;
    NSString *_givenName;
    NSString *_identifier;
    NSString *_middleName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickname;
    PPPBDateComponents *_nonGregorianBirthday;
    NSString *_organizationName;
    NSMutableArray *_phoneNumbers;
    NSMutableArray *_postalAddresses;
    NSMutableArray *_socialProfiles;
    NSString *_sortingFamilyName;
    NSString *_sortingGivenName;
    struct {
        unsigned int createdAt:1;
        unsigned int displayNameOrder:1;
    } _has;
}

+ (Class)socialProfilesType;
+ (Class)postalAddressesType;
+ (Class)emailAddressesType;
+ (Class)phoneNumbersType;
@property(nonatomic) long long createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSString *sortingFamilyName; // @synthesize sortingFamilyName=_sortingFamilyName;
@property(retain, nonatomic) NSString *sortingGivenName; // @synthesize sortingGivenName=_sortingGivenName;
@property(nonatomic) int displayNameOrder; // @synthesize displayNameOrder=_displayNameOrder;
@property(retain, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(retain, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(retain, nonatomic) NSMutableArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(retain, nonatomic) PPPBDateComponents *nonGregorianBirthday; // @synthesize nonGregorianBirthday=_nonGregorianBirthday;
@property(retain, nonatomic) PPPBDateComponents *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSMutableArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(retain, nonatomic) NSMutableArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) NSMutableArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(nonatomic) _Bool hasCreatedAt;
@property(readonly, nonatomic) _Bool hasSortingFamilyName;
@property(readonly, nonatomic) _Bool hasSortingGivenName;
@property(nonatomic) _Bool hasDisplayNameOrder;
@property(readonly, nonatomic) _Bool hasNameSuffix;
@property(readonly, nonatomic) _Bool hasNamePrefix;
- (id)socialProfilesAtIndex:(unsigned long long)arg1;
- (unsigned long long)socialProfilesCount;
- (void)addSocialProfiles:(id)arg1;
- (void)clearSocialProfiles;
@property(readonly, nonatomic) _Bool hasNonGregorianBirthday;
@property(readonly, nonatomic) _Bool hasBirthday;
@property(readonly, nonatomic) _Bool hasOrganizationName;
- (id)postalAddressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)postalAddressesCount;
- (void)addPostalAddresses:(id)arg1;
- (void)clearPostalAddresses;
- (id)emailAddressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailAddressesCount;
- (void)addEmailAddresses:(id)arg1;
- (void)clearEmailAddresses;
- (id)phoneNumbersAtIndex:(unsigned long long)arg1;
- (unsigned long long)phoneNumbersCount;
- (void)addPhoneNumbers:(id)arg1;
- (void)clearPhoneNumbers;
@property(readonly, nonatomic) _Bool hasNickname;
@property(readonly, nonatomic) _Bool hasFamilyName;
@property(readonly, nonatomic) _Bool hasMiddleName;
@property(readonly, nonatomic) _Bool hasGivenName;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

