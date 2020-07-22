//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (SCROBundleExtras)
+ (id)tableIdentifiersForLanguageIdentifier:(id)arg1;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;
+ (_Bool)doesBrailleTableSupportEightDot:(id)arg1;
+ (_Bool)doesBrailleTableSupportContractions:(id)arg1;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)nameForBrailleTableIdentifier:(id)arg1;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)brailleTableIdentifiers;
+ (id)_brailleTableBundles;
+ (id)brailleDriverDeviceDetectionInfo;
+ (long long)bundleIndexForBrailleDriverIdentifier:(id)arg1;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundles;
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;
- (id)bundleSpecificTableIdentifierForTableIdentifier:(id)arg1;
@end

