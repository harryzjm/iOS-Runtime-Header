//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsSettings/NSCopying-Protocol.h>
#import <UserNotificationsSettings/NSSecureCoding-Protocol.h>

@class UNNotificationSettings, UNNotificationTopic;

@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding>
{
    UNNotificationTopic *_topic;
    UNNotificationSettings *_topicSettings;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UNNotificationSettings *topicSettings; // @synthesize topicSettings=_topicSettings;
@property(readonly, copy, nonatomic) UNNotificationTopic *topic; // @synthesize topic=_topic;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithTopic:(id)arg1 settings:(id)arg2;

@end
