//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCFeedRange;

@interface FCSingleTagHeadlinesFetchRanges : NSObject
{
    FCFeedRange *_freeFeedRange;
    FCFeedRange *_paidFeedRange;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FCFeedRange *paidFeedRange; // @synthesize paidFeedRange=_paidFeedRange;
@property(readonly, copy, nonatomic) FCFeedRange *freeFeedRange; // @synthesize freeFeedRange=_freeFeedRange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFreeFeedRange:(id)arg1 paidFeedRange:(id)arg2;

@end
