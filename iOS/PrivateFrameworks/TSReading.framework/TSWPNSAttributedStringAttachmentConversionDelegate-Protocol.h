//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class NSAttributedString, NSString, NSURL, TSWPAttachment, TSWPHyperlinkField;

@protocol TSWPNSAttributedStringAttachmentConversionDelegate <NSObject>

@optional
- (NSURL *)urlForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (NSAttributedString *)attachmentStringForDrawableAttachment:(TSWPAttachment *)arg1;
- (NSAttributedString *)textualEquivalentForDrawableAttachment:(TSWPAttachment *)arg1 withString:(NSString *)arg2 atCharIndex:(unsigned long long)arg3;
@end

