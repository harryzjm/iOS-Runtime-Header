//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class TSUWeakReference;

@interface TSKCountedObserver : NSObject
{
    TSUWeakReference *mWeakObserver;
    unsigned long long mCount;
}

- (unsigned long long)decrementCount;
- (unsigned long long)incrementCount;
- (id)observer;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;

@end

