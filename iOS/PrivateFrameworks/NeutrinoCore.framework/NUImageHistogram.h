//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>
#import <NeutrinoCore/NSMutableCopying-Protocol.h>

@class NUHistogram;

@interface NUImageHistogram : NSObject <NSCopying, NSMutableCopying>
{
    long long _sampleCount;
    long long _binCount;
    NUHistogram *_red;
    NUHistogram *_green;
    NUHistogram *_blue;
    NUHistogram *_luminance;
    CDStruct_59a221c9 _range;
}

+ (Class)_histogramClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NUHistogram *luminance; // @synthesize luminance=_luminance;
@property(readonly, nonatomic) NUHistogram *blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) NUHistogram *green; // @synthesize green=_green;
@property(readonly, nonatomic) NUHistogram *red; // @synthesize red=_red;
@property(readonly, nonatomic) long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(readonly, nonatomic) CDStruct_59a221c9 range; // @synthesize range=_range;
@property(readonly, nonatomic) long long binCount; // @synthesize binCount=_binCount;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)immutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBinCount:(long long)arg1 range:(CDStruct_59a221c9)arg2;
- (id)init;

@end
