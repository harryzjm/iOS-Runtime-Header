//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPRatingCommand
{
    float _minimumRating;
    float _maximumRating;
}

@property(nonatomic) float maximumRating; // @synthesize maximumRating=_maximumRating;
@property(nonatomic) float minimumRating; // @synthesize minimumRating=_minimumRating;
- (id)newCommandEventWithRating:(float)arg1;
- (id)_mediaRemoteCommandInfoOptions;

@end

