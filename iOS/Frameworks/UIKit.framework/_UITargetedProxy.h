//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface _UITargetedProxy : NSProxy
{
    id __target;
}

+ (id)proxyWithTarget:(id)arg1;
@property(retain, nonatomic, setter=_setTarget:) id _target; // @synthesize _target=__target;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

