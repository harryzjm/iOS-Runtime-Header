//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADTableCellStyle, OADTableTextStyle;

__attribute__((visibility("hidden")))
@interface OADTablePartStyle : NSObject
{
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;
- (id)description;
- (void)applyOverridesFrom:(id)arg1;
- (id)shallowCopy;
- (void)setCellStyle:(id)arg1;
- (id)cellStyle;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (void)dealloc;

@end

