//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart
{
}

+ (Class)attachmentClass;
+ (_Bool)isRecognizedClassForContent:(id)arg1;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 asHTML:(_Bool)arg4 isComplete:(_Bool *)arg5;
- (_Bool)_shouldContinueDecodingProcess;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(_Bool)arg3;
- (void)configureFileWrapper:(id)arg1;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id *)arg2;
- (id)fileWrapperForcingDownload:(_Bool)arg1;
- (id)decodeMultipartAppledouble;
- (id)decodeTextCalendar;
- (id)decodeTextPlain;
- (id)htmlContent;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)decodeTextHtml;
- (id)decodeTextEnriched;
- (id)decodeTextRichtext;
- (id)decodeMessageExternal_body;
- (id)decodeMessagePartial;
- (id)decodeMessageRfc822;
- (id)decodeMessageDelivery_status;

@end

