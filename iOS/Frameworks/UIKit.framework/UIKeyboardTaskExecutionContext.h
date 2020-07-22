//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIKeyboardTaskQueue;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskExecutionContext : NSObject
{
    UIKeyboardTaskExecutionContext *_parentExecutionContext;
    CDUnknownBlockType _continuation;
    id _info;
    CDUnknownBlockType _pendingCompletionBlock;
    UIKeyboardTaskQueue *_executionQueue;
}

@property(readonly, nonatomic) UIKeyboardTaskQueue *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(copy, nonatomic) CDUnknownBlockType pendingCompletionBlock; // @synthesize pendingCompletionBlock=_pendingCompletionBlock;
@property(retain, nonatomic) id info; // @synthesize info=_info;
- (void)transferExecutionToMainThreadWithTask:(CDUnknownBlockType)arg1;
- (void)returnExecutionToParentWithInfo:(id)arg1;
- (void)returnExecutionToParent;
- (id)childWithContinuation:(CDUnknownBlockType)arg1;
- (id)initWithParentContext:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (id)initWithExecutionQueue:(id)arg1;
- (id)init;
- (void)dealloc;

@end

