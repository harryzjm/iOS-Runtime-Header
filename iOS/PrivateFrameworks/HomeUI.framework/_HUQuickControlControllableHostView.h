//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class HUQuickControlViewProfile, MTMaterialView, NSString;
@protocol HUQuickControlViewInteractionDelegate;

__attribute__((visibility("hidden")))
@interface _HUQuickControlControllableHostView : UIView
{
    _Bool _userInteractionActive;
    HUQuickControlViewProfile *_profile;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    id _value;
    MTMaterialView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) HUQuickControlViewProfile *profile; // @synthesize profile=_profile;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long reachabilityState;
@property(retain, nonatomic) id secondaryValue;
@property(readonly) Class superclass;

@end

