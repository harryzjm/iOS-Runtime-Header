//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSEnumerator;

@interface MPMiddlewareChain : NSObject
{
    NSEnumerator *_middlewareEnumerator;
}

+ (void)_addBuilderProtocol:(id)arg1;
+ (void)registerReturnType:(const char *)arg1 returnValueBlock:(id)arg2;
+ (id)builderProxyForProtocol:(id)arg1;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithMiddleware:(id)arg1 protocol:(id)arg2;

@end

