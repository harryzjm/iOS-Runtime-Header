//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSSet, UIEvent, UIView;
@protocol NSObject><NSCopying, UIInteraction;

@protocol PKScribbleInteractionWrapper <NSObject>
@property(readonly, nonatomic) id <UIInteraction> interaction;
- (_Bool)isElementFocused:(id <NSObject><NSCopying>)arg1;
- (_Bool)supportsIsElementFocused;
- (void)endSuppressingPlaceholderForElement:(id <NSObject><NSCopying>)arg1;
- (_Bool)beginSuppressingPlaceholderForElement:(id <NSObject><NSCopying>)arg1;
- (struct UIEdgeInsets)hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets)arg1 element:(id <NSObject><NSCopying>)arg2;
- (void)focusElement:(id <NSObject><NSCopying>)arg1 initialFocusSelectionReferencePoint:(struct CGPoint)arg2 completion:(void (^)(id <UITextInput>))arg3;
- (void)requestElementsInRect:(struct CGRect)arg1 completion:(void (^)(NSArray *, long long))arg2;
- (void)didFinishWritingInElement:(id <NSObject><NSCopying>)arg1;
- (void)willBeginWritingInElement:(id <NSObject><NSCopying>)arg1;
- (_Bool)shouldBeginAtLocation:(struct CGPoint)arg1;
- (_Bool)focusWillTransformElement:(id <NSObject><NSCopying>)arg1;
- (struct CGRect)frameForElement:(id <NSObject><NSCopying>)arg1;
- (_Bool)isElementContainer;
- (_Bool)supportsShouldBegin;

@optional
@property(readonly, nonatomic) UIView *interactionView;
@property(readonly, nonatomic) UIView *view;
- (_Bool)isEditableElement:(id <NSObject><NSCopying>)arg1;
- (_Bool)shouldDisableInputAssistant;
- (void)didTargetElement:(id <NSObject><NSCopying>)arg1 forTouches:(NSSet *)arg2 event:(UIEvent *)arg3;
- (_Bool)isEnabled;
@end

