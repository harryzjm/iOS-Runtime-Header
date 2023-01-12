//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTLogAspect, DVTSigningCertificateSerialNumber, DVTSigningCertificateValidity, NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, SFCertificateData;

@interface DVTSigningCertificate : NSObject
{
    SFCertificateData *_certificateData;
    NSNumber *_isSelfSigned;
    NSNumber *_isExpired;
    NSNumber *_isSubmissionCertificate;
    NSNumber *_isManaged;
    DVTLogAspect *_logAspect;
    NSSet *_certificateKinds;
    NSString *_trimmedName;
    NSString *_commonName;
    NSString *_portalTeamID;
    NSString *_portalTeamName;
    NSString *_portalMemberID;
    NSString *_portalTeamMemberID;
    NSDate *_issueDate;
    NSDate *_expirationDate;
    NSString *_sha1Hash;
    DVTSigningCertificateSerialNumber *_serialNumber;
    NSDictionary *_certificateValues;
    DVTSigningCertificateValidity *_validity;
    id _underlyingType;
    NSArray *_keychainSearchList;
}

+ (id)createCSR:(id)arg1 email:(id)arg2 error:(id *)arg3;
+ (id)_dateFromCertificateValues:(id)arg1 forOID:(id)arg2;
+ (id)serialNumberFromCertificate:(struct __SecCertificate *)arg1;
+ (id)issueDateForCertificate:(struct __SecCertificate *)arg1;
+ (id)iOS_certificateKindsFromCertificate:(struct __SecCertificate *)arg1;
+ (id)certificateKindsFromCertificateValues:(id)arg1;
+ (id)certificateKindsFromCertificate:(struct __SecCertificate *)arg1;
- (void).cxx_destruct;
@property(readonly) NSArray *keychainSearchList; // @synthesize keychainSearchList=_keychainSearchList;
@property(readonly) id underlyingType; // @synthesize underlyingType=_underlyingType;
@property(readonly) DVTSigningCertificateValidity *validity; // @synthesize validity=_validity;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
- (_Bool)writeToFile:(id)arg1 error:(id *)arg2;
- (_Bool)repairTrustSettings:(id *)arg1;
- (_Bool)deleteFromKeychain:(id *)arg1;
- (id)p12DataWithPassword:(id)arg1 error:(id *)arg2;
- (id)_valueInSubjectNameSectionForOID:(id)arg1;
@property(readonly) NSDictionary *certificateValues; // @synthesize certificateValues=_certificateValues;
@property(readonly) _Bool isSelfSigned;
- (id)defaultDesignatedRequirementsForIdentifier:(id)arg1;
- (id)defaultDesignatedRequirements;
@property(readonly) DVTSigningCertificateSerialNumber *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly) NSString *sha1Hash; // @synthesize sha1Hash=_sha1Hash;
@property(readonly, getter=isForServer) _Bool forServer;
@property(readonly, getter=isExpired) _Bool expired;
@property(readonly) NSDate *issueDate; // @synthesize issueDate=_issueDate;
@property(readonly, getter=isIdentity) _Bool identity;
@property(readonly) NSString *portalMemberID; // @synthesize portalMemberID=_portalMemberID;
@property(readonly) NSString *portalTeamName; // @synthesize portalTeamName=_portalTeamName;
@property(readonly) NSString *portalTeamID; // @synthesize portalTeamID=_portalTeamID;
- (_Bool)isFromPortal;
@property(readonly) NSString *portalTeamMemberID; // @synthesize portalTeamMemberID=_portalTeamMemberID;
@property(readonly) NSString *commonName; // @synthesize commonName=_commonName;
@property(readonly) NSString *trimmedName; // @synthesize trimmedName=_trimmedName;
@property(readonly) _Bool isSubmissionCertificate;
@property(readonly) _Bool isManaged;
@property(readonly) NSSet *certificateKinds; // @synthesize certificateKinds=_certificateKinds;
- (id)copyWithClearedCaches;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct __SecCertificate *)certificateRef;
- (id)description;
- (id)initWithUnderlyingType:(id)arg1 logAspect:(id)arg2;
- (id)initWithUnderlyingType:(id)arg1 keychainSearchList:(id)arg2 logAspect:(id)arg3;

@end
