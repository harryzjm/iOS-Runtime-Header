//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/ANCompanionMessage-Protocol.h>
#import <Announce/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ANParticipant : NSObject <ANCompanionMessage, NSSecureCoding>
{
    _Bool _isAccessory;
    _Bool _isEndpoint;
    NSString *_name;
    NSString *_rapportID;
    NSString *_idsID;
    NSString *_homeKitID;
    NSString *_homeKitUserID;
    NSString *_userID;
}

+ (_Bool)supportsSecureCoding;
+ (id)participantsFromUsersInHome:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool isEndpoint; // @synthesize isEndpoint=_isEndpoint;
@property(nonatomic) _Bool isAccessory; // @synthesize isAccessory=_isAccessory;
@property(retain, nonatomic) NSString *homeKitUserID; // @synthesize homeKitUserID=_homeKitUserID;
@property(retain, nonatomic) NSString *homeKitID; // @synthesize homeKitID=_homeKitID;
@property(retain, nonatomic) NSString *idsID; // @synthesize idsID=_idsID;
@property(retain, nonatomic) NSString *rapportID; // @synthesize rapportID=_rapportID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)messageForCompanion;
- (id)message;
- (id)initWithMessage:(id)arg1;
- (void)clearIdentifiers;
- (id)copy;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *info;
- (id)initWithSender:(id)arg1;
- (void)populateWithUser:(id)arg1 andAccessory:(id)arg2;
- (void)populateWithUser:(id)arg1;
- (void)populateWithAccessory:(id)arg1;
- (id)initWithUser:(id)arg1 andAccessory:(id)arg2;
- (id)initWithUser:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (void)populateWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
