//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class EDReference, EDResources, EDWorksheet, NSString;

__attribute__((visibility("hidden")))
@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject>
{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
    int mWidth;
    _Bool mHidden;
    EDReference *mRange;
    unsigned long long mStyleIndex;
    unsigned char mOutlineLevel;
}

+ (id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)setOutlineLevel:(unsigned char)arg1;
- (unsigned char)outlineLevel;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)setRangeWithFirstColumn:(int)arg1 lastColumn:(int)arg2;
- (void)setRange:(id)arg1;
- (id)range;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isHidden;
- (void)setWidth:(double)arg1;
- (double)width;
- (long long)key;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (void)setStyleIndex:(unsigned long long)arg1;
- (unsigned long long)styleIndex;
- (void)setWidthInXlUnits:(int)arg1;
- (int)widthInXlUnits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

