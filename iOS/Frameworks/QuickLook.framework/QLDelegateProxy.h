//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@interface QLDelegateProxy : NSProxy
{
    id _firstDelegate;
    id _secondDelegate;
}

- (void).cxx_destruct;
@property __weak id secondDelegate; // @synthesize secondDelegate=_secondDelegate;
@property __weak id firstDelegate; // @synthesize firstDelegate=_firstDelegate;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

@end
