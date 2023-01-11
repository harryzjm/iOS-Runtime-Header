//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollViewDelegate-Protocol.h"

@class NSAttributedString, NSString, UIScrollView;

@protocol UIScrollViewAccessibilityDelegate <UIScrollViewDelegate>

@optional
- (NSAttributedString *)accessibilityAttributedScrollStatusForScrollView:(UIScrollView *)arg1;
- (NSString *)accessibilityScrollStatusForScrollView:(UIScrollView *)arg1;
@end
