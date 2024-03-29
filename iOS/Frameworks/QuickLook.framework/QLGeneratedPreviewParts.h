//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookSupport/QLPreviewParts.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QLGeneratedPreviewParts : QLPreviewParts
{
    NSData *_data;
    NSDictionary *_attachments;
    unsigned long long _stringEncoding;
    NSString *_mimeType;
    NSMutableDictionary *_idToURL;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *idToURL; // @synthesize idToURL=_idToURL;
@property(retain) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property(retain) NSData *data; // @synthesize data=_data;
- (id)URLRequestForContentID:(id)arg1;
- (void)_registerURL:(id)arg1 forContentID:(id)arg2;
- (id)newAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 encoding:(unsigned long long)arg3;
- (void)_processAttachment:(id)arg1 withID:(id)arg2;
- (void)computePreview:(CDUnknownBlockType)arg1;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 mimeType:(id)arg3 attachments:(id)arg4;

@end

