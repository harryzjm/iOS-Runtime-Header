//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisReferenceLineNonStyle : NSObject
{
    TSCHChartAxisID *mAxisIdentifier;
    NSArray *mReferenceLineNonStyleItems;
}

@property(copy, nonatomic) NSArray *referenceLineNonStyleItems; // @synthesize referenceLineNonStyleItems=mReferenceLineNonStyleItems;
@property(copy, nonatomic) TSCHChartAxisID *axisIdentifier; // @synthesize axisIdentifier=mAxisIdentifier;
- (void)dealloc;
- (void)didInitFromSOS;

@end

