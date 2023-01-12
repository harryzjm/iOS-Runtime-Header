//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class BSAction, CHUISWidgetHostViewController;

@protocol CHUISWidgetHostViewControllerDelegate <NSObject>
- (void)widgetHostViewController:(CHUISWidgetHostViewController *)arg1 requestsLaunchWithAction:(BSAction *)arg2;

@optional
- (void)widgetHostViewControllerUsesSystemBackgroundMaterialDidChange:(CHUISWidgetHostViewController *)arg1;
@end

