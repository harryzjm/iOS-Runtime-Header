//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UITapGestureRecognizer;
@protocol CKSendMenuPopoverPresentationDimmingViewDelegate;

__attribute__((visibility("hidden")))
@interface CKSendMenuPopoverPresentationDimmingView : UIView
{
    _Bool _active;
    id <CKSendMenuPopoverPresentationDimmingViewDelegate> _delegate;
    UITapGestureRecognizer *_dismissGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(nonatomic) __weak id <CKSendMenuPopoverPresentationDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleTap:(id)arg1;
@property(nonatomic, getter=isActive, setter=setActive:) _Bool active; // @synthesize active=_active;
- (id)init;

@end

