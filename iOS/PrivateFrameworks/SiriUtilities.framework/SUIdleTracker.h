//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SUIdleTracker : NSObject
{
    MISSING_TYPE *name;
    MISSING_TYPE *queue;
    MISSING_TYPE *timeout;
    MISSING_TYPE *timeoutAction;
    MISSING_TYPE *timer;
    MISSING_TYPE *refs;
    MISSING_TYPE *lock;
}

- (void).cxx_destruct;
- (id)init;
- (id)trackWithName:(id)arg1;
- (id)track;
@property(nonatomic, readonly) long long count;
@property(nonatomic, readonly) _Bool idle;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2 timeoutSeconds:(long long)arg3 timeoutAction:(CDUnknownBlockType)arg4;

@end
