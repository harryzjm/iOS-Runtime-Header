//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPStoreLibraryPersonalizationRequest, NSOperationQueue;

@interface MPStoreLibraryPersonalizationRequestOperation
{
    NSOperationQueue *_operationQueue;
    MPStoreLibraryPersonalizationRequest *_request;
    CDUnknownBlockType _responseHandler;
}

+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPStoreLibraryPersonalizationRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)execute;

@end
