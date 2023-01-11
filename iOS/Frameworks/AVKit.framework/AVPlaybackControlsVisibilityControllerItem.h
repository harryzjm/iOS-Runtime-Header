//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;

@interface AVPlaybackControlsVisibilityControllerItem : NSObject
{
    _Bool _hidden;
    _Bool _viewLoaded;
    double _alpha;
    UIView *_view;
}

@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic, getter=isViewLoaded) _Bool viewLoaded; // @synthesize viewLoaded=_viewLoaded;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (_Bool)needsTransitionToHidden:(_Bool)arg1 alpha:(double)arg2;
- (_Bool)wantsAnimatedTransitionToHidden:(_Bool)arg1 alpha:(double)arg2;
- (id)init;

@end
