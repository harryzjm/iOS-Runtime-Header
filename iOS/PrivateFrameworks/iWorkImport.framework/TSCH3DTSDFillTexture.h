//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSDFill;

__attribute__((visibility("hidden")))
@interface TSCH3DTSDFillTexture
{
    TSDFill *mFill;
}

+ (id)textureWithTSDFill:(id)arg1;
- (id)databufferForDataCache:(id)arg1;
- (_Bool)hasCompleteData;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTSDFill:(id)arg1;

@end

