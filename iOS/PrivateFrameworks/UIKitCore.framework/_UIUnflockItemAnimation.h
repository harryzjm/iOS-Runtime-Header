//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITargetedPreview, UIView, UIViewFloatAnimatableProperty, _UIMorphingPlatterView, _UIPortalView, _UIUnflockReparentingView;

__attribute__((visibility("hidden")))
@interface _UIUnflockItemAnimation : NSObject
{
    long long _type;
    _UIMorphingPlatterView *_platterView;
    UITargetedPreview *_destination;
    UIView *_positionReferenceView;
    _UIUnflockReparentingView *_reparentingContainerView;
    _UIPortalView *_reparentingPortalView;
    UIViewFloatAnimatableProperty *_positionTrackingProperty;
}

+ (id)animationWithPlatterView:(id)arg1 destination:(id)arg2 positionReferenceView:(id)arg3 type:(long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *positionTrackingProperty; // @synthesize positionTrackingProperty=_positionTrackingProperty;
@property(retain, nonatomic) _UIPortalView *reparentingPortalView; // @synthesize reparentingPortalView=_reparentingPortalView;
@property(retain, nonatomic) _UIUnflockReparentingView *reparentingContainerView; // @synthesize reparentingContainerView=_reparentingContainerView;
@property(retain, nonatomic) UIView *positionReferenceView; // @synthesize positionReferenceView=_positionReferenceView;
@property(retain, nonatomic) UITargetedPreview *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) _UIMorphingPlatterView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)complete;
- (void)play;

@end

