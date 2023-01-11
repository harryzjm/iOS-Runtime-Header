//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APSIncomingMessageCheckpointTrace, NSData, NSDate;

@interface APSIncomingMessage
{
    APSIncomingMessageCheckpointTrace *_checkpointTrace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) APSIncomingMessageCheckpointTrace *checkpointTrace; // @synthesize checkpointTrace=_checkpointTrace;
@property(nonatomic) unsigned int pushFlags;
@property(nonatomic) unsigned long long pushType;
@property(copy, nonatomic) NSData *tracingUUID;
@property(nonatomic, getter=isTracingEnabled) _Bool tracingEnabled;
@property(nonatomic) long long priority;
@property(nonatomic, getter=wasLastMessageFromStorage) _Bool lastMessageFromStorage;
@property(nonatomic, getter=wasFromStorage) _Bool fromStorage;
@property(copy, nonatomic) NSData *token;
@property(copy, nonatomic) NSDate *timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
