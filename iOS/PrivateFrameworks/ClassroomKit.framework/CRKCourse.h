//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class CRKUser, DMFControlGroupIdentifier, NSDate, NSDictionary, NSSet, NSString;

@interface CRKCourse : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _requestingUnenroll;
    _Bool _studentCredentialsAreValid;
    _Bool _mustRequestUnenroll;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_courseName;
    NSString *_courseDescription;
    unsigned long long _courseMascotType;
    unsigned long long _courseColorType;
    CRKUser *_courseUser;
    NSDictionary *_instructorsByIdentifier;
    unsigned long long _type;
    NSDate *_automaticRemovalDate;
    NSSet *_trustedCertificatePersistentIds;
    NSSet *_validTrustedCertificatePersistentIds;
}

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingExpired;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)new;
- (void).cxx_destruct;
@property(nonatomic) _Bool mustRequestUnenroll; // @synthesize mustRequestUnenroll=_mustRequestUnenroll;
@property(retain, nonatomic) NSSet *validTrustedCertificatePersistentIds; // @synthesize validTrustedCertificatePersistentIds=_validTrustedCertificatePersistentIds;
@property(retain, nonatomic) NSSet *trustedCertificatePersistentIds; // @synthesize trustedCertificatePersistentIds=_trustedCertificatePersistentIds;
@property(nonatomic) _Bool studentCredentialsAreValid; // @synthesize studentCredentialsAreValid=_studentCredentialsAreValid;
@property(retain, nonatomic) NSDate *automaticRemovalDate; // @synthesize automaticRemovalDate=_automaticRemovalDate;
@property(nonatomic, getter=isRequestingUnenroll) _Bool requestingUnenroll; // @synthesize requestingUnenroll=_requestingUnenroll;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *instructorsByIdentifier; // @synthesize instructorsByIdentifier=_instructorsByIdentifier;
@property(retain, nonatomic) CRKUser *courseUser; // @synthesize courseUser=_courseUser;
@property(nonatomic) unsigned long long courseColorType; // @synthesize courseColorType=_courseColorType;
@property(nonatomic) unsigned long long courseMascotType; // @synthesize courseMascotType=_courseMascotType;
@property(copy, nonatomic) NSString *courseDescription; // @synthesize courseDescription=_courseDescription;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDeeplyEqual:(id)arg1;
- (_Bool)isEqualToCourse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (void)setManaged:(_Bool)arg1;
@property(readonly, nonatomic) _Bool allowsUnenroll;
@property(readonly, nonatomic, getter=isManaged) _Bool managed;
- (id)initWithIdentifier:(id)arg1 managed:(_Bool)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

@end
