//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGAOINameShortener : NSObject
{
}

+ (id)s_aoiReplacementsDictionary;
+ (_Bool)isCountryWithAOISubstitutions:(id)arg1;
+ (void)_enumerateWordCombinationsForName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_shortenedAOIForName:(id)arg1;
+ (id)shortenedAOIForAOINode:(id)arg1;

@end
