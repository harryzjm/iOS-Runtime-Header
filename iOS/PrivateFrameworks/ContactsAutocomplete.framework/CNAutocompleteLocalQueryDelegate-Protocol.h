//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsAutocomplete/NSObject-Protocol.h>

@class CNAutocompleteResultFactory, CNContactStore, NSArray, NSString;

@protocol CNAutocompleteLocalQueryDelegate <NSObject>
- (NSString *)queryNameForLogging;
- (NSArray *)autocompleteResultsForProperties:(NSArray *)arg1 fetchResults:(NSArray *)arg2 resultFactory:(CNAutocompleteResultFactory *)arg3 contactStore:(CNContactStore *)arg4;
- (NSArray *)resultsForSearchString:(NSString *)arg1 terms:(NSArray *)arg2 properties:(NSArray *)arg3 contactStore:(CNContactStore *)arg4 error:(id *)arg5;
@end

