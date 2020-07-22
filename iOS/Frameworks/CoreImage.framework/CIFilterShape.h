//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>

@interface CIFilterShape : NSObject <NSCopying>
{
    unsigned int _pad;
    void *_priv;
}

+ (id)shapeWithRect:(struct CGRect)arg1;
+ (id)_shapeInfinite;
- (id)description;
@property(readonly) struct CGRect extent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)intersectWithRect:(struct CGRect)arg1;
- (id)intersectWith:(id)arg1;
- (id)unionWithRect:(struct CGRect)arg1;
- (id)unionWith:(id)arg1;
- (id)insetByX:(int)arg1 Y:(int)arg2;
- (id)transformBy:(struct CGAffineTransform)arg1 interior:(_Bool)arg2;
- (id)initWithStruct:(struct filterShape *)arg1;
- (id)initWithRect:(struct CGRect)arg1;
- (void)finalize;
- (void)dealloc;
- (struct CGSRegionObject *)CGSRegion;

@end
