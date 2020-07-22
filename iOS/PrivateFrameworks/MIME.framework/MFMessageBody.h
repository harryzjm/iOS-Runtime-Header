//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessage;

@interface MFMessageBody : NSObject
{
    MFMessage *_message;
}

- (void)dealloc;
- (id)textHtmlPart;
- (id)attachmentURLs;
- (id)attachments;
- (unsigned int)numberOfAttachmentsSigned:(_Bool *)arg1 encrypted:(_Bool *)arg2;
- (id)message;
- (void)setMessage:(id)arg1;
- (_Bool)isRich;
- (_Bool)isHTML;
- (id)htmlContent;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(_Bool)arg3 isComplete:(_Bool *)arg4;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(_Bool)arg3;
- (id)rawData;

@end

