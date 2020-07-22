//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MCAPNPayload
{
    NSArray *_apnInfos;
    _Bool _wasInstalled;
}

+ (id)apnDomainName;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(nonatomic) _Bool wasInstalled; // @synthesize wasInstalled=_wasInstalled;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)description;
- (id)stubDictionary;
- (id)_strippedAPNDefaults;
- (id)apnDefaults;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (void)_finishInitializationWithContents:(id)arg1;
- (_Bool)_checkForValidContents:(id)arg1 outError:(id *)arg2;
- (id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2;

@end
