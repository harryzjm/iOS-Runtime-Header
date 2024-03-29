//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColor, OADDash, OADFill, OADLineEnd, OADLineJoin;

__attribute__((visibility("hidden")))
@interface OADStroke
{
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    OADLineEnd *mHead;
    OADLineEnd *mTail;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    int mPenAlignment;
    unsigned int mIsColorOverridden:1;
    unsigned int mIsWidthOverridden:1;
    unsigned int mIsCapOverridden:1;
    unsigned int mIsCompoundTypeOverridden:1;
    unsigned int mIsPenAlignmentOverridden:1;
}

+ (id)defaultProperties;
+ (id)blackStroke;
+ (id)nullStroke;
- (void).cxx_destruct;
@property(retain, nonatomic) OADLineEnd *tail; // @synthesize tail=mTail;
@property(retain, nonatomic) OADLineEnd *head; // @synthesize head=mHead;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (_Bool)isPenAlignmentOverridden;
- (void)setPenAlignment:(int)arg1;
- (int)penAlignment;
- (_Bool)isCompoundTypeOverridden;
- (void)setCompoundType:(unsigned char)arg1;
- (unsigned char)compoundType;
- (_Bool)isCapOverridden;
- (void)setCap:(unsigned char)arg1;
- (unsigned char)cap;
- (_Bool)isWidthOverridden;
- (void)setWidth:(float)arg1;
- (float)width;
- (_Bool)isTailOverridden;
- (_Bool)isHeadOverridden;
- (_Bool)isJoinOverridden;
- (void)setJoin:(id)arg1;
- (id)join;
- (_Bool)isDashOverridden;
- (void)setDash:(id)arg1;
- (id)dash;
- (_Bool)isFillOverridden;
- (void)setFill:(id)arg1;
- (id)fill;
- (_Bool)isColorOverridden;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setParent:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

