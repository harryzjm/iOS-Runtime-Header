//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSText/TSDInfo-Protocol.h>

@class NSObject;
@protocol TSDSelectionStatisticsCalculator;

@protocol TSDSelectionStatisticsContributor <TSDInfo>
- (void)processSelectedStoragesWithStatisticsController:(NSObject<TSDSelectionStatisticsCalculator> *)arg1;
@end

