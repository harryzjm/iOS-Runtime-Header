//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface REExportedTable : NSObject
{
    NSMutableArray *_data;
    _Bool _sortable;
    NSArray *_header;
}

@property(nonatomic) _Bool sortable; // @synthesize sortable=_sortable;
@property(retain, nonatomic) NSArray *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)addRow:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long rowsCount;
- (id)init;

@end
