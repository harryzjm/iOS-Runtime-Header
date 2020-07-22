//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIScrollViewScrollObserver_Internal-Protocol.h>

@class NSString, UIScrollView;
@protocol _UIScrollViewScrollObserver_Internal;

__attribute__((visibility("hidden")))
@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollViewScrollObserver_Internal>
{
    id <_UIScrollViewScrollObserver_Internal> _controller;
    UIScrollView *_scrollView;
}

@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <_UIScrollViewScrollObserver_Internal> controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_didScroll;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
