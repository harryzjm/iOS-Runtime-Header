//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDIterator;

__attribute__((visibility("hidden")))
@interface WDCombinedIterator
{
    WDIterator *mParentIterator;
    WDIterator *mChildIterator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WDIterator *childIterator; // @synthesize childIterator=mChildIterator;
- (id)next;
- (_Bool)hasNext;
- (id)newChildIteratorFrom:(id)arg1;
- (id)childIteratorFrom:(id)arg1;
- (id)initWithParentIterator:(id)arg1;
- (void)incrementChildIterator;

@end

