//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (ICTableAdditions)
- (void)ic_convertParagraphStyleToBodyInRange:(struct _NSRange)arg1;
- (void)ic_addTextBlocks:(id)arg1 range:(struct _NSRange)arg2;
- (void)ic_addForegroundColorInRangesWhereNoColorAlreadyExists:(id)arg1;
- (void)ic_setParagraphStyleForWritingDirection:(long long)arg1 andAlignment:(_Bool)arg2;
@end
