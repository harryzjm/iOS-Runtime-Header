//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSTLayoutEngine;

@interface TSTLayoutTask : NSObject
{
    TSTLayoutEngine *_layoutEngine;
    NSMutableArray *_cellStatesToLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *cellStatesToLayout; // @synthesize cellStatesToLayout=_cellStatesToLayout;
@property(readonly, nonatomic) __weak TSTLayoutEngine *layoutEngine; // @synthesize layoutEngine=_layoutEngine;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeToLayoutEngineCaches:(id)arg1;
- (void)enumerateCellStatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)clear;
- (void)addCellState:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfCellStates;
- (id)initWithLayoutTask:(id)arg1;
- (id)initWithLayoutEngine:(id)arg1;

@end

