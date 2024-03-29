//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSText/NSObject-Protocol.h>

@protocol EQKitLayoutContext <NSObject>
- (struct CGSize)containerSize;
- (struct CGSize)targetSize;
- (struct __CFString *)baseFontName;
- (double)baseFontSize;

@optional
- (double)textMacroFontSize;
- (struct CGColor *)baseFontColor;
@end

