//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ROCKit/NSObject-Protocol.h>

@class NSMethodSignature, NSObject;
@protocol OS_dispatch_queue;

@protocol ROCKInvocationInterface <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *invocationQueue;
@property(readonly, nonatomic) _Bool argumentsRetained;
@property(nonatomic) SEL selector;
@property(nonatomic) id target;
@property(readonly, nonatomic) NSMethodSignature *methodSignature;
- (void)retainArguments;
- (void)invokeWithTarget:(id)arg1;
- (void)invoke;
- (void)setArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)getArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)setReturnValue:(void *)arg1;
- (void)getReturnValue:(void *)arg1;
@end

