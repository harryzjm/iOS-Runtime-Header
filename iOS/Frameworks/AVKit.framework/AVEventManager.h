//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVEventManager : NSObject
{
    id _owner;
    NSMutableArray *_actionStorage;
}

- (void).cxx_destruct;
- (void)_ensureActionStorage;
- (void)_addActionIfPossible:(id)arg1;
- (void)sendActionsForEvent:(id)arg1;
- (void)removeAction:(SEL)arg1 withTarget:(id)arg2 forEvent:(id)arg3;
- (void)addAction:(SEL)arg1 withTarget:(id)arg2 forEvent:(id)arg3;
- (void)addAction:(CDUnknownBlockType)arg1 forEvent:(id)arg2;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

