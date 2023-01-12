//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBContact, NSArray, NSString, NSURL;

@interface BBCommunicationContext : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _systemImage;
    _Bool _mentionsCurrentUser;
    _Bool _notifyRecipientAnyway;
    _Bool _replyToCurrentUser;
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_associatedObjectUri;
    NSString *_displayName;
    BBContact *_sender;
    NSArray *_recipients;
    NSURL *_contentURL;
    NSString *_imageName;
    unsigned long long _recipientCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)communicationContextWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 imageName:(id)arg8 systemImage:(_Bool)arg9 mentionsCurrentUser:(_Bool)arg10 notifyRecipientAnyway:(_Bool)arg11 replyToCurrentUser:(_Bool)arg12 recipientCount:(unsigned long long)arg13;
+ (id)communicationContextWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 mentionsCurrentUser:(_Bool)arg8 notifyRecipientAnyway:(_Bool)arg9 replyToCurrentUser:(_Bool)arg10 recipientCount:(unsigned long long)arg11;
+ (id)communicationContextWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long recipientCount; // @synthesize recipientCount=_recipientCount;
@property(readonly, nonatomic, getter=isReplyToCurrentUser) _Bool replyToCurrentUser; // @synthesize replyToCurrentUser=_replyToCurrentUser;
@property(readonly, nonatomic) _Bool notifyRecipientAnyway; // @synthesize notifyRecipientAnyway=_notifyRecipientAnyway;
@property(readonly, nonatomic) _Bool mentionsCurrentUser; // @synthesize mentionsCurrentUser=_mentionsCurrentUser;
@property(readonly, nonatomic) _Bool systemImage; // @synthesize systemImage=_systemImage;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, copy, nonatomic) BBContact *sender; // @synthesize sender=_sender;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *associatedObjectUri; // @synthesize associatedObjectUri=_associatedObjectUri;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 imageName:(id)arg8 systemImage:(_Bool)arg9 mentionsCurrentUser:(_Bool)arg10 notifyRecipientAnyway:(_Bool)arg11 replyToCurrentUser:(_Bool)arg12 recipientCount:(unsigned long long)arg13;

@end
