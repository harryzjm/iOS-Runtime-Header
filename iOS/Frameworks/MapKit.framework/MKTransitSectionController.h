//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, MKTransitSectionPagingFilter, NSDate, NSSet;
@protocol GEOTransitSystem;

__attribute__((visibility("hidden")))
@interface MKTransitSectionController : NSObject
{
    MKMapItem *_mapItem;
    MKTransitSectionPagingFilter *__pagingFilter;
    NSSet *_linesToShow;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfFilteredRows;
    unsigned long long _numberOfFilteredLines;
    _Bool _needsBuildRows;
    id <GEOTransitSystem> _system;
    NSDate *_departureCutoffDate;
    NSDate *_expiredHighFrequencyCutoffDate;
    NSSet *_incidentEntitiesToExclude;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MKTransitSectionPagingFilter *_pagingFilter; // @synthesize _pagingFilter=__pagingFilter;
@property(readonly, nonatomic) unsigned long long numberOfFilteredLines; // @synthesize numberOfFilteredLines=_numberOfFilteredLines;
@property(retain, nonatomic) NSSet *incidentEntitiesToExclude; // @synthesize incidentEntitiesToExclude=_incidentEntitiesToExclude;
@property(retain, nonatomic) NSDate *expiredHighFrequencyCutoffDate; // @synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate;
@property(retain, nonatomic) NSDate *departureCutoffDate; // @synthesize departureCutoffDate=_departureCutoffDate;
@property(readonly, nonatomic) id <GEOTransitSystem> system; // @synthesize system=_system;
- (void)_buildRows;
- (void)_setNeedsBuildRows;
- (_Bool)_needsBuildRows;
- (id)linesToShow;
- (_Bool)hasFilteredLines;
- (_Bool)hasFilteredRows;
- (unsigned long long)numberOfRows;
- (void)incrementPagingFilter;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (id)init;

@end
