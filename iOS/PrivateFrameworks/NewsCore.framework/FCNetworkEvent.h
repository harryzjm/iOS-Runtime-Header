//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL;

@interface FCNetworkEvent : NSObject <NSCopying>
{
    int _type;
    NSURL *_URL;
    NSString *_requestUUID;
    NSString *_operationID;
    double _startTime;
    NSDictionary *_w3cNavigationTiming;
    unsigned long long _requestSize;
    unsigned long long _responseSize;
    NSString *_responseMIMEType;
    unsigned long long _HTTPStatusCode;
    NSString *_HTTPMethod;
    NSDictionary *_HTTPResponseHeaders;
    NSString *_containerName;
    NSError *_error;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(copy, nonatomic) NSDictionary *HTTPResponseHeaders; // @synthesize HTTPResponseHeaders=_HTTPResponseHeaders;
@property(copy, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(nonatomic) unsigned long long HTTPStatusCode; // @synthesize HTTPStatusCode=_HTTPStatusCode;
@property(copy, nonatomic) NSString *responseMIMEType; // @synthesize responseMIMEType=_responseMIMEType;
@property(nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) unsigned long long requestSize; // @synthesize requestSize=_requestSize;
@property(copy, nonatomic) NSDictionary *w3cNavigationTiming; // @synthesize w3cNavigationTiming=_w3cNavigationTiming;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(copy, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) double responseEndTime;
@property(readonly, nonatomic) double responseDuration;
@property(readonly, nonatomic) double requestDuration;
@property(readonly, nonatomic) double connectDuration;
@property(readonly, nonatomic) double dnsDuration;
@property(readonly, nonatomic) double fetchStartTime;
@property(readonly, nonatomic) double totalDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
