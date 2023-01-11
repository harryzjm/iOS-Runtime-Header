//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol RBClientInheritanceManagerDelegate;

@interface RBClientInheritanceManager : NSObject
{
    NSMutableSet *_inheritances;
    NSMutableSet *_queuedGainedInheritances;
    NSMutableSet *_queuedLostInheritances;
    _Bool _awaitingAck;
    struct os_unfair_lock_s _lock;
    id <RBClientInheritanceManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <RBClientInheritanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)setInheritances:(id)arg1;
- (id)init;
- (id)initWithInheritances:(id)arg1 delegate:(id)arg2;

@end
