//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSObject
{
    id <WeatherPreferencesPersistence> _persistence;
}

+ (id)sharedInternalPreferences;
@property(retain) id <WeatherPreferencesPersistence> persistence; // @synthesize persistence=_persistence;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
@property(readonly) _Bool isInternalInstall;

@end

