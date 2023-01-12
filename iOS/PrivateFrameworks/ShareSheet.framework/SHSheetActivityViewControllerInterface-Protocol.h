//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class UIActivityViewController, UITraitCollection;

@protocol SHSheetActivityViewControllerInterface <NSObject>
- (void)activityViewControllerDidResignContentViewControllerOfPopover:(UIActivityViewController *)arg1;
- (void)activityViewController:(UIActivityViewController *)arg1 traitCollectionDidChange:(UITraitCollection *)arg2;
- (void)activityViewControllerSizeWillChange:(UIActivityViewController *)arg1;
- (void)activityViewControllerDidDisappear:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillDisappear:(UIActivityViewController *)arg1;
- (void)activityViewControllerDidAppear:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillAppear:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillBeEmbedded:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillBePresented:(UIActivityViewController *)arg1;
@end
