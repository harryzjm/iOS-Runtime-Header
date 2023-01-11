//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSDImageProvider;

@interface TSDImageRepSizingState : NSObject
{
    struct CGSize mDesiredSize;
    TSDImageProvider *mProvider;
    struct CGPath *mMaskPath;
    _Bool mIncludesAdjustments;
    _Bool mWideGamutCanvas;
    int mStatus;
    struct CGImage *mSizedImage;
    long long mSizedImageOrientation;
}

@property(nonatomic) _Bool sizedImageIncludesAdjustments; // @synthesize sizedImageIncludesAdjustments=mIncludesAdjustments;
@property(readonly, nonatomic) struct CGPath *maskPath; // @synthesize maskPath=mMaskPath;
@property(nonatomic) long long sizedImageOrientation; // @synthesize sizedImageOrientation=mSizedImageOrientation;
@property(nonatomic) struct CGImage *sizedImage; // @synthesize sizedImage=mSizedImage;
@property(nonatomic) int status; // @synthesize status=mStatus;
@property(retain, nonatomic) TSDImageProvider *provider; // @synthesize provider=mProvider;
@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;
@property(readonly, nonatomic) _Bool wideGamut; // @synthesize wideGamut=mWideGamutCanvas;
- (void)generateSizedImage;
@property(readonly, nonatomic) _Bool sizedImageHasMask;
- (void)dealloc;
- (id)initWithDesiredSize:(struct CGSize)arg1 provider:(id)arg2 maskPath:(struct CGPath *)arg3 wideGamutCanvas:(_Bool)arg4;

@end
