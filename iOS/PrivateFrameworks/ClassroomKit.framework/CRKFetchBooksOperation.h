//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATOperation.h>

@class NSMutableArray;

@interface CRKFetchBooksOperation : CATOperation
{
    CDUnknownBlockType mBookLibraryProxy;
    NSMutableArray *mBooks;
    _Bool mIncludeImages;
}

- (void).cxx_destruct;
- (void)parsePDFMetadataOperationDidFail:(id)arg1;
- (void)parseBookMetadataOperationDidFail:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithBookLibraryProxy:(CDUnknownBlockType)arg1 includeImages:(_Bool)arg2;
- (id)initWithBookLibraryProxy:(CDUnknownBlockType)arg1 request:(id)arg2 error:(id *)arg3;
- (id)initWithBookLibraryProxy:(CDUnknownBlockType)arg1;

@end
