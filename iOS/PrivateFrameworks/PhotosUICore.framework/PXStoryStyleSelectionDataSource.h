//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol PXStoryStyleDescriptor;

@interface PXStoryStyleSelectionDataSource : NSObject
{
    long long _indexOfCurrentStyle;
    long long _indexOfCustomStyle;
    NSArray *_styleInfos;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *styleInfos; // @synthesize styleInfos=_styleInfos;
@property(readonly, nonatomic) long long indexOfCustomStyle; // @synthesize indexOfCustomStyle=_indexOfCustomStyle;
@property(readonly, nonatomic) long long indexOfCurrentStyle; // @synthesize indexOfCurrentStyle=_indexOfCurrentStyle;
@property(readonly, nonatomic) id <PXStoryStyleDescriptor> styleInfoForCurrentStyle;
- (id)styleInfoAtIndex:(long long)arg1;
- (id)infosForStylesInRange:(struct _NSRange)arg1;
- (id)songForStyleAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfStyles;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStyleInfos:(id)arg1 indexOfCurrentStyle:(long long)arg2 indexOfCustomStyle:(long long)arg3;

@end
