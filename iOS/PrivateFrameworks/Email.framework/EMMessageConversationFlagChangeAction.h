//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface EMMessageConversationFlagChangeAction
{
    long long _conversationNotificationLevel;
    long long _originalConversationNotificationLevel;
    long long _conversationID;
}

+ (_Bool)supportsSecureCoding;
@property long long conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, nonatomic) long long originalConversationNotificationLevel; // @synthesize originalConversationNotificationLevel=_originalConversationNotificationLevel;
@property(readonly, nonatomic) long long conversationNotificationLevel; // @synthesize conversationNotificationLevel=_conversationNotificationLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithConversationID:(long long)arg1 conversationNotificationLevel:(long long)arg2 originalConversationNotificationLevel:(long long)arg3;
- (id)initWithMessage:(id)arg1 conversationNotificationLevel:(long long)arg2;

@end
