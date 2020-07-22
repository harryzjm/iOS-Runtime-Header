//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class QLItem, UIView;
@protocol QLDismissGestureTracking;

__attribute__((visibility("hidden")))
@interface QLTransitionDriver : NSObject
{
    _Bool _transitionContainerMasksToBounds;
    _Bool _presenting;
    QLItem *_transitionPreviewItem;
    UIView *_transitionContainer;
    UIView *_destinationView;
    UIView *_sourceView;
    id <QLDismissGestureTracking> _gestureTracker;
    double _duration;
    double _topNavigationOffset;
    double _hostNavigationOffset;
    struct CGSize _transitionPreviewSize;
    struct CGRect _sourceViewFrame;
    struct CGRect _uncroppedFrame;
    struct CGRect _transitionContainerOriginalFrame;
}

@property double hostNavigationOffset; // @synthesize hostNavigationOffset=_hostNavigationOffset;
@property double topNavigationOffset; // @synthesize topNavigationOffset=_topNavigationOffset;
@property double duration; // @synthesize duration=_duration;
@property _Bool presenting; // @synthesize presenting=_presenting;
@property(retain) id <QLDismissGestureTracking> gestureTracker; // @synthesize gestureTracker=_gestureTracker;
@property _Bool transitionContainerMasksToBounds; // @synthesize transitionContainerMasksToBounds=_transitionContainerMasksToBounds;
@property struct CGRect transitionContainerOriginalFrame; // @synthesize transitionContainerOriginalFrame=_transitionContainerOriginalFrame;
@property struct CGRect uncroppedFrame; // @synthesize uncroppedFrame=_uncroppedFrame;
@property struct CGRect sourceViewFrame; // @synthesize sourceViewFrame=_sourceViewFrame;
@property(retain) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain) UIView *destinationView; // @synthesize destinationView=_destinationView;
@property(retain) UIView *transitionContainer; // @synthesize transitionContainer=_transitionContainer;
@property(retain) QLItem *transitionPreviewItem; // @synthesize transitionPreviewItem=_transitionPreviewItem;
@property struct CGSize transitionPreviewSize; // @synthesize transitionPreviewSize=_transitionPreviewSize;
- (void).cxx_destruct;
- (void)tearDown;
- (void)animateTransition;
- (void)animateFinishTransition;

@end

