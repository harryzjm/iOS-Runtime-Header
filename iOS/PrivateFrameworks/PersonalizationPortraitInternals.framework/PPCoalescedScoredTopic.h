//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject
{
    unsigned short _occurrencesInSource;
    struct PPScoredItem *_scoredTopic;
}

@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) PPScoredItem *scoredTopic; // @synthesize scoredTopic=_scoredTopic;
- (void).cxx_destruct;
- (id)init;
- (id)initWithScoredTopic:(struct PPScoredItem *)arg1 occurrencesInSource:(unsigned short)arg2;

@end
