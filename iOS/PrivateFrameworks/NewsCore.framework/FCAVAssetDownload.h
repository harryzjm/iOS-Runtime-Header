//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>
#import <NewsCore/FCOperationIdentifying-Protocol.h>

@class NSMutableArray, NSString;
@protocol FCOperationCanceling><FCOperationIdentifying;

@interface FCAVAssetDownload : NSObject <FCOperationCanceling, FCOperationIdentifying>
{
    NSString *_assetID;
    id <FCOperationCanceling><FCOperationIdentifying> _underlyingOperation;
    NSMutableArray *_completionHandlers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) id <FCOperationCanceling><FCOperationIdentifying> underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
@property(readonly, copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (id)longOperationDescription;
- (id)shortOperationDescription;
- (void)cancel;
- (id)initWithAssetID:(id)arg1 underlyingOperation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
