//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthExperienceUI/NSObject-Protocol.h>

@class UISearchController;

@protocol UISearchControllerDelegate <NSObject>

@optional
- (void)searchController:(UISearchController *)arg1 didChangeFromSearchBarPlacement:(long long)arg2;
- (void)searchController:(UISearchController *)arg1 willChangeToSearchBarPlacement:(long long)arg2;
- (void)presentSearchController:(UISearchController *)arg1;
- (void)didDismissSearchController:(UISearchController *)arg1;
- (void)willDismissSearchController:(UISearchController *)arg1;
- (void)didPresentSearchController:(UISearchController *)arg1;
- (void)willPresentSearchController:(UISearchController *)arg1;
@end

