//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADColorTransform : NSObject <NSCopying>
{
    int mType;
}

+ (id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2;
+ (float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2;
+ (id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2;
+ (id)applyHSLTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(_Bool)arg3;
+ (float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1;
- (id)description;

@end

