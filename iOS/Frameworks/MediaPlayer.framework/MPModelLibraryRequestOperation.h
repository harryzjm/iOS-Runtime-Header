//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelLibraryRequest, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPModelLibraryRequestOperation
{
    MPModelLibraryRequest *_request;
    CDUnknownBlockType _responseHandler;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_serialAccessQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *serialAccessQueue; // @synthesize serialAccessQueue=_serialAccessQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
- (id)_sectionProperties;
- (void)_sanityCheckRequest;
- (id)_libraryView;
- (id)_itemProperties;
- (void)_executeRequest;
- (void)_executeLegacyRequest;
- (void)execute;

@end
