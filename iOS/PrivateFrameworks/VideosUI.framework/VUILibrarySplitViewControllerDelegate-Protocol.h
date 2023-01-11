//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSError, VUILibrarySplitViewController, VUIMenuDataSource;

@protocol VUILibrarySplitViewControllerDelegate <NSObject>
- (void)librarySplitViewControllerShouldDismiss:(VUILibrarySplitViewController *)arg1;
- (void)librarySplitViewControllerDidFinishLoading:(VUILibrarySplitViewController *)arg1 withCategories:(VUIMenuDataSource *)arg2 error:(NSError *)arg3;
@end
