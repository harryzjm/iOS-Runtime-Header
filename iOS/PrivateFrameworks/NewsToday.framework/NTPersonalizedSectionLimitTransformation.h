//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/FCFeedTransforming-Protocol.h>

@class NSOrderedSet, NSString;

@interface NTPersonalizedSectionLimitTransformation : NSObject <FCFeedTransforming>
{
    NSOrderedSet *_mandatoryArticleIDs;
    NSOrderedSet *_personalizedArticleIDs;
    unsigned long long _limit;
}

@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSOrderedSet *personalizedArticleIDs; // @synthesize personalizedArticleIDs=_personalizedArticleIDs;
@property(copy, nonatomic) NSOrderedSet *mandatoryArticleIDs; // @synthesize mandatoryArticleIDs=_mandatoryArticleIDs;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 limit:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

