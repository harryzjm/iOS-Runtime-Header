//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString, NSURLRequest, NSURLResponse;

@interface GEONSURLSessionTaskState
{
    NSString *_taskClassName;
    unsigned long long _taskIdentifier;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NSString *_taskDescription;
    long long _state;
    NSError *_error;
    float _priority;
}

+ (id)stateWithTask:(id)arg1;
+ (const char *)decoderType;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

