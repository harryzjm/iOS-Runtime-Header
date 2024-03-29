//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface _DVTFilePathAssoc : NSObject
{
    _DVTFilePathAssoc *next;
    NSString *role;
    _Bool recursiveObserver;
    CDUnknownBlockType block;
    NSObject<OS_dispatch_queue> *dispatchQueue;
    NSOperationQueue *operationQueue;
    id _object;
}

- (void).cxx_destruct;
@property __weak id object; // @synthesize object=_object;
- (id)description;
- (void)dealloc;
- (id)initWithRole:(id)arg1 object:(id)arg2 observingDidChangeRecursively:(_Bool)arg3 onOperationQueue:(id)arg4 block:(CDUnknownBlockType)arg5;
- (id)initWithRole:(id)arg1 object:(id)arg2 observingDidChangeRecursively:(_Bool)arg3 onDispatchQueue:(id)arg4 block:(CDUnknownBlockType)arg5;

@end

