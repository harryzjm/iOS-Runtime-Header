//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (BRLTBrailleTables)
+ (id)brl_brailleTableBundleWithIdentifier:(id)arg1;
- (_Bool)brl_tableIsLanguageAgnosticWithIdentifier:(id)arg1;
- (id)brl_supportedLocalesForTableWithIdentifier:(id)arg1;
- (id)brl_languageAgnosticTables;
- (id)brl_supportedTablesForLocale:(id)arg1;
- (id)brl_supportedLocales;
- (id)brl_brailleTablesDictionary;
@end
