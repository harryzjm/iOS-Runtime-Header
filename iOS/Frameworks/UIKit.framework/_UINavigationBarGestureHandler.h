//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class NSString, UINavigationBar, UISwipeGestureRecognizer;
@protocol _UINavigationBarGestureHandlerDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarGestureHandler : NSObject <UIGestureRecognizerDelegatePrivate>
{
    UISwipeGestureRecognizer *_popSwipeGestureRecognizer;
    UINavigationBar *_navigationBar;
    id <_UINavigationBarGestureHandlerDelegate> _delegate;
    long long _idiom;
}

@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) __weak id <_UINavigationBarGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)_handlePopSwipe:(id)arg1;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNavigationBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

