//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, NSSet, SSLookupRequest, VSAuditToken, VSOptional;

@interface VSAppDescriptionFetchOperation : VSAsyncOperation
{
    _Bool _shouldPrecomposeIcon;
    NSSet *_appAdamIDs;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    SSLookupRequest *_lookupRequest;
    NSOperationQueue *_imageLoadingQueue;
    struct CGSize _preferredArtworkSize;
}

@property(retain, nonatomic) NSOperationQueue *imageLoadingQueue; // @synthesize imageLoadingQueue=_imageLoadingQueue;
@property(retain, nonatomic) SSLookupRequest *lookupRequest; // @synthesize lookupRequest=_lookupRequest;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(retain, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) _Bool shouldPrecomposeIcon; // @synthesize shouldPrecomposeIcon=_shouldPrecomposeIcon;
@property(nonatomic) struct CGSize preferredArtworkSize; // @synthesize preferredArtworkSize=_preferredArtworkSize;
@property(copy, nonatomic) NSSet *appAdamIDs; // @synthesize appAdamIDs=_appAdamIDs;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)_appDescriptionFromLookupResponse:(id)arg1 appAdamID:(id)arg2;
- (void)_handleLookupResponse:(id)arg1;
- (id)initWithAppAdamIDs:(id)arg1;
- (id)initWithAppAdamIDs:(id)arg1 preferredArtworkSize:(struct CGSize)arg2;
- (id)init;

@end
