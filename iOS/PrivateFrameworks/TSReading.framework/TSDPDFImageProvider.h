//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSDPDFImageProvider
{
    struct CGPDFDocument *mPDFDocument;
    struct CGSize mNaturalSize;
}

- (struct CGPDFDocument *)p_load;
- (void)p_loadIfNecessary;
- (void)flush;
- (_Bool)hasFlushableContent;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (_Bool)isValid;
- (struct CGSize)naturalSize;
- (long long)pageAngle;
- (struct CGPDFDocument *)CGPDFDocument;
- (void)dealloc;

@end
