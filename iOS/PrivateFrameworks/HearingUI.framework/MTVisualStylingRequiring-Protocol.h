//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HearingUI/NSObject-Protocol.h>

@class MTVisualStylingProvider, NSArray;

@protocol MTVisualStylingRequiring <NSObject>
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 forCategory:(long long)arg2;
@end

