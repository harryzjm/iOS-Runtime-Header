//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSString;

@interface NSPDNSPacket : NSObject
{
    _Bool _isAuthoritativeAnswer;
    _Bool _isTruncated;
    _Bool _isRecursionDesired;
    _Bool _isRecursionAvailable;
    long long _identifier;
    NSDate *_timestamp;
    long long _messageType;
    long long _opCode;
    long long _responseCode;
    NSArray *_queries;
    NSArray *_answers;
    NSArray *_authorities;
    NSArray *_additionalRecords;
    NSData *_data;
}

@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) NSArray *additionalRecords; // @synthesize additionalRecords=_additionalRecords;
@property(readonly) NSArray *authorities; // @synthesize authorities=_authorities;
@property(readonly) NSArray *answers; // @synthesize answers=_answers;
@property(readonly) NSArray *queries; // @synthesize queries=_queries;
@property(readonly) long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly) _Bool isRecursionAvailable; // @synthesize isRecursionAvailable=_isRecursionAvailable;
@property(readonly) _Bool isRecursionDesired; // @synthesize isRecursionDesired=_isRecursionDesired;
@property(readonly) _Bool isTruncated; // @synthesize isTruncated=_isTruncated;
@property(readonly) _Bool isAuthoritativeAnswer; // @synthesize isAuthoritativeAnswer=_isAuthoritativeAnswer;
@property(readonly) long long opCode; // @synthesize opCode=_opCode;
@property(readonly) long long messageType; // @synthesize messageType=_messageType;
@property(readonly) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) NSString *responseCodeString;
- (id)initFromData:(id)arg1;

@end
