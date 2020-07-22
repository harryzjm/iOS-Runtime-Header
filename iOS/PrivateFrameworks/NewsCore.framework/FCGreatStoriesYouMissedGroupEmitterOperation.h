//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FCGreatStoriesYouMissedGroupEmitterOperation
{
    unsigned long long _limit;
    unsigned long long _restrictToBestSourceFeeds;
}

@property(nonatomic) unsigned long long restrictToBestSourceFeeds; // @synthesize restrictToBestSourceFeeds=_restrictToBestSourceFeeds;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)_feedTransformation;
- (void)performOperation;
- (id)initWithContext:(id)arg1 cursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;
- (id)initWithContext:(id)arg1 cursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 limit:(unsigned long long)arg5 restrictToBestSourceFeeds:(_Bool)arg6;

@end
