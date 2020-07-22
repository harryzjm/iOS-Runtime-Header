//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLScrubView;

@protocol QLScrubViewDataSource
- (struct CGSize)scrubView:(QLScrubView *)arg1 pageSizeAtIndex:(unsigned long long)arg2;
- (void)scrubView:(QLScrubView *)arg1 thumbnailForPage:(long long)arg2 size:(struct CGSize)arg3 withCompletionBlock:(void (^)(UIImage *))arg4;
- (long long)numberOfPagesInScrubView:(QLScrubView *)arg1;
@end

