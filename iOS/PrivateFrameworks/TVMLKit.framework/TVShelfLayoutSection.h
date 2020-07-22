//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVShelfLayoutSection : NSObject
{
    NSArray *_itemFrames;
    double _sectionHeaderHorizontalOffset;
    double _sectionHeaderVerticalBump;
    struct CGRect _itemsBoundingFrame;
    struct CGRect _sectionHeaderFrame;
    struct UIEdgeInsets _sectionInset;
}

@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double sectionHeaderVerticalBump; // @synthesize sectionHeaderVerticalBump=_sectionHeaderVerticalBump;
@property(nonatomic) double sectionHeaderHorizontalOffset; // @synthesize sectionHeaderHorizontalOffset=_sectionHeaderHorizontalOffset;
@property(nonatomic) struct CGRect sectionHeaderFrame; // @synthesize sectionHeaderFrame=_sectionHeaderFrame;
@property(nonatomic) struct CGRect itemsBoundingFrame; // @synthesize itemsBoundingFrame=_itemsBoundingFrame;
@property(retain, nonatomic) NSArray *itemFrames; // @synthesize itemFrames=_itemFrames;
- (void).cxx_destruct;

@end

