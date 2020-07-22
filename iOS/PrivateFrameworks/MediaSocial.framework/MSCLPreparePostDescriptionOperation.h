//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MSCLAccountStore, MSCLStoreItem, NSArray, NSString, SKUIClientContext, SKUIMediaSocialAuthor;

@interface MSCLPreparePostDescriptionOperation : NSOperation
{
    MSCLAccountStore *_accountStore;
    NSArray *_attachments;
    _Bool _attributed;
    SKUIMediaSocialAuthor *_author;
    SKUIClientContext *_clientContext;
    MSCLStoreItem *_contentItem;
    NSArray *_enabledExternalServices;
    CDUnknownBlockType _outputBlock;
    NSString *_text;
    _Bool _attachmentWasDownloadedAndNeedsRemoval;
    long long _facebookDestination;
}

@property(nonatomic) long long facebookDestination; // @synthesize facebookDestination=_facebookDestination;
@property(nonatomic) _Bool attachmentWasDownloadedAndNeedsRemoval; // @synthesize attachmentWasDownloadedAndNeedsRemoval=_attachmentWasDownloadedAndNeedsRemoval;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
@property(copy, nonatomic) NSArray *enabledExternalServices; // @synthesize enabledExternalServices=_enabledExternalServices;
@property(copy, nonatomic) MSCLStoreItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(copy, nonatomic) SKUIMediaSocialAuthor *author; // @synthesize author=_author;
@property(nonatomic, getter=isAttributed) _Bool attributed; // @synthesize attributed=_attributed;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) MSCLAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (id)_URLByWritingStrippedImageData:(id)arg1 typeIdentifier:(id *)arg2 error:(id *)arg3;
- (id)_URLByWritingImage:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (id)_URLByWritingData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (id)_URLByCopyingAssetAtURL:(id)arg1 error:(id *)arg2;
- (id)_URLByResolvingVideoAssetURL:(id)arg1 UTI:(id *)arg2 error:(id *)arg3;
- (id)_URLByResolvingImageAssetURL:(id)arg1 UTI:(id *)arg2 error:(id *)arg3;
- (id)_refreshTokensForAuthor:(id)arg1 externalServices:(id)arg2 error:(id *)arg3;
- (id)_newCoverImageAttachmentWithAttachment:(id)arg1;
- (id)_defaultTruncatedText;
- (id)_defaultTitleWithAttachment:(id)arg1;
- (id)_copyFinalizedAttachmentWithAttachment:(id)arg1 error:(id *)arg2;
- (id)_assetForURL:(id)arg1 library:(id)arg2 error:(id *)arg3;
- (void)main;

@end
