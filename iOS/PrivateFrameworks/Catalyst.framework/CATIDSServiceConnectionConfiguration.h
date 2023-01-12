//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CATIDSServiceConnectionConfiguration : NSObject
{
    long long _maxDataSendSize;
    unsigned long long _keepAliveAttemptCount;
    double _keepAliveCheckinInterval;
    double _invitationAcknowledgeTimeout;
    double _missingItemsCheckinInterval;
    double _messageQueueFlushPromptInterval;
}

@property(nonatomic) double messageQueueFlushPromptInterval; // @synthesize messageQueueFlushPromptInterval=_messageQueueFlushPromptInterval;
@property(nonatomic) double missingItemsCheckinInterval; // @synthesize missingItemsCheckinInterval=_missingItemsCheckinInterval;
@property(nonatomic) double invitationAcknowledgeTimeout; // @synthesize invitationAcknowledgeTimeout=_invitationAcknowledgeTimeout;
@property(nonatomic) double keepAliveCheckinInterval; // @synthesize keepAliveCheckinInterval=_keepAliveCheckinInterval;
@property(nonatomic) unsigned long long keepAliveAttemptCount; // @synthesize keepAliveAttemptCount=_keepAliveAttemptCount;
@property(nonatomic) long long maxDataSendSize; // @synthesize maxDataSendSize=_maxDataSendSize;
- (id)init;

@end
