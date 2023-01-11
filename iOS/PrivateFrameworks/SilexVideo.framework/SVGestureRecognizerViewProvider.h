//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVGestureRecognizerViewProviding-Protocol.h>

@class NSString, UIView;
@protocol SVVideoViewControllerProviding;

@interface SVGestureRecognizerViewProvider : NSObject <SVGestureRecognizerViewProviding>
{
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) UIView *view;
- (id)initWithVideoViewControllerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
