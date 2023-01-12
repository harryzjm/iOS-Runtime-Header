//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSIndexPath, NSURL, PreviewTableViewController, UIMenu;

@protocol PreviewTableViewControllerDelegate <NSObject>
- (UIMenu *)previewTableViewController:(PreviewTableViewController *)arg1 menuForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSURL *)previewTableViewController:(PreviewTableViewController *)arg1 URLForRowAtIndexPath:(NSIndexPath *)arg2;
@end
