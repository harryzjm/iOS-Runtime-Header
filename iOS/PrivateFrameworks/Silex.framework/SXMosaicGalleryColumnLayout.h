//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SXMosaicGalleryColumnLayout : NSObject
{
    double _width;
    double _gutter;
}

@property(readonly, nonatomic) double gutter; // @synthesize gutter=_gutter;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (double)widthOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;
- (double)positionOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;
- (double)widthForColumnRange:(struct _NSRange)arg1 numberOfColumns:(unsigned long long)arg2;
- (double)positionForColumnRange:(struct _NSRange)arg1 numberOfColumns:(unsigned long long)arg2;
- (id)initWithWidth:(double)arg1 gutter:(double)arg2;

@end
