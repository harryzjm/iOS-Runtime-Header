//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSDate, NSString, SFAppleIDContactInfo, SFAppleIDIdentity, SFAppleIDValidationRecord;

@interface SFAppleIDAccount : NSObject <NSSecureCoding>
{
    _Bool _dirty;
    _Bool _forceValidation;
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_certificateToken;
    SFAppleIDContactInfo *_contactInfo;
    SFAppleIDIdentity *_identity;
    NSDate *_lastConnectAttemptDate;
    NSDate *_lastValidationDate;
    NSDate *_modificationDate;
    NSDate *_nextCertificateFetchDate;
    NSDate *_nextConnectionDate;
    NSDate *_nextValidationDate;
    SFAppleIDValidationRecord *_validationRecord;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFAppleIDValidationRecord *validationRecord; // @synthesize validationRecord=_validationRecord;
@property(retain, nonatomic) NSDate *nextValidationDate; // @synthesize nextValidationDate=_nextValidationDate;
@property(retain, nonatomic) NSDate *nextConnectionDate; // @synthesize nextConnectionDate=_nextConnectionDate;
@property(retain, nonatomic) NSDate *nextCertificateFetchDate; // @synthesize nextCertificateFetchDate=_nextCertificateFetchDate;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSDate *lastValidationDate; // @synthesize lastValidationDate=_lastValidationDate;
@property(retain, nonatomic) NSDate *lastConnectAttemptDate; // @synthesize lastConnectAttemptDate=_lastConnectAttemptDate;
@property(retain, nonatomic) SFAppleIDIdentity *identity; // @synthesize identity=_identity;
@property(nonatomic) _Bool forceValidation; // @synthesize forceValidation=_forceValidation;
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) SFAppleIDContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) NSString *certificateToken; // @synthesize certificateToken=_certificateToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAppleID:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

