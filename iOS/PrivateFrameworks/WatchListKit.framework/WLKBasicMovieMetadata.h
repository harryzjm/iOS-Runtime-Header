//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, WLKRottenTomatoesRating;

@interface WLKBasicMovieMetadata
{
    NSString *_studio;
    WLKRottenTomatoesRating *_rottenTomatoesRating;
    double _duration;
    NSDate *_releaseDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) WLKRottenTomatoesRating *rottenTomatoesRating; // @synthesize rottenTomatoesRating=_rottenTomatoesRating;
@property(readonly, copy, nonatomic) NSString *studio; // @synthesize studio=_studio;
- (id)initWithDictionary:(id)arg1;

@end
