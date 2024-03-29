//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDAction.h"

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface DDFlightAction : DDAction
{
    UINavigationController *_viewController;
}

- (void).cxx_destruct;
- (id)viewController;
- (_Bool)extractAirlineCode:(id *)arg1 flightNumber:(long long *)arg2;
- (void)closePressed;
- (int)interactionType;
- (id)quickActionTitle;
- (id)iconName;
- (id)localizedName;
- (void)prepareViewControllerForActionController:(id)arg1;
- (void)adaptForPresentationInPopover:(_Bool)arg1;

@end

