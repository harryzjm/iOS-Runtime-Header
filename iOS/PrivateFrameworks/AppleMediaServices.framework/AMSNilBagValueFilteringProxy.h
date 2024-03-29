//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSNilBagValueFilteringProxy : NSProxy
{
    id <AMSBagProtocol> _wrappedBag;
}

+ (id)proxyWithBag:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <AMSBagProtocol> wrappedBag; // @synthesize wrappedBag=_wrappedBag;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_substituteNilIfNeededWithValue:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;
- (id)URLForKey:(id)arg1 account:(id)arg2;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)initWithBag:(id)arg1;

@end

