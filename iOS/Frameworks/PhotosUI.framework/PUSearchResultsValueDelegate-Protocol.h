//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSString, PLSearchIndexDateFormatter, PSIDate, PUSearchResultsValue;

@protocol PUSearchResultsValueDelegate <NSObject>
- (NSString *)stringWithStartDate:(PSIDate *)arg1 endDate:(PSIDate *)arg2;
- (PLSearchIndexDateFormatter *)dateFormatter;
- (_Bool)searchIsFinished:(PUSearchResultsValue *)arg1;
@end

