//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PGTrendsConfiguration
{
    NSString *_featureLabel;
    NSArray *_validTrendTypes;
    NSArray *_positiveScenes;
    NSArray *_secondaryPositiveScenes;
    NSArray *_positiveDominantScenes;
    NSArray *_positiveSemDevScenes;
    NSArray *_negativeScenes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *negativeScenes; // @synthesize negativeScenes=_negativeScenes;
@property(readonly, nonatomic) NSArray *positiveSemDevScenes; // @synthesize positiveSemDevScenes=_positiveSemDevScenes;
@property(readonly, nonatomic) NSArray *positiveDominantScenes; // @synthesize positiveDominantScenes=_positiveDominantScenes;
@property(readonly, nonatomic) NSArray *secondaryPositiveScenes; // @synthesize secondaryPositiveScenes=_secondaryPositiveScenes;
@property(readonly, nonatomic) NSArray *positiveScenes; // @synthesize positiveScenes=_positiveScenes;
@property(readonly, nonatomic) NSArray *validTrendTypes; // @synthesize validTrendTypes=_validTrendTypes;
@property(readonly, nonatomic) NSString *featureLabel; // @synthesize featureLabel=_featureLabel;

@end
