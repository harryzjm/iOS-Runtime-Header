//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLPositionalASTCImageTable
{
}

+ (const struct __CFString *)colorSpaceName;
+ (unsigned long long)metalPixelFormat;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2;
- (id)debugImageDataAtIndex:(unsigned long long)arg1;
- (void)getImageDataOffset:(long long *)arg1 size:(struct CGSize *)arg2 bytesPerRow:(unsigned long long *)arg3 fromEntryFooter:(struct PLImageTableEntryFooter_s *)arg4;

@end
