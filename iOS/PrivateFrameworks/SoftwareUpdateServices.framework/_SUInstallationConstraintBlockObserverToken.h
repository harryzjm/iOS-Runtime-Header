//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SUInstallationConstraintObserver;

__attribute__((visibility("hidden")))
@interface _SUInstallationConstraintBlockObserverToken : NSObject
{
    SUInstallationConstraintObserver *_observer;
    _Bool _invalidated;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

