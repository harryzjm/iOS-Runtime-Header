//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLULookupItemContent, NSArray, NSDictionary, NSString, NSURL;

@interface MLULookupItem : NSObject
{
    NSURL *_url;
    struct __DDResult *_ddResult;
    NSString *_text;
    struct _NSRange _focusRange;
    NSArray *_attachments;
    unsigned long long _currentAttachmentIndex;
    struct _NSRange _proposedRange;
    _Bool _resolved;
    NSDictionary *_documentProperties;
    MLULookupItemContent *_previewContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLULookupItemContent *previewContent; // @synthesize previewContent=_previewContent;
@property(retain) NSDictionary *documentProperties; // @synthesize documentProperties=_documentProperties;
- (void)commitWithTransitionForPreviewViewController:(id)arg1 inViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)commitType;
- (void)commit;
- (id)viewControllerToPresent;
- (struct _NSRange)proposedRange;
- (id)webUrlToPresent;
- (_Bool)resolve;
- (_Bool)_resolveText:(id)arg1 focusRange:(struct _NSRange)arg2;
- (_Bool)_resolveURL:(id)arg1 DDResult:(struct __DDResult *)arg2 focusRange:(struct _NSRange)arg3;
- (_Bool)_resolveAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 dataDetectorsResult:(struct __DDResult *)arg2 text:(id)arg3 range:(struct _NSRange)arg4;
- (id)initWithAttachments:(id)arg1 currentAttachment:(unsigned long long)arg2;
- (void)dealloc;

@end
