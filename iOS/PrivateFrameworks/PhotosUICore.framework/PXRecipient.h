//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXCMMInvitationParticipant-Protocol.h>

@class CNContact, NSSet, NSString, PXRecipientTransport;

@interface PXRecipient : NSObject <PXCMMInvitationParticipant, NSCopying>
{
    NSString *_firstName;
    NSString *_lastName;
    NSSet *_allEmails;
    NSSet *_allPhones;
    NSSet *_unformattedAllPhones;
    NSString *_phoneNumberString;
    NSString *_emailAddressString;
    PXRecipientTransport *_suggestedTransport;
    NSString *_displayName;
    CNContact *_contact;
}

+ (id)displayNameForAddress:(id)arg1 recipientKind:(long long)arg2;
+ (id)_contactForAddress:(id)arg1 recipientKind:(long long)arg2;
+ (id)new;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) PXRecipientTransport *suggestedTransport; // @synthesize suggestedTransport=_suggestedTransport;
@property(readonly, copy, nonatomic) NSString *emailAddressString; // @synthesize emailAddressString=_emailAddressString;
@property(readonly, copy, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
@property(readonly, nonatomic) NSSet *unformattedAllPhones; // @synthesize unformattedAllPhones=_unformattedAllPhones;
@property(readonly, nonatomic) NSSet *allPhones; // @synthesize allPhones=_allPhones;
@property(readonly, nonatomic) NSSet *allEmails; // @synthesize allEmails=_allEmails;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContact:(id)arg1 address:(id)arg2 recipientKind:(long long)arg3;
- (id)initWithAddress:(id)arg1 recipientKind:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

