//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLSession;

__attribute__((visibility("hidden")))
@interface AMSURLDelegateProxy : NSObject
{
    AMSURLSession *_session;
    id _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak AMSURLSession *session; // @synthesize session=_session;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)invalidate;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

@end

