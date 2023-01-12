//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UILongPressGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UITextTouchObservingInteraction : NSObject
{
    UIView *_view;
    UILongPressGestureRecognizer *_longPressGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)longPressObserved:(id)arg1;
- (void)_createGestureRecognizersIfNecessary;
- (void)_removeGestureRecognizers;
- (void)_addGestureRecognizers;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

