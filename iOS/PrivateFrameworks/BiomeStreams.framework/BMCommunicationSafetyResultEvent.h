//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/BMStreamValidating-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString, NSURL;

@interface BMCommunicationSafetyResultEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    unsigned int _contentCount;
    double _absoluteTimestamp;
    NSString *_childID;
    NSString *_deviceID;
    NSString *_sourceBundleID;
    unsigned long long _eventDirection;
    unsigned long long _eventType;
    unsigned long long _contentType;
    NSArray *_contactHandles;
    NSString *_contentID;
    NSString *_conversationID;
    NSString *_senderHandle;
    NSURL *_contentURL;
    NSURL *_conversationURL;
    NSData *_imageData;
}

+ (_Bool)supportsSecureCoding;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, copy, nonatomic) NSURL *conversationURL; // @synthesize conversationURL=_conversationURL;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, copy, nonatomic) NSArray *contactHandles; // @synthesize contactHandles=_contactHandles;
@property(nonatomic) unsigned int contentCount; // @synthesize contentCount=_contentCount;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) unsigned long long eventDirection; // @synthesize eventDirection=_eventDirection;
@property(readonly, copy, nonatomic) NSString *sourceBundleID; // @synthesize sourceBundleID=_sourceBundleID;
@property(readonly, copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, copy, nonatomic) NSString *childID; // @synthesize childID=_childID;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)proto;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)encodeAsProto;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)serialize;
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithChildID:(id)arg1 deviceID:(id)arg2 sourceBundleID:(id)arg3 absoluteTimeStamp:(double)arg4 eventDirection:(unsigned long long)arg5 eventType:(unsigned long long)arg6 contentType:(unsigned long long)arg7 contactHandles:(id)arg8 contentID:(id)arg9 conversationID:(id)arg10 imageData:(id)arg11 senderHandle:(id)arg12 contentURL:(id)arg13 conversationURL:(id)arg14;
- (id)initWithChildID:(id)arg1 deviceID:(id)arg2 sourceBundleID:(id)arg3 absoluteTimeStamp:(double)arg4 eventDirection:(unsigned long long)arg5 eventType:(unsigned long long)arg6 contentType:(unsigned long long)arg7 contactHandles:(id)arg8 contentID:(id)arg9 conversationID:(id)arg10 imageData:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
