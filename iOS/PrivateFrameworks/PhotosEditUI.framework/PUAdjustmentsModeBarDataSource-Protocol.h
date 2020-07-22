//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosEditUI/NSObject-Protocol.h>

@class NSArray, PUAdjustmentsMode, PUAdjustmentsModeBar, PUPhotoEditLevelSlider;

@protocol PUAdjustmentsModeBarDataSource <NSObject>
- (double)adjustmentsModeBar:(PUAdjustmentsModeBar *)arg1 levelForMode:(PUAdjustmentsMode *)arg2;
- (PUPhotoEditLevelSlider *)adjustmentsModeBar:(PUAdjustmentsModeBar *)arg1 levelSliderForMode:(PUAdjustmentsMode *)arg2;
- (NSArray *)adjustmentModesForAdjustmentsModeBar:(PUAdjustmentsModeBar *)arg1;

@optional
- (_Bool)adjustmentsModeBar:(PUAdjustmentsModeBar *)arg1 isEnabledForMode:(PUAdjustmentsMode *)arg2;
@end

