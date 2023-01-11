//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSString, WDCharacterProperties, WDParagraphProperties, WDStyleSheet, WDTableCellProperties, WDTableRowProperties, WDTableStyleOverride;

__attribute__((visibility("hidden")))
@interface WDStyle : NSObject <NSCopying>
{
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride *mTableStyleOverrides[12];
    _Bool mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
    WDStyleSheet *mStyleSheet;
    WDStyle *mBaseStyle;
    WDStyle *mNextStyle;
}

- (void).cxx_destruct;
@property __weak WDStyle *nextStyle; // @synthesize nextStyle=mNextStyle;
@property(readonly) __weak WDStyleSheet *styleSheet; // @synthesize styleSheet=mStyleSheet;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property __weak WDStyle *baseStyle; // @synthesize baseStyle=mBaseStyle;
- (id)id;
- (int)type;
- (void)setName:(id)arg1;
- (id)name;
- (id)tableStyleOverrideForPart:(int)arg1;
- (id)tableCellProperties;
- (id)tableRowProperties;
- (id)tableProperties;
- (_Bool)isAnythingOverridden;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (id)characterProperties;
- (id)paragraphProperties;
- (id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3;

@end
