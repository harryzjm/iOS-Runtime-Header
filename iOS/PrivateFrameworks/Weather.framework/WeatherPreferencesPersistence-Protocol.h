//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Weather/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol WeatherPreferencesPersistence <NSObject>
- (_Bool)synchronize;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (_Bool)boolForKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
@end

