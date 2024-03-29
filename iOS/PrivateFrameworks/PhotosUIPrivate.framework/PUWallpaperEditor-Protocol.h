//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSString, PREditorColorPickerConfiguration, UIView, UIViewController;
@protocol PUWallpaperEditingLook;

@protocol PUWallpaperEditor <NSObject>
@property(readonly, nonatomic) _Bool pu_isDepthEffectDisallowed;
@property(nonatomic, getter=isPerspectiveZoomEnabled) _Bool perspectiveZoomEnabled;
@property(readonly, nonatomic) _Bool pu_canApplyParallaxToViews;
@property(readonly, copy, nonatomic) id <PUWallpaperEditingLook> pu_currentLook;
@property(readonly, nonatomic) UIView *contentOverlayView;
- (void)pu_endBackgroundTask:(id)arg1 completionStatus:(long long)arg2;
- (id)pu_beginBackgroundTaskForReason:(NSString *)arg1;
- (void)pu_requestDismissalWithAction:(long long)arg1;
- (void)pu_updateLuminanceValuesForLooks;
- (void)pu_updateLookProperties;
- (void)pu_updateLooks;
- (void)pu_updatePreferences:(void (^)(id <PUMutableWallpaperEditorPreferences>, id <PUWallpaperTransition>))arg1;
- (void)presentColorPickerWithConfiguration:(PREditorColorPickerConfiguration *)arg1 changeHandler:(void (^)(UIColor *))arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)updateActions;

@optional
- (UIView *)viewForMenuElementIdentifier:(NSString *)arg1;
@end

