//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDSharePCSData
{
    struct _OpaquePCSShareProtection *_publicPCS;
    CKRecordID *_shareID;
    unsigned long long _serviceType;
    NSString *_shareEtag;
    long long _publicPermission;
    long long _myParticipantRole;
    long long _myParticipantPermission;
    struct _OpaquePCSShareProtection *_myParticipantPCS;
    NSData *_myParticipantPCSData;
    NSString *_publicPCSEtag;
    NSData *_publicPCSData;
}

+ (_Bool)supportsSecureCoding;
+ (id)dataWithShareID:(id)arg1 pcsData:(id)arg2;
@property(copy, nonatomic) NSData *publicPCSData; // @synthesize publicPCSData=_publicPCSData;
@property(copy, nonatomic) NSString *publicPCSEtag; // @synthesize publicPCSEtag=_publicPCSEtag;
@property(copy, nonatomic) NSData *myParticipantPCSData; // @synthesize myParticipantPCSData=_myParticipantPCSData;
@property(nonatomic) struct _OpaquePCSShareProtection *myParticipantPCS; // @synthesize myParticipantPCS=_myParticipantPCS;
@property(nonatomic) long long myParticipantPermission; // @synthesize myParticipantPermission=_myParticipantPermission;
@property(nonatomic) long long myParticipantRole; // @synthesize myParticipantRole=_myParticipantRole;
@property(nonatomic) long long publicPermission; // @synthesize publicPermission=_publicPermission;
@property(retain, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property(nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
@property(nonatomic) struct _OpaquePCSShareProtection *publicPCS;
@property(nonatomic) struct _OpaquePCSShareProtection *invitedPCS;
- (void)dealloc;
- (id)initWithShareID:(id)arg1 pcsData:(id)arg2;

@end

