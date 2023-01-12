//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/UIBarPositioningDelegate-Protocol.h>

@class UINavigationBar, UINavigationItem;

@protocol UINavigationBarDelegate <UIBarPositioningDelegate>

@optional
- (long long)navigationBarNSToolbarSection:(UINavigationBar *)arg1;
- (void)navigationBar:(UINavigationBar *)arg1 didPopItem:(UINavigationItem *)arg2;
- (_Bool)navigationBar:(UINavigationBar *)arg1 shouldPopItem:(UINavigationItem *)arg2;
- (void)navigationBar:(UINavigationBar *)arg1 didPushItem:(UINavigationItem *)arg2;
- (_Bool)navigationBar:(UINavigationBar *)arg1 shouldPushItem:(UINavigationItem *)arg2;
@end

