//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSString, UIActivityViewController;

@protocol UIActivityItemsSource <NSObject>
- (NSArray *)activityViewController:(UIActivityViewController *)arg1 itemsForActivityType:(NSString *)arg2;
- (NSArray *)activityViewControllerPlaceholderItems:(UIActivityViewController *)arg1;
@end

