//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileProviderMovingInfo, NSFileProvidingInfo, NSOperationQueue, NSString, NSURL;
@protocol FPDFileCoordinationProviderDelegate;

@protocol FPDFileCoordinationProviderDelegate
- (void)_movingItemAtURL:(NSURL *)arg1 withInfo:(NSFileProviderMovingInfo *)arg2 completionHandler:(void (^)(NSFileProviderMovingResponse *))arg3;
- (void)_providedItemAtURL:(NSURL *)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(NSURL *)arg3;
- (void)_providedItemAtURL:(NSURL *)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(NSURL *)arg1 didGainPresenterWithID:(id)arg2;
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(NSURL *)arg2;
- (void)_cancelProvidingItemAtURL:(NSURL *)arg1 toReaderWithID:(id)arg2;
- (void)_provideItemAtURL:(NSURL *)arg1 withInfo:(NSFileProvidingInfo *)arg2 completionHandler:(void (^)(NSFileProvidingResponse *))arg3;
- (id <FPDFileCoordinationProviderDelegate>)_siblingDelegateForURL:(NSURL *)arg1;
- (NSURL *)_physicalURLForURL:(NSURL *)arg1;
- (NSOperationQueue *)_providedItemsOperationQueue;
- (NSString *)_fileReactorID;
@end

