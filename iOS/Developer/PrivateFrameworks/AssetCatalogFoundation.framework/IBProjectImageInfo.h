//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBImageRepInfo, NSDictionary, NSString;

@interface IBProjectImageInfo
{
    _Bool _isSymbolImage;
    NSString *_cacheKey;
    NSString *_debugRepresentedImageName;
    long long _templateRenderingIntent;
    NSDictionary *_repInfoByAppearance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *repInfoByAppearance; // @synthesize repInfoByAppearance=_repInfoByAppearance;
@property(nonatomic) _Bool isSymbolImage; // @synthesize isSymbolImage=_isSymbolImage;
@property(nonatomic) long long templateRenderingIntent; // @synthesize templateRenderingIntent=_templateRenderingIntent;
@property(copy, nonatomic) NSString *debugRepresentedImageName; // @synthesize debugRepresentedImageName=_debugRepresentedImageName;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToImageInfo:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (_Bool)hasIntrinsicSize;
@property(retain, nonatomic) IBImageRepInfo *repInfoForUnspecifiedAppearance;
- (id)init;

@end

