//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSDErrorImageProvider
{
}

+ (id)sharedInstance;
- (struct CGPDFDocument *)p_iconPDFDocument;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (_Bool)isError;
- (_Bool)isValid;
- (struct CGSize)naturalSize;

@end

