//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WBSCyclerRandomnessUtilities : NSObject
{
}

+ (id)_randomStringWithCharactersFromString:(id)arg1;
+ (id)randomElementOfArray:(id)arg1 relativeProbabilities:(id)arg2;
+ (id)randomElementOfArray:(id)arg1;
+ (id)randomURL;
+ (id)randomString;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)arg1;
+ (void)reseed;
+ (void)setSeed:(unsigned long long)arg1;
+ (unsigned long long)seed;
+ (void)initialize;

@end

