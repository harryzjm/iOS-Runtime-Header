//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraKit/NSObject-Protocol.h>

@class CMKTopBar;

@protocol CMKTopBarDelegate <NSObject>
- (_Bool)topBarShouldHideTimerButton:(CMKTopBar *)arg1;
- (_Bool)topBarShouldHideFlipButton:(CMKTopBar *)arg1;
- (_Bool)topBarShouldHideElapsedTimeView:(CMKTopBar *)arg1;
- (_Bool)topBarShouldHideHDRButton:(CMKTopBar *)arg1;
- (_Bool)topBarShouldHideFlashButton:(CMKTopBar *)arg1;
@end

