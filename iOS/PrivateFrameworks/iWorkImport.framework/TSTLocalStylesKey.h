//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSTCellStyle, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTLocalStylesKey : NSObject <NSCopying>
{
    TSTCellStyle *_cellStyle;
    TSWPParagraphStyle *_textStyle;
}

@property(retain, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) TSTCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

