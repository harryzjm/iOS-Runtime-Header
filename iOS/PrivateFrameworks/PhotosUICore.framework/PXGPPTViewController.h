//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PXGLayout, PXGView;

@interface PXGPPTViewController : UIViewController
{
    PXGView *_gridView;
    PXGLayout *_initialLayout;
}

@property(readonly, nonatomic) PXGLayout *initialLayout; // @synthesize initialLayout=_initialLayout;
- (void).cxx_destruct;
- (void)_handleDoubleTap:(id)arg1;
- (void)animate:(CDUnknownBlockType)arg1 animationRenderingCompletionHandler:(CDUnknownBlockType)arg2 proceedHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
- (void)viewDidLoad;
- (id)initWithLayout:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
