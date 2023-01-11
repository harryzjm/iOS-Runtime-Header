//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXLayoutItemInput-Protocol.h>

@class NSString;

@interface PXLayoutItem : NSObject <PXLayoutItemInput>
{
    double _weight;
    struct CGSize _size;
    struct CGPoint _positionOffset;
    struct CGRect _preferredCropRect;
    struct CGRect _acceptableCropRect;
    struct CGAffineTransform _transform;
}

@property(nonatomic) struct CGRect acceptableCropRect; // @synthesize acceptableCropRect=_acceptableCropRect;
@property(nonatomic) struct CGRect preferredCropRect; // @synthesize preferredCropRect=_preferredCropRect;
@property(nonatomic) struct CGPoint positionOffset; // @synthesize positionOffset=_positionOffset;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (double)weightUsingCriterion:(long long)arg1;
- (id)initWithSize:(struct CGSize)arg1 weight:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
