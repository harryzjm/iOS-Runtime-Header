//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SXMosaicGalleryLayoutItem : NSObject
{
    int _tileType;
    struct CGSize _dimensions;
}

@property(readonly, nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
- (id)description;
@property(readonly, nonatomic) int tileType; // @synthesize tileType=_tileType;
- (double)aspectRatio;
- (id)initWithDimensions:(struct CGSize)arg1;

@end

