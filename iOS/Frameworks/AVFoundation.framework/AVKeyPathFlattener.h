//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVKeyPathDependencyHost-Protocol.h>
#import <AVFoundation/AVWeakObservable-Protocol.h>

@class AVKeyPathDependencyManager, AVTwoPartKeyPath, NSString;

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable>
{
    AVKeyPathDependencyManager *_dependencyManager;
    AVTwoPartKeyPath *_dependencyKeyPath;
    NSObject *_observedObject;
}

@property(readonly, nonatomic) id dependentProperty;
- (id)topLevelDependencyProperty;
- (id)observedObject;
- (void)dealloc;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2;
- (id)init;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

