//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADCachedDrawableStyle : NSObject
{
    int mFillCategory;
    unsigned long long mFillIndex;
    unsigned long long mStrokeIndex;
    unsigned long long mShadowIndex;
    unsigned char mReflectionOpacity;
    unsigned long long mTextStyleIndex;
}

@property(readonly, nonatomic) unsigned long long textStyleIndex; // @synthesize textStyleIndex=mTextStyleIndex;
@property(readonly, nonatomic) unsigned char reflectionOpacity; // @synthesize reflectionOpacity=mReflectionOpacity;
@property(readonly, nonatomic) unsigned long long shadowIndex; // @synthesize shadowIndex=mShadowIndex;
@property(readonly, nonatomic) unsigned long long strokeIndex; // @synthesize strokeIndex=mStrokeIndex;
@property(readonly, nonatomic) unsigned long long fillIndex; // @synthesize fillIndex=mFillIndex;
@property(readonly, nonatomic) int fillCategory; // @synthesize fillCategory=mFillCategory;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned long long)arg2 strokeIndex:(unsigned long long)arg3 shadowIndex:(unsigned long long)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned long long)arg6;

@end

