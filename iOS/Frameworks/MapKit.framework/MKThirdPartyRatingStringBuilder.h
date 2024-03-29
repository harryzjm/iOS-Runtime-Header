//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKThirdPartyRatingStringBuilder : NSObject
{
}

+ (id)ratingColorForMapItem:(id)arg1;
+ (id)ratingSymbolName;
+ (id)carPlayHeaderStringForMapItem:(id)arg1 titleAttributes:(id)arg2 providerAttributes:(id)arg3;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4;
+ (id)ratingSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

