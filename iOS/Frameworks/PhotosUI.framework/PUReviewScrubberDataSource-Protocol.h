//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSIndexPath, PUReviewScrubber;

@protocol PUReviewScrubberDataSource <NSObject>
- (_Bool)reviewScrubber:(PUReviewScrubber *)arg1 shouldProvideFeedbackForCellAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)numberOfPhotosInReviewScrubber:(PUReviewScrubber *)arg1;
@end

