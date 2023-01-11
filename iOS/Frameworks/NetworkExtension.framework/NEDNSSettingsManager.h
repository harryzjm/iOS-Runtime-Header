//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEConfiguration, NEConfigurationManager, NEDNSSettings, NSArray, NSString;

@interface NEDNSSettingsManager : NSObject <NEPrettyDescription>
{
    _Bool _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEConfiguration *_configuration;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
@property(copy) NSString *localizedDescription;
@property(copy) NSArray *onDemandRules;
@property(retain) NEDNSSettings *dnsSettings;
@property(getter=isEnabled) _Bool enabled;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithGrade:(long long)arg1;
- (void)createEmptyConfigurationWithGrade:(long long)arg1;
- (id)init;

@end
