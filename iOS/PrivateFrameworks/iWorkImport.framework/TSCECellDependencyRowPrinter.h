//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, TSCEEdgeListPrinter;

__attribute__((visibility("hidden")))
@interface TSCECellDependencyRowPrinter : NSObject
{
    _Bool _isFormula;
    _Bool _isInCycle;
    NSString *_cellID;
    unsigned long long _dirtyPrecedentCount;
    TSCEEdgeListPrinter *_precedentsList;
    TSCEEdgeListPrinter *_dependentsList;
}

@property(retain, nonatomic) TSCEEdgeListPrinter *dependentsList; // @synthesize dependentsList=_dependentsList;
@property(retain, nonatomic) TSCEEdgeListPrinter *precedentsList; // @synthesize precedentsList=_precedentsList;
@property(nonatomic) _Bool isInCycle; // @synthesize isInCycle=_isInCycle;
@property(nonatomic) _Bool isFormula; // @synthesize isFormula=_isFormula;
@property(nonatomic) unsigned long long dirtyPrecedentCount; // @synthesize dirtyPrecedentCount=_dirtyPrecedentCount;
@property(retain, nonatomic) NSString *cellID; // @synthesize cellID=_cellID;
- (void).cxx_destruct;
- (id)stringForDependencyRow;
- (void)addDependentWithCellID:(id)arg1 forOwner:(id)arg2;
- (void)addPrecedentWithCellID:(id)arg1 forOwner:(id)arg2;
- (long long)tsce_numericCompare:(id)arg1;
- (id)initWithCellID:(id)arg1 dirtyPrecedentCount:(unsigned long long)arg2;

@end

