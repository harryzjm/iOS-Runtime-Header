//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLResponse.h>

@interface NSURLResponse (SafariServicesExtras)
@property(readonly, nonatomic) _Bool _sf_hasAttachmentWithFilename;
@property(readonly, nonatomic) _Bool _sf_allowedToOverrideContentDispositionAttachment;
- (_Bool)sf_shouldDownloadDueToContentDisposition:(_Bool)arg1;
- (_Bool)sf_hasXMLAttachment;
@end

