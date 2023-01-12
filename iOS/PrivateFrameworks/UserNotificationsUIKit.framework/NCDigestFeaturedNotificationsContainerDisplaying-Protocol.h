//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/MTMaterialGrouping-Protocol.h>
#import <UserNotificationsUIKit/MTVisualStylingRequiring-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NSArray;

@protocol NCDigestFeaturedNotificationsContainerDisplaying <PLContentSizeCategoryAdjusting, MTVisualStylingRequiring, MTMaterialGrouping>
@property(retain, nonatomic) NSArray *featuredNotificationContentProviders;
- (void)updateContent;
@end

