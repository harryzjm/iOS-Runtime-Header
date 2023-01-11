//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString, NSURL, UNNotificationAttachmentOptions;

@interface UNNotificationAttachment : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSURL *_URL;
    NSString *_type;
    UNNotificationAttachmentOptions *_options;
}

+ (_Bool)supportsSecureCoding;
+ (id)attachmentWithIdentifier:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UNNotificationAttachmentOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) unsigned long long family; // @dynamic family;
- (id)initWithIdentifier:(id)arg1 family:(unsigned long long)arg2 URL:(id)arg3 type:(id)arg4 options:(id)arg5;
- (id)initWithIdentifier:(id)arg1 URL:(id)arg2 type:(id)arg3 options:(id)arg4;
- (id)init;

@end
