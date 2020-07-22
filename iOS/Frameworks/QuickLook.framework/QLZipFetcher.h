//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString, QLURLHandler, UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface QLZipFetcher
{
    UIDocumentInteractionController *_archiveController;
    NSString *_relativePath;
    QLURLHandler *_urlHandler;
    NSError *_extractError;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)newItemProvider;
- (id)fetchedContent;
- (id)shareableItem;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)itemSize;
- (id)urlHandler;
- (id)initWithController:(id)arg1 relativePath:(id)arg2;

@end

