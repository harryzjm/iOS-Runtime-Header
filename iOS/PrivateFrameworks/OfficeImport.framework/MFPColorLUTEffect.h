//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MFPColorLUTEffect
{
    unsigned char mLutA[256];
    unsigned char mLutR[256];
    unsigned char mLutG[256];
    unsigned char mLutB[256];
}

+ (id)GUID;
- (id)initWithLUTA:(unsigned char [256])arg1 LUTR:(unsigned char [256])arg2 LUTG:(unsigned char [256])arg3 LUTB:(unsigned char [256])arg4;

@end
