//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface TRIExcessiveStaleFactorsUsageTimer : NSObject
{
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithNamespaceName:(id)arg1 delayTimeInSeconds:(double)arg2 block:(CDUnknownBlockType)arg3;

@end
