//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HTSHTTPMessageRequest, NSMutableData, NSString;

@interface HTSHTTPMessageResponse
{
    int _statusCode;
    NSString *_statusDescription;
    NSString *_trackingDescription;
    HTSHTTPMessageRequest *_request;
    NSMutableData *_serializedData;
    double _sendTime;
    unsigned long long _written;
}

@property(nonatomic) unsigned long long written; // @synthesize written=_written;
@property(nonatomic) double sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSMutableData *serializedData; // @synthesize serializedData=_serializedData;
@property(retain, nonatomic) HTSHTTPMessageRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *trackingDescription; // @synthesize trackingDescription=_trackingDescription;
@property(copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (struct __CFHTTPMessage *)copyMessage;
- (void)dealloc;

@end
