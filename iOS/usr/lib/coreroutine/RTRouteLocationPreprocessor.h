//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RTRouteLocationPreprocessor : NSObject
{
}

+ (unsigned long long)idealPreviousLocationIndex:(id)arg1 from:(unsigned long long)arg2;
+ (double)costOfLocation:(id)arg1;
+ (long long)findProperEndFromLocations:(id)arg1;
+ (id)selectBestSubSequenceFromLocations:(id)arg1 error:(id *)arg2;
+ (id)preprocessLocations:(id)arg1 error:(id *)arg2;

@end
