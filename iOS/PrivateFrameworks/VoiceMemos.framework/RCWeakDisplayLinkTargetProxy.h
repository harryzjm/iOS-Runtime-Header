//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RCWeakRef;

@interface RCWeakDisplayLinkTargetProxy
{
    RCWeakRef *_weakTarget;
    SEL _weakTargetSelector;
}

- (void)displayLinkFired:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

