//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;
@protocol FCChannelProviding;

@interface FCLocalFetchOperation
{
    NSArray *_paths;
    NSMutableArray *_headlines;
    id <FCChannelProviding> _channel;
}

@property(retain, nonatomic) id <FCChannelProviding> channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) NSMutableArray *headlines; // @synthesize headlines=_headlines;
@property(readonly, nonatomic) NSArray *paths; // @synthesize paths=_paths;
- (void).cxx_destruct;
- (void)convertPathsToHeadlines;
- (void)performOperation;
- (id)initWithPaths:(id)arg1 andChannel:(id)arg2;

@end

