//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInputViewSetPlacementApplicator-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIView;
@protocol UIInputViewSetPlacementOwner;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator>
{
    NSLayoutConstraint *_horizontalConstraint;
    NSLayoutConstraint *_verticalConstraint;
    NSLayoutConstraint *_widthConstraint;
    id <UIInputViewSetPlacementOwner> _owner;
}

+ (id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)allConstraintsActive;
- (void)invalidate;
- (void)prepare;
- (void)applyChanges:(id)arg1;
- (void)checkVerticalConstraint;
@property(readonly) struct UIEdgeInsets contentInsets;
- (_Bool)isGesture:(id)arg1 inDraggableView:(struct CGPoint)arg2;
- (_Bool)preBeginGesture:(id)arg1 shouldBegin:(_Bool *)arg2;
- (struct CGRect)targetRect;
@property(readonly, retain) UIView *draggableView;
@property(readonly, retain) NSArray *constraints;
@property(readonly) struct CGPoint origin;
- (id)initForOwner:(id)arg1 withPlacement:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
