//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackSection : NSObject
{
    double _sectionHeight;
    double _showcaseSectionHeight;
    long long _firstRowIndex;
    long long _rowCount;
    long long _firstItemRowIndex;
    struct UIEdgeInsets _sectionSpacing;
    struct UIEdgeInsets _showcaseSectionSpacing;
    struct TVRowMetrics _compoundRowMetrics;
}

@property(nonatomic) long long firstItemRowIndex; // @synthesize firstItemRowIndex=_firstItemRowIndex;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) long long firstRowIndex; // @synthesize firstRowIndex=_firstRowIndex;
@property(nonatomic) struct UIEdgeInsets showcaseSectionSpacing; // @synthesize showcaseSectionSpacing=_showcaseSectionSpacing;
@property(nonatomic) double showcaseSectionHeight; // @synthesize showcaseSectionHeight=_showcaseSectionHeight;
@property(nonatomic) struct TVRowMetrics compoundRowMetrics; // @synthesize compoundRowMetrics=_compoundRowMetrics;
@property(nonatomic) struct UIEdgeInsets sectionSpacing; // @synthesize sectionSpacing=_sectionSpacing;
@property(nonatomic) double sectionHeight; // @synthesize sectionHeight=_sectionHeight;
- (id)debugDescription;

@end

