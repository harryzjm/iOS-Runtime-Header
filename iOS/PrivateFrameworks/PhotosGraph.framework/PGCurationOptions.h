//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSCopying-Protocol.h>

@class NSSet;

@interface PGCurationOptions : NSObject <NSCopying>
{
    _Bool _includesAllFaces;
    _Bool _semanticalDedupingEnabled;
    _Bool _semanticalDedupingUsesAdaptiveSimilarStacking;
    _Bool _movieDedupingEnabled;
    _Bool _lastPassMovieAdditionEnabled;
    _Bool _focusOnPeople;
    _Bool _focusOnInterestingItems;
    unsigned long long _duration;
    unsigned long long _precision;
    long long _cardinalMode;
    NSSet *_uuidsOfRequiredAssets;
}

+ (id)defaultOptions;
- (void).cxx_destruct;
@property(nonatomic) _Bool focusOnInterestingItems; // @synthesize focusOnInterestingItems=_focusOnInterestingItems;
@property(nonatomic) _Bool focusOnPeople; // @synthesize focusOnPeople=_focusOnPeople;
@property(copy, nonatomic) NSSet *uuidsOfRequiredAssets; // @synthesize uuidsOfRequiredAssets=_uuidsOfRequiredAssets;
@property(nonatomic) long long cardinalMode; // @synthesize cardinalMode=_cardinalMode;
@property(nonatomic, getter=lastPassMovieAdditionIsEnabled) _Bool lastPassMovieAdditionEnabled; // @synthesize lastPassMovieAdditionEnabled=_lastPassMovieAdditionEnabled;
@property(nonatomic, getter=movieDedupingIsEnabled) _Bool movieDedupingEnabled; // @synthesize movieDedupingEnabled=_movieDedupingEnabled;
@property(nonatomic) _Bool semanticalDedupingUsesAdaptiveSimilarStacking; // @synthesize semanticalDedupingUsesAdaptiveSimilarStacking=_semanticalDedupingUsesAdaptiveSimilarStacking;
@property(nonatomic, getter=semanticalDedupingIsEnabled) _Bool semanticalDedupingEnabled; // @synthesize semanticalDedupingEnabled=_semanticalDedupingEnabled;
@property(nonatomic) _Bool includesAllFaces; // @synthesize includesAllFaces=_includesAllFaces;
@property(nonatomic) unsigned long long precision; // @synthesize precision=_precision;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDuration:(unsigned long long)arg1 precision:(unsigned long long)arg2;

@end
