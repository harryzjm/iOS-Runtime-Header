//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COMessageChannelRequest, NSString;

__attribute__((visibility("hidden")))
@interface COMessageChannelRequestInfo : NSObject
{
    unsigned int _requestID;
    long long _requestType;
    unsigned long long _expectedRecipients;
    unsigned long long _receivedResponses;
    COMessageChannelRequest *_request;
    NSString *_destinationInfo;
    unsigned long long _messageSize;
    CDUnknownBlockType _recipientCallback;
    CDUnknownBlockType _responseCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseCallback; // @synthesize responseCallback=_responseCallback;
@property(copy, nonatomic) CDUnknownBlockType recipientCallback; // @synthesize recipientCallback=_recipientCallback;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(copy, nonatomic) NSString *destinationInfo; // @synthesize destinationInfo=_destinationInfo;
@property(retain, nonatomic) COMessageChannelRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long receivedResponses; // @synthesize receivedResponses=_receivedResponses;
@property(nonatomic) unsigned long long expectedRecipients; // @synthesize expectedRecipients=_expectedRecipients;
@property(readonly, nonatomic) unsigned int requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (id)initWithRequestID:(unsigned int)arg1 type:(long long)arg2 request:(id)arg3;

@end

