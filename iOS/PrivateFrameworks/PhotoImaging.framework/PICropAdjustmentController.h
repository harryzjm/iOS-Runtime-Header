//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PICropAdjustmentController
{
}

+ (id)originalCropKey;
+ (id)smartKey;
+ (id)yawKey;
+ (id)pitchKey;
+ (id)angleKey;
+ (id)constraintHeightKey;
+ (id)constraintWidthKey;
+ (id)heightKey;
+ (id)widthKey;
+ (id)yOriginKey;
+ (id)xOriginKey;
@property(nonatomic, getter=isOriginalCrop) _Bool originalCrop;
@property(nonatomic, getter=isSmart) _Bool smart;
- (_Bool)isSettingEqual:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool autoCropped;
@property(nonatomic) double yawRadians;
@property(nonatomic) double yaw;
@property(nonatomic) double pitchRadians;
@property(nonatomic) double pitch;
@property(nonatomic) double angleRadians;
@property(nonatomic) double angle;
@property(nonatomic) long long constraintHeight;
@property(nonatomic) long long constraintWidth;
@property(nonatomic) struct CGRect cropRect;
- (_Bool)isCropIdentityForImageSize:(struct CGSize)arg1;
- (_Bool)isCropConstrained;
- (_Bool)isGeometryIdentityForImageSize:(struct CGSize)arg1;
- (id)visualInputKeys;
- (id)initWithAdjustment:(id)arg1;

@end
