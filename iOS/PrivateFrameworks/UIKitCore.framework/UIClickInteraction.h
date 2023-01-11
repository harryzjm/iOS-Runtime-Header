//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/_UIClickInteractionProgressProvidingDelegate-Protocol.h>

@class NSString, UIView, _UIClickFeedbackGenerator, _UIPreviewInteractionHighlighter;
@protocol UIClickInteractionDelegate, _UIClickInteractionProgressProviding;

@interface UIClickInteraction : NSObject <_UIClickInteractionProgressProvidingDelegate, UIInteraction>
{
    _UIClickFeedbackGenerator *_feedbackGenerator;
    _Bool _interactive;
    long long _state;
    _UIPreviewInteractionHighlighter *_interactionEffect;
    _Bool _latching;
    _Bool _selected;
    UIView *_view;
    id <UIClickInteractionDelegate> _delegate;
    id <_UIClickInteractionProgressProviding> _progressProvider;
}

@property(retain, nonatomic) id <_UIClickInteractionProgressProviding> progressProvider; // @synthesize progressProvider=_progressProvider;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isLatching) _Bool latching; // @synthesize latching=_latching;
@property(nonatomic) __weak id <UIClickInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)clickProgressProviderDidEnd:(id)arg1;
- (void)_playFeedbackForTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)clickProgressProvider:(id)arg1 didUpdateWithOverallProgress:(double)arg2 currentState:(long long)arg3;
- (void)clickProgressProviderDidBegin:(id)arg1;
- (void)_endInteractionIfNeeded;
- (void)_createFeedbackGenerator;
- (void)_prepareForInteraction;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)cancelInteraction;
- (Class)_progressProviderClass;
- (void)_updateProgressProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

