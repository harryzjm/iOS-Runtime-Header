//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/TTFont.h>

@interface TTFont (UI)
+ (void)font:(struct UIFont *)arg1 isBold:(_Bool *)arg2 isItalic:(_Bool *)arg3;
+ (struct UIFont *)convertFont:(struct UIFont *)arg1 toBold:(_Bool)arg2 toItalic:(_Bool)arg3;
- (struct UIFont *)nativeFontForStyle:(unsigned int)arg1 contentSizeCategory:(id)arg2;
- (struct UIFont *)nativeFontForStyle:(unsigned int)arg1;
@end

