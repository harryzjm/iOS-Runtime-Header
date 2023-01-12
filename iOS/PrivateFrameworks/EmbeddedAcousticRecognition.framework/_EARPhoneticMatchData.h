//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARPhoneticMatchData : NSObject
{
    shared_ptr_5cf7ddf4 _dataFeed;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) shared_ptr_5cf7ddf4 dataFeed; // @synthesize dataFeed=_dataFeed;
- (int)getLimit;
- (_Bool)roomForMoreData;
- (_Bool)appendData:(id)arg1 prior:(float)arg2;
- (void)applyRegexEnumerations;
- (void)powerScalePriors;
- (void)expDecayPriors;
- (void)normalizePriors;
- (void)sortItemsByPriorAsc;
- (void)sortItemsByPriorDesc;
- (void)writeTsv:(id)arg1;
- (id)initWithFeedType:(long long)arg1 jsonConfigFile:(id)arg2;
- (int)convertFeedType:(long long)arg1;

@end
