//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface PUAmbientPhotoFramePlayergroundViewController : UIViewController
{
    MISSING_TYPE *photoLibrary;
    MISSING_TYPE *$__lazy_storage_$_renderer;
    MISSING_TYPE *$__lazy_storage_$_photoFrameController;
    MISSING_TYPE *$__lazy_storage_$_environment;
    MISSING_TYPE *preferences;
    MISSING_TYPE *backgroundView;
    MISSING_TYPE *foregroundView;
    MISSING_TYPE *floatingView;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
@property(nonatomic, readonly) _Bool prefersHomeIndicatorAutoHidden;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end

