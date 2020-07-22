//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSIndexSet;

__attribute__((visibility("hidden")))
@interface PUTransitionSectionInfo : NSObject
{
    long long _transitionSection;
    NSIndexSet *_visualSections;
    NSArray *_visualRowStartMarkers;
    long long _contiguousRows;
    NSIndexPath *_anchorRealPath;
    struct PUGridCoordinates _anchorShiftOffset;
}

@property(nonatomic) struct PUGridCoordinates anchorShiftOffset; // @synthesize anchorShiftOffset=_anchorShiftOffset;
@property(retain, nonatomic) NSIndexPath *anchorRealPath; // @synthesize anchorRealPath=_anchorRealPath;
@property(nonatomic) long long contiguousRows; // @synthesize contiguousRows=_contiguousRows;
@property(retain, nonatomic) NSArray *visualRowStartMarkers; // @synthesize visualRowStartMarkers=_visualRowStartMarkers;
@property(retain, nonatomic) NSIndexSet *visualSections; // @synthesize visualSections=_visualSections;
@property(nonatomic) long long transitionSection; // @synthesize transitionSection=_transitionSection;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

