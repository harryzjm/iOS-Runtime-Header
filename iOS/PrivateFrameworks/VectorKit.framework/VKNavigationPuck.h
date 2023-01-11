//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/VKTrackableAnnotationPresentation-Protocol.h>

@class NSString, VKTimedAnimation;
@protocol VKAnnotation;

@interface VKNavigationPuck : NSObject <VKTrackableAnnotationPresentation>
{
    id <VKAnnotation> _annotation;
    _Bool _tracking;
    _Bool _animatingToCoordinate;
    _Bool _stale;
    VKTimedAnimation *_puckStyleAnimation;
    struct AnimationRunner *_animationRunner;
    struct NavigationPuck *_navigationPuck;
    _Bool _animatingAccuracy;
    double _presentationAccuracy;
}

@property(nonatomic) double presentationAccuracy; // @synthesize presentationAccuracy=_presentationAccuracy;
@property(nonatomic, getter=isAnimatingAccuracy) _Bool animatingAccuracy; // @synthesize animatingAccuracy=_animatingAccuracy;
@property(nonatomic) _Bool animatingToCoordinate; // @synthesize animatingToCoordinate=_animatingToCoordinate;
@property(nonatomic) _Bool stale; // @synthesize stale=_stale;
@property(retain, nonatomic) id <VKAnnotation> annotation; // @synthesize annotation=_annotation;
- (struct NavigationPuck *)puck;
@property(nonatomic) _Bool enabled;
@property(nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) CDStruct_c3b9c2ee presentationCoordinate;
@property(nonatomic) float scale;
@property(nonatomic) _Bool showCourse;
@property(nonatomic) double presentationCourse;
@property(nonatomic) int mode;
@property(readonly, nonatomic) double minimumAccuracy;
- (void)runAnimation:(id)arg1;
- (void)destroyAnimationRunner;
@property(readonly, nonatomic) struct VKEdgeInsets annotationTrackingEdgeInsets;
- (void)dealloc;
- (id)initWithAnimationRunner:(struct AnimationRunner *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
