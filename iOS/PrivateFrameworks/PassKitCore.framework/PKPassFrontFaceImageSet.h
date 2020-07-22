//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKImage;

@interface PKPassFrontFaceImageSet
{
    PKImage *_faceImage;
    struct CGRect _logoRect;
    struct CGRect _thumbnailRect;
    struct CGRect _stripRect;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (long long)imageSetType;
@property(nonatomic) struct CGRect stripRect; // @synthesize stripRect=_stripRect;
@property(nonatomic) struct CGRect thumbnailRect; // @synthesize thumbnailRect=_thumbnailRect;
@property(nonatomic) struct CGRect logoRect; // @synthesize logoRect=_logoRect;
@property(retain, nonatomic) PKImage *faceImage; // @synthesize faceImage=_faceImage;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

