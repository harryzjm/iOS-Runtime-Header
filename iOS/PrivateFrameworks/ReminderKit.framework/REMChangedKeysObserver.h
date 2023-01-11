//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSSet;

@interface REMChangedKeysObserver : NSObject
{
    NSObject *_target;
    NSArray *_keysToObserve;
    NSMutableSet *_mutableChangedKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *mutableChangedKeys; // @synthesize mutableChangedKeys=_mutableChangedKeys;
@property(retain, nonatomic) NSArray *keysToObserve; // @synthesize keysToObserve=_keysToObserve;
@property(readonly, nonatomic) NSObject *target; // @synthesize target=_target;
@property(readonly, nonatomic) NSSet *changedKeys;
- (void)keyDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 keysToObserve:(id)arg2 includeInitial:(_Bool)arg3;

@end
