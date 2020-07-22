//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol OS_dispatch_queue;

@interface RPPairingUIController : NSObject
{
    UIViewController *_presentingViewController;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _retryHandler;
    CDUnknownBlockType _tryPINHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType tryPINHandler; // @synthesize tryPINHandler=_tryPINHandler;
@property(copy, nonatomic) CDUnknownBlockType retryHandler; // @synthesize retryHandler=_retryHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)promptWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)pairingError:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (id)init;

@end

