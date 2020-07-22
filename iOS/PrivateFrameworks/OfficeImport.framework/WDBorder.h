//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface WDBorder : NSObject <NSCopying>
{
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    _Bool mShadow;
    _Bool mFrame;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFrame:(_Bool)arg1;
- (_Bool)frame;
- (void)setShadow:(_Bool)arg1;
- (_Bool)shadow;
- (void)setSpace:(unsigned char)arg1;
- (unsigned char)space;
- (void)setWidth:(unsigned char)arg1;
- (unsigned char)width;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)setSingleBlackBorder;
- (void)setNullBorder;
- (void)setBorder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToBorder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

