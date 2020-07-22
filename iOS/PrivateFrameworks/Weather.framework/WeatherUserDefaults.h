//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Weather/WeatherPreferencesPersistence-Protocol.h>

@class NSString, NSUserDefaults;

@interface WeatherUserDefaults : NSObject <WeatherPreferencesPersistence>
{
    NSUserDefaults *_userDefaults;
}

@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (_Bool)synchronize;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
