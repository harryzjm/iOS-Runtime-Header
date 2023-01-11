//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCWatchlistDefaults : NSObject
{
    NSArray *_defaultSymbols;
}

+ (id)_legacyDefaultSymbolsByCountryCode;
+ (id)_iOS7DefaultsForCurrentCountry;
+ (id)_iOS10DefaultsForCurrentCountry;
+ (id)_defaultSymbolsByCountryCode;
+ (id)defaultsHistoryForCurrentCountry;
+ (id)emptyDefaults;
+ (id)defaultsWithDefaultSymbols:(id)arg1;
+ (id)defaultsFromCarrierBundle;
+ (id)defaultsForCurrentCountry;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *defaultSymbols; // @synthesize defaultSymbols=_defaultSymbols;
- (id)defaultsByAppendingDefaults:(id)arg1;
- (id)initWithDefaultSymbols:(id)arg1;

@end
