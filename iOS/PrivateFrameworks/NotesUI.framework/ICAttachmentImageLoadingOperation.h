//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSCache, NSManagedObjectID, NSMutableArray, NSString, NSURL;

@interface ICAttachmentImageLoadingOperation : NSOperation
{
    _Bool _forceFullSizeImage;
    short _attachmentType;
    NSString *_cacheKey;
    NSCache *_cache;
    NSManagedObjectID *_attachmentObjectID;
    NSURL *_mediaURL;
    NSMutableArray *_completionHandlers;
}

@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) _Bool forceFullSizeImage; // @synthesize forceFullSizeImage=_forceFullSizeImage;
@property(nonatomic) short attachmentType; // @synthesize attachmentType=_attachmentType;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) NSManagedObjectID *attachmentObjectID; // @synthesize attachmentObjectID=_attachmentObjectID;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;
- (void)main;
- (void)removeCompletionHandler:(CDUnknownBlockType)arg1 cancelIfNoneLeft:(_Bool)arg2;
- (CDUnknownBlockType)addCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCache:(id)arg1 attachment:(id)arg2 attachmentType:(short)arg3 forceFullSizeImage:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
