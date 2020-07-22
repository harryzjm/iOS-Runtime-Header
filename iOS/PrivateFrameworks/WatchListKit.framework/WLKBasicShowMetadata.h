//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, WLKShowContentRating;

@interface WLKBasicShowMetadata
{
    WLKShowContentRating *_contentRating;
    NSDate *_releaseDate;
    NSDate *_finaleDate;
    NSArray *_genres;
    NSString *_network;
}

@property(readonly, copy, nonatomic) NSString *network; // @synthesize network=_network;
@property(readonly, copy, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(readonly, nonatomic) NSDate *finaleDate; // @synthesize finaleDate=_finaleDate;
@property(readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, nonatomic) WLKShowContentRating *contentRating; // @synthesize contentRating=_contentRating;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

