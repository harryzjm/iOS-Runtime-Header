//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy
{
    NSArray *_overrides;
    CDUnknownBlockType _noSuitableModuleFoundHandler;
    unsigned long long _currentIndex;
    NSInvocation *_invocation;
}

+ (void)removeOverride:(id)arg1;
+ (void)addOverride:(id)arg1;
+ (id)overrideDirectoryURL;
+ (id)allOverrides;
+ (id)newIteratorWithNotFoundHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)finish;
- (void)callNextOverrides;
- (id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(CDUnknownBlockType)arg2;

@end
