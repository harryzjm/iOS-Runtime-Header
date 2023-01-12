//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@interface TSTPivotGroupingColumnOptionsMap : TSPObject
{
    struct map<TSKUIDStruct, TSTPivotGroupingColumnOptions *, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTPivotGroupingColumnOptions *>>> _optionsForUidMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)prunedCopyWithUids:(void *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateOptionsUsingBlock:(CDUnknownBlockType)arg1;
- (TSKUIDStructVectorTemplate_de88e035)keys;
- (unsigned long long)count;
- (_Bool)hasContent;
- (void)clear;
- (void)setPivotOptions:(id)arg1 forUid:(struct TSKUIDStruct)arg2;
- (id)pivotOptionsForUID:(struct TSKUIDStruct)arg1;

@end

