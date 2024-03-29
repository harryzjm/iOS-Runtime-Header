//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AVScrubbingGesturePlatformAdapterDelegate;

__attribute__((visibility("hidden")))
@interface AVScrubbingGesturePlatformAdapter : NSObject
{
    _Bool _gestureEnabled;
    id <AVScrubbingGesturePlatformAdapterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool gestureEnabled; // @synthesize gestureEnabled=_gestureEnabled;
@property(nonatomic) __weak id <AVScrubbingGesturePlatformAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool gestureActive;
@property(readonly, nonatomic) float timelineVelocity;
@property(readonly, nonatomic) struct CGPoint translation;
- (id)_abstractInit;

@end

