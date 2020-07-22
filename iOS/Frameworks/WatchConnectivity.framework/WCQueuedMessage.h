//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, WCMessage;

@interface WCQueuedMessage : NSObject
{
    WCMessage *_message;
    CDUnknownBlockType _completionHandler;
    NSDate *_creationDate;
    long long _retryCount;
}

@property long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) WCMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

