//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSNNResizeBilinear
{
    unsigned long long _resizeWidth;
    unsigned long long _resizeHeight;
    _Bool _alignCorners;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) _Bool alignCorners; // @synthesize alignCorners=_alignCorners;
@property(readonly, nonatomic) unsigned long long resizeHeight; // @synthesize resizeHeight=_resizeHeight;
@property(readonly, nonatomic) unsigned long long resizeWidth; // @synthesize resizeWidth=_resizeWidth;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 resizeWidth:(unsigned long long)arg2 resizeHeight:(unsigned long long)arg3 alignCorners:(_Bool)arg4;

@end

