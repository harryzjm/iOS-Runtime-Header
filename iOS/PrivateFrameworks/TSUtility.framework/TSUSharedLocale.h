//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSUSharedLocale : NSObject
{
    struct __CFLocale *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLocale;
+ (id)_singletonAlloc;
- (void)datePreferencesChanged:(id)arg1;
- (struct __CFLocale *)currentLocale;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

