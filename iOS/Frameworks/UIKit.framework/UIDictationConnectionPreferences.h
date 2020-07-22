//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AFPreferences;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionPreferences : NSObject
{
    AFPreferences *_afPreferences;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;
- (void).cxx_destruct;
- (void)afPreferencesChanged:(id)arg1;
- (id)languageCode;
- (id)manualEndpointingThreshold;
- (_Bool)ignoreServerManualEndpointingThreshold;
- (_Bool)suppressDictationOptIn;
- (_Bool)dictationIsEnabled;
- (id)initSingleton;

@end

