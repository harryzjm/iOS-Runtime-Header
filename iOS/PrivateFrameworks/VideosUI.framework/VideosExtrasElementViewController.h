//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSMapTable, VideosExtrasBackgroundViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasElementViewController : UIViewController
{
    VideosExtrasBackgroundViewController *_backgroundViewController;
    NSMapTable *_bannerButtonMap;
    _Bool _wide;
}

+ (id)_borderView;
- (void).cxx_destruct;
@property(nonatomic, getter=isWide) _Bool wide; // @synthesize wide=_wide;
- (void)_didActivateButtonWithItem:(id)arg1;
- (void)_prepareLayout;
- (id)_installBackdrop:(id)arg1;
- (void)_configureBannerWithElement:(id)arg1;
- (void)configureBackgroundWithElements:(id)arg1;
- (void)_startBackgroundAudio;
- (id)backgroundViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (unsigned long long)extrasSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

