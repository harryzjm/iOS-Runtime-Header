//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTTableHeaderInfo : NSObject
{
    TSTCellStyle *mCellStyle;
    TSWPParagraphStyle *mTextStyle;
    double mSize;
    unsigned char mHidingState;
    unsigned short mNumberOfCells;
}

@property(nonatomic) unsigned short numberOfCells; // @synthesize numberOfCells=mNumberOfCells;
@property(nonatomic) unsigned char hidingState; // @synthesize hidingState=mHidingState;
@property(nonatomic) double size; // @synthesize size=mSize;
@property(retain, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=mTextStyle;
@property(retain, nonatomic) TSTCellStyle *cellStyle; // @synthesize cellStyle=mCellStyle;
- (id)description;
- (void)dealloc;

@end

