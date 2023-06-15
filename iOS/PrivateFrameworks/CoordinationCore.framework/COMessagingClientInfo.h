//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COCoordinationServiceClient, NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface COMessagingClientInfo : NSObject
{
    NSString *_topic;
    id _cluster;
    NSSet *_handledClasses;
    CDUnknownBlockType _completionHandler;
    COCoordinationServiceClient *_client;
    NSMutableDictionary *_sessions;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(readonly, nonatomic) __weak COCoordinationServiceClient *client; // @synthesize client=_client;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) NSSet *handledClasses; // @synthesize handledClasses=_handledClasses;
@property(readonly, copy, nonatomic) id cluster; // @synthesize cluster=_cluster;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)initWithTopic:(id)arg1 cluster:(id)arg2 handledClasses:(id)arg3 client:(id)arg4 activateCompletionHanlder:(CDUnknownBlockType)arg5;

@end

