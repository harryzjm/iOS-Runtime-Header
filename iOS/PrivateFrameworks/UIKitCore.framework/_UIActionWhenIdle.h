//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface _UIActionWhenIdle : NSObject
{
    NSInvocation *_invocation;
}

+ (id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void)addObserverToRunLoop;
- (void)invoke;
- (void)invalidate;
- (_Bool)isValid;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end

