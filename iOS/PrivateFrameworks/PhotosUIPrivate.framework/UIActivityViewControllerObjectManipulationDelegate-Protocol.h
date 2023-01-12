//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSArray, NSString, UIActivityViewController, UIViewController;

@protocol UIActivityViewControllerObjectManipulationDelegate <NSObject>
- (NSArray *)_customizationGroupsForActivityViewController:(UIActivityViewController *)arg1;

@optional
- (UIViewController *)customActionViewControllerForActivityViewController:(UIActivityViewController *)arg1;
- (NSString *)customLocalizedActionTitleForActivityViewController:(UIActivityViewController *)arg1;
- (_Bool)_customizationAvailableForActivityViewController:(UIActivityViewController *)arg1;
@end

