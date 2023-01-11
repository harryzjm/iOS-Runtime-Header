//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class IKAppContext, NSArray, NSDictionary, NSString;

@interface WLKUIMediaEntitiesFetchOperation : NSOperation
{
    NSArray *_mediaEntities;
    NSString *_mediaCategory;
    NSString *_mediaCollectionType;
    IKAppContext *_appContext;
    NSString *_mediaEntitySubtype;
    NSDictionary *_options;
}

+ (id)_numberForObject:(id)arg1;
+ (id)_timeIntervalNumberForObject:(id)arg1;
+ (id)_mpOrderingDirectionMappingForSortDirectionMapping:(id)arg1;
+ (id)_mpPropertiesForProperties:(id)arg1;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *mediaEntitySubtype; // @synthesize mediaEntitySubtype=_mediaEntitySubtype;
@property(retain, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSString *mediaCollectionType; // @synthesize mediaCollectionType=_mediaCollectionType;
@property(retain, nonatomic) NSString *mediaCategory; // @synthesize mediaCategory=_mediaCategory;
@property(copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
- (void).cxx_destruct;
- (void)_addPrefetchPropertiesToMediaQuery:(id)arg1 prefetchProperties:(id)arg2;
- (void)_setSortOrderingForMediaQuery:(id)arg1 withSortProperties:(id)arg2 sortDirectionMapping:(id)arg3;
- (void)_addPredicatesToMediaQuery:(id)arg1 withFilters:(id)arg2;
- (id)_baseMediaQuery;
- (id)_mediaQuery;
- (_Bool)_isCollectionsFetch;
- (_Bool)_isItemsFetch;
- (_Bool)_prepare;
- (void)main;
- (id)initWithAppContext:(id)arg1 options:(id)arg2;
- (id)init;

@end

