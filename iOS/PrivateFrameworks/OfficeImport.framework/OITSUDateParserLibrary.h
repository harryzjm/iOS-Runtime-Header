//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCondition, NSMutableArray, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateParserLibrary : NSObject
{
    OITSULocale *mLocale;
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

- (void)prepareDateParserInBackground;
- (void)returnDateParser:(id)arg1;
- (id)checkoutDateParser;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;

@end

