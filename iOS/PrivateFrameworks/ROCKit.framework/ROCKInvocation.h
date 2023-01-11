//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInvocation.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ROCKInvocation : NSInvocation
{
    NSObject<OS_dispatch_queue> *_invocationQueue;
    CDUnknownBlockType _returnHandler;
    CDUnknownBlockType _autoreleasingHandler;
}

+ (id)invocationWithMethodSignature:(id)arg1 invocationQueue:(id)arg2 returnHandler:(CDUnknownBlockType)arg3 autoreleasingHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType autoreleasingHandler; // @synthesize autoreleasingHandler=_autoreleasingHandler;
@property(copy, nonatomic) CDUnknownBlockType returnHandler; // @synthesize returnHandler=_returnHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *invocationQueue; // @synthesize invocationQueue=_invocationQueue;
- (void).cxx_destruct;
- (void)invoke;

@end
