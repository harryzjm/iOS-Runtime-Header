//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface EDAMNoteInvitationShareRelationship
{
    NSString *_displayName;
    NSNumber *_recipientIdentityId;
    NSNumber *_privilege;
    NSNumber *_sharerUserId;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *sharerUserId; // @synthesize sharerUserId=_sharerUserId;
@property(retain, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(retain, nonatomic) NSNumber *recipientIdentityId; // @synthesize recipientIdentityId=_recipientIdentityId;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

@end
