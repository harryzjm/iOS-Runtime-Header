//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSMutableArray, Protocol;
@protocol SFQueueingServiceViewControllerProxyDelegate;

__attribute__((visibility("hidden")))
@interface SFQueueingServiceViewControllerProxy : NSProxy
{
    NSMutableArray *_queuedInvocations;
    Protocol *_protocol;
    id _target;
    id <SFQueueingServiceViewControllerProxyDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SFQueueingServiceViewControllerProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1;

@end
