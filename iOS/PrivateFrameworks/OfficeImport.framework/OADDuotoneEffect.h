//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADDuotoneEffect
{
    OADColor *mColor1;
    OADColor *mColor2;
    int mTransferMode1;
    int mTransferMode2;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (void)setTransferMode2:(int)arg1;
- (int)transferMode2;
- (void)setTransferMode1:(int)arg1;
- (int)transferMode1;
- (void)setColor2:(id)arg1;
- (id)color2;
- (void)setColor1:(id)arg1;
- (id)color1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
