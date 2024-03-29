//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TUSearchController;

__attribute__((visibility("hidden")))
@interface TUAutocompleteResultPartitioner : NSObject
{
    TUSearchController *_searchController;
    NSMutableArray *_normalResultsArray;
    NSMutableArray *_foundInMailResultsArray;
    NSMutableArray *_foundOnServersResultsArray;
}

+ (_Bool)sourceTypeIsFoundOnServers:(unsigned long long)arg1;
+ (_Bool)sourceTypeIsFoundInMail:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *foundOnServersResultsArray; // @synthesize foundOnServersResultsArray=_foundOnServersResultsArray;
@property(retain, nonatomic) NSMutableArray *foundInMailResultsArray; // @synthesize foundInMailResultsArray=_foundInMailResultsArray;
@property(retain, nonatomic) NSMutableArray *normalResultsArray; // @synthesize normalResultsArray=_normalResultsArray;
@property __weak TUSearchController *searchController; // @synthesize searchController=_searchController;
- (void)addResult:(id)arg1;
- (id)init;
- (id)searchResults;

@end

