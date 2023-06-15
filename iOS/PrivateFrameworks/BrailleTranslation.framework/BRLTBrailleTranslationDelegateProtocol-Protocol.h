//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BrailleTranslation/NSObject-Protocol.h>

@class BRLTTextFormattingRanges, NSString;

@protocol BRLTBrailleTranslationDelegateProtocol <NSObject>
- (NSString *)textForPrintBraille:(NSString *)arg1 language:(NSString *)arg2 mode:(unsigned long long)arg3 locations:(id *)arg4;
- (NSString *)printBrailleForText:(NSString *)arg1 language:(NSString *)arg2 mode:(unsigned long long)arg3 textPositionsRange:(struct _NSRange)arg4 locations:(id *)arg5 textFormattingRanges:(BRLTTextFormattingRanges *)arg6;
@end

