//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
+ (id)_gkInvocationWithBlock:(id)arg1;
- (void)_gkInvokeOnceWithTarget:(id)arg1;
- (void)_gkInvokeOnce;
- (void)_gkClearTarget;
- (void)_gkPrepareForCallWithError:(id)arg1;
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;
- (id)_gkReplyHandlerInvocation;
- (void)_gkClearCopiedArguments;
- (void)_gkCopyArguments;
- (_Bool)_gkHasReplyBlock;
@end

