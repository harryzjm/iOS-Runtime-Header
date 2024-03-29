//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SYDocumentFetchResult : NSObject
{
    NSString *_documentId;
    NSURL *_fileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSString *documentId; // @synthesize documentId=_documentId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocumentId:(id)arg1 fileURL:(id)arg2;

@end

