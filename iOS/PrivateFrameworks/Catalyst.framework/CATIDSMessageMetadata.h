//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface CATIDSMessageMetadata : NSObject
{
    NSUUID *_messageIdentifier;
    long long _messageType;
    unsigned long long _messagingVersion;
}

+ (id)instanceWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long messagingVersion; // @synthesize messagingVersion=_messagingVersion;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithMessageType:(long long)arg1;
- (id)initWithMessageIdentifier:(id)arg1 messageType:(long long)arg2 messagingVersion:(long long)arg3;

@end

