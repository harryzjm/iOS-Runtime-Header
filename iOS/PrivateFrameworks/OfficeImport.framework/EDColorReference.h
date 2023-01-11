//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDColorReference : NSObject <NSCopying>
{
    EDResources *mResources;
    int mSystemColorID;
    unsigned long long mColorIndex;
    unsigned long long mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithColor:(id)arg1 resources:(id)arg2;
+ (id)colorReferenceWithResources:(id)arg1;
+ (id)colorReferenceWithThemeIndex:(unsigned long long)arg1 tint:(double)arg2 resources:(id)arg3;
+ (id)colorReferenceWithColorIndex:(unsigned long long)arg1 resources:(id)arg2;
+ (id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2;
- (id)description;
- (_Bool)isValid;
- (id)color;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToColorReference:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (double)tint;
- (unsigned long long)themeIndex;
- (unsigned long long)colorIndex;
- (int)systemColorID;

@end

