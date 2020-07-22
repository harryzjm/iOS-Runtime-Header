//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TLKImageFittingObject : NSObject
{
    double _maximumFillFactor;
    struct CGSize _containerFittingSize;
}

+ (id)containerFittingSize:(struct CGSize)arg1 maximumFillFactor:(double)arg2;
@property(nonatomic) double maximumFillFactor; // @synthesize maximumFillFactor=_maximumFillFactor;
@property(nonatomic) struct CGSize containerFittingSize; // @synthesize containerFittingSize=_containerFittingSize;
- (struct CGSize)idealFittingSizeOfImageViewforImageSize:(struct CGSize)arg1;
- (id)init;

@end
