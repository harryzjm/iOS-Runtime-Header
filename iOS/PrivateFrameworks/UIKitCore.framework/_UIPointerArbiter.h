//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _UIPointerArbitrating;

__attribute__((visibility("hidden")))
@interface _UIPointerArbiter : NSObject
{
    id <_UIPointerArbitrating> _core;
}

+ (id)sharedArbiter;
- (void).cxx_destruct;
- (id)obtainPointerUpdatePauseAssertion;
- (void)endScrollingWithRegion:(id)arg1;
- (void)beginScrollingWithRegion:(id)arg1;
@property(readonly, nonatomic) long long pointerState;
- (void)exitRegion:(id)arg1 removeStyle:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

