//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPVoteStats : NSObject
{
    long long _votes;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long votes; // @synthesize votes=_votes;
- (float)rate;
- (id)initWithVotes:(long long)arg1 andCount:(long long)arg2;

@end
