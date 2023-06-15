//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSObject-Protocol.h>

@class NSArray, NSData, NSString, RVItem, VKCCornerLookupButton;

@protocol VKCCornerLookupButtonDelegate <NSObject>
- (void)addMetadataToVSFeedbackItem:(RVItem *)arg1;
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(NSString *)arg1 userFeedbackPayload:(NSData *)arg2 sfReportData:(NSData *)arg3;
- (void)lookupButton:(VKCCornerLookupButton *)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect)arg2;
- (void)lookupButtonDidDismissController:(VKCCornerLookupButton *)arg1;
- (void)lookupButton:(VKCCornerLookupButton *)arg1 didProcessResultWithDuration:(double)arg2;
- (void)generateVisualSearchResultForItems:(NSArray *)arg1 queryID:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, VKCVisualSearchResult *, NSError *))arg3;
@end

