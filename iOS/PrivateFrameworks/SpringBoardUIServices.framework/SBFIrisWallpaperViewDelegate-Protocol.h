//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol SBFIrisWallpaperView;

@protocol SBFIrisWallpaperViewDelegate <NSObject>

@optional
- (void)irisWallpaperView:(id <SBFIrisWallpaperView>)arg1 didReplaceGestureRecognizer:(UIGestureRecognizer *)arg2 withGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)irisWallpaperViewIsInteractingDidChange:(id <SBFIrisWallpaperView>)arg1;
- (void)irisWallpaperViewPlaybackStateDidChange:(id <SBFIrisWallpaperView>)arg1;
@end

