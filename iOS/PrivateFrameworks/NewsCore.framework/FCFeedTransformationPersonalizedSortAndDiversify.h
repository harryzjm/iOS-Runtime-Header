//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSArray, NSString;
@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedSortAndDiversify : NSObject <FCFeedTransforming>
{
    unsigned long long _limit;
    id <FCFeedPersonalizing> _feedPersonalizer;
    long long _sortOptions;
    NSArray *_preselectedItems;
}

+ (id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3 preselectedItems:(id)arg4;
+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3;
@property(retain, nonatomic) NSArray *preselectedItems; // @synthesize preselectedItems=_preselectedItems;
@property(nonatomic) long long sortOptions; // @synthesize sortOptions=_sortOptions;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

