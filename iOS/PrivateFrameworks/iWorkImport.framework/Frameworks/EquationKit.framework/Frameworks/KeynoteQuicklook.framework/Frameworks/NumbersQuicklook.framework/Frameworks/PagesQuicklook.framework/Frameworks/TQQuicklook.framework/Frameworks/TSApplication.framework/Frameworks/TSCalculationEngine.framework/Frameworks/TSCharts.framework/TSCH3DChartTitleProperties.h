//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DChartTitlePositioner, TSCH3DLabelResources, TSCHChartInfo;

@interface TSCH3DChartTitleProperties : NSObject
{
    TSCHChartInfo *_info;
    TSCH3DLabelResources *_labels;
    _Bool _hidden;
    TSCH3DChartTitlePositioner *_cachedPositioner;
}

+ (id)propertiesWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2 styleProvidingSource:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) TSCH3DChartTitlePositioner *cachedPositioner; // @synthesize cachedPositioner=_cachedPositioner;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=_info;
@property(readonly, nonatomic) TSCH3DLabelResources *labels; // @synthesize labels=_labels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2 styleProvidingSource:(id)arg3;

@end

