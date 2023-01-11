//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVCustomControlsViewProviding-Protocol.h>

@class NSString, UIView;
@protocol SVCustomControlsLayoutGuideProviding, SVVideoViewControllerProviding;

@interface SVCustomControlsViewProvider : NSObject <SVCustomControlsViewProviding>
{
    UIView *_controlsView;
    id <SVCustomControlsLayoutGuideProviding> _layoutGuideProvider;
    id <SVVideoViewControllerProviding> _viewControllerProvider;
}

@property(readonly, nonatomic) id <SVVideoViewControllerProviding> viewControllerProvider; // @synthesize viewControllerProvider=_viewControllerProvider;
@property(readonly, nonatomic) id <SVCustomControlsLayoutGuideProviding> layoutGuideProvider; // @synthesize layoutGuideProvider=_layoutGuideProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *controlsView; // @synthesize controlsView=_controlsView;
- (id)initWithViewControllerProvider:(id)arg1 layoutGuideProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
