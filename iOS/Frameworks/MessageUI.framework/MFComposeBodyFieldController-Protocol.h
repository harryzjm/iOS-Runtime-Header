//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/MSComposeBodyFieldController-Protocol.h>

@class NSDictionary, NSString;

@protocol MFComposeBodyFieldController <MSComposeBodyFieldController>
- (void)setDirty:(_Bool)arg1 completionHandler:(void (^)(void))arg2;
- (void)placeCaretAtStartOfBody;
- (void)htmlStringsAttachmentURLsAndPlainTextAlternativeRemovingSignature:(_Bool)arg1 attachmentInfoByIdentifier:(NSDictionary *)arg2 completion:(void (^)(ECHTMLStringAndMIMECharset *, NSArray *, NSArray *, NSArray *))arg3;
- (void)htmlStringUsingAttachmentInfoByIdentifier:(NSDictionary *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)plainTextContentUsingAttachmentInfoByIdentifier:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)containsRichText:(void (^)(_Bool))arg1;
- (void)forceNextSelectionFromSecondToFirstLine;
- (void)displayAttachmentWithIdentifierAsSinglePagePDF:(NSString *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)removeMediaAttachment:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)replaceRichLinkPlaceholderImage:(NSString *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)replaceFilenamePlaceholderWithAttachment:(NSString *)arg1 identifier:(NSString *)arg2;
- (void)replaceFilenamePlaceholderWithImage:(NSString *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)countDuplicatedAttachments:(NSString *)arg1 completionHandler:(void (^)(NSNumber *))arg2;
- (void)insertAttachmentAsImage:(_Bool)arg1 isSinglePagePDF:(_Bool)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)setFileName:(NSString *)arg1 forImageWithContentID:(NSString *)arg2;
- (void)replaceImagesIfNecessary;
- (void)setReplacementFilenamesByContentID:(NSDictionary *)arg1;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(_Bool)arg1 shouldQuote:(_Bool)arg2;
- (void)appendOrReplace:(NSString *)arg1 withMarkupString:(NSString *)arg2 quote:(_Bool)arg3 composeType:(long long)arg4 attachmentInfoByURL:(NSDictionary *)arg5 completionHandler:(void (^)(NSDictionary *))arg6;
- (void)addMarkupString:(NSString *)arg1 quote:(_Bool)arg2 emptyFirst:(_Bool)arg3 prepended:(_Bool)arg4 composeType:(long long)arg5 attachmentInfoByURL:(NSDictionary *)arg6;
- (void)prependPreamble:(NSString *)arg1 quote:(_Bool)arg2 layoutDirection:(long long)arg3;
@end

