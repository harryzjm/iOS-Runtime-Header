//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol CNUINavigationListStyle;

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewCellHeightEstimator : NSObject
{
    id <CNUINavigationListStyle> _navigationListStyle;
    NSNumber *_estimatedCellHeightNumber;
    NSNumber *_estimatedDetailCellHeightNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *estimatedDetailCellHeightNumber; // @synthesize estimatedDetailCellHeightNumber=_estimatedDetailCellHeightNumber;
@property(retain, nonatomic) NSNumber *estimatedCellHeightNumber; // @synthesize estimatedCellHeightNumber=_estimatedCellHeightNumber;
@property(retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle; // @synthesize navigationListStyle=_navigationListStyle;
@property(readonly, nonatomic) double estimatedDetailCellHeight;
@property(readonly, nonatomic) double estimatedCellHeight;
- (id)initWithNavigationListStyle:(id)arg1;

@end

