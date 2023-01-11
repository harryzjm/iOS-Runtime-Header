//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClientLiteClientCommandHandling-Protocol.h>

@protocol OS_dispatch_queue;

@interface AFClientLiteInternal : NSObject <AFClientLiteClientCommandHandling>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _commandHandler;
}

- (void).cxx_destruct;
- (oneway void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 isOneWay:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initAndHandleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 isOneWay:(_Bool)arg3 commandHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

@end
