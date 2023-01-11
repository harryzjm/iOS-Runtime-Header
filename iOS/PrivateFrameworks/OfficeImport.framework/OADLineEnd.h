//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADLineEnd <NSCopying>
{
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    unsigned int mIsTypeOverridden:1;
    unsigned int mIsWidthOverridden:1;
    unsigned int mIsLengthOverridden:1;
}

+ (id)stringForLineEndLength:(unsigned char)arg1;
+ (id)stringForLineEndWidth:(unsigned char)arg1;
+ (id)stringForLineEndType:(unsigned char)arg1;
+ (id)defaultProperties;
- (id)description;
- (_Bool)isLengthOverridden;
- (void)setLength:(unsigned char)arg1;
- (unsigned char)length;
- (_Bool)isWidthOverridden;
- (void)setWidth:(unsigned char)arg1;
- (unsigned char)width;
- (_Bool)isTypeOverridden;
- (void)setType:(unsigned char)arg1;
- (unsigned char)type;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned char)arg1 width:(unsigned char)arg2 length:(unsigned char)arg3;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
