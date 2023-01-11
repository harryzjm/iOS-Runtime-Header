//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol SBSystemGestureRecognizerDelegate;

@interface SBFailingSystemGestureRecognizer : UIGestureRecognizer
{
}

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <SBSystemGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end
