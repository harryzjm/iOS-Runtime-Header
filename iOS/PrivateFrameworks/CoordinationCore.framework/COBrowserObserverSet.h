//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface COBrowserObserverSet : NSObject
{
    struct os_unfair_lock_s _lock;
    NSArray *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

