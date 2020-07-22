//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _KSTextReplacementHelper : NSObject
{
}

+ (id)fetchConfigurationPlist;
+ (void)fetchConfigurationPlistIfNeeded;
+ (id)sampleShortcut;
+ (id)appleLanguagesPreference;
+ (void)logAggdValueForSyncIsPull:(_Bool)arg1 success:(_Bool)arg2;
+ (id)aggdPrefix;
+ (void)logPhraseWordCount:(long long)arg1;
+ (void)extractAggdMetricsForTextReplacement:(id)arg1;
+ (id)multipleAddErrors:(id)arg1 removeErrors:(id)arg2;
+ (id)errorWithCode:(long long)arg1 failedAdds:(id)arg2 failedDeletes:(id)arg3;
+ (id)errorWithCode:(long long)arg1 forEntry:(id)arg2;
+ (long long)validateTextReplacement:(id)arg1;
+ (id)transactionFromTextReplacementEntry:(id)arg1 forDelete:(_Bool)arg2;
+ (id)textReplaceEntryFromTIDictionaryValue:(id)arg1;
+ (id)errorStringForCode:(long long)arg1;

@end

