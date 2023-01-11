//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBWorkspaceEventQueue;
@protocol SBSuspendedUnderLockManagerDelegate;

@interface SBSuspendedUnderLockManager : NSObject
{
    id <SBSuspendedUnderLockManagerDelegate> _delegate;
    FBWorkspaceEventQueue *_eventQueue;
    _Bool _suspendedUnderLock;
    _Bool _eventQueue_suspendedUnderLock;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBSuspendedUnderLockManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSuspendedUnderLock) _Bool suspendedUnderLock; // @synthesize suspendedUnderLock=_suspendedUnderLock;
- (_Bool)_shouldBeBackgroundUnderLockForScene:(id)arg1 withSettings:(id)arg2;
- (void)interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2;
- (void)setSuspendedUnderLock:(_Bool)arg1 alongsideWillChangeBlock:(CDUnknownBlockType)arg2 alongsideDidChangeBlock:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;

@end
