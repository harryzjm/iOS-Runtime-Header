//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMDisabledPreviewController;

@protocol CAMDisabledPreviewControllerDelegate <NSObject>
- (void)disabledPreviewController:(CAMDisabledPreviewController *)arg1 wantsPreviewEnabledForReason:(long long)arg2;
- (void)disabledPreviewController:(CAMDisabledPreviewController *)arg1 wantsPreviewDisabledForReason:(long long)arg2;
@end

