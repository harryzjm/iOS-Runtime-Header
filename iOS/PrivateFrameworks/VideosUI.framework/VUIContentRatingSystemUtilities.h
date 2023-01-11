//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIContentRatingSystemUtilities : NSObject
{
}

+ (id)_ratingSystemStringLookUpDictionary;
+ (id)_ratingSystemLookUpDictionary;
+ (_Bool)_isRatingSystemForTV:(long long)arg1;
+ (_Bool)_isRatingSystemForMusic:(long long)arg1;
+ (_Bool)_isRatingSystemForMovies:(long long)arg1;
+ (long long)ratingSystemKindForRatingSystem:(long long)arg1;
+ (id)stringForRatingSystem:(long long)arg1;
+ (long long)ratingSystemFromString:(id)arg1;

@end

