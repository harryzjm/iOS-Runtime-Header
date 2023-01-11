//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface STRegionRatings : NSObject
{
    NSDictionary *_ratingsPlist;
}

+ (id)sharedRatings;
- (void).cxx_destruct;
@property(readonly) NSDictionary *ratingsPlist; // @synthesize ratingsPlist=_ratingsPlist;
- (id)localizedStringForAppRatingLabel:(id)arg1;
- (id)localizedAppRatingsForRegion:(id)arg1;
- (id)localizedTVRatingsForRegion:(id)arg1;
- (id)localizedMovieRatingsForRegion:(id)arg1;
- (id)_localizedRatingsForRegion:(id)arg1 type:(id)arg2 allContentKey:(id)arg3 noContentKey:(id)arg4;
@property(readonly, copy) NSArray *localizedRegionAndCodePairs;
@property(readonly, copy) NSDictionary *localizedRegionsByCode;
- (id)_localizedLabelForRegion:(id)arg1 rating:(id)arg2;
- (id)_overrideValueForString:(id)arg1;
@property(readonly, copy) NSString *preferredRegion;
- (id)init;

@end
