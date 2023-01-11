//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock;

@interface ISDelegateProxy : NSObject
{
    id _delegate;
    NSLock *_lock;
    _Bool _shouldMessageMainThread;
}

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setShouldMessageMainThread:(_Bool)arg1;
- (void)sendInvocationToDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end
