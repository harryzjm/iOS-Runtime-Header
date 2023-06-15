//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperBoardUI/NSObject-Protocol.h>

@protocol PBUIRenderServiceInterface;

@protocol PBUIRemoteRendererConnection <NSObject>
- (id <PBUIRenderServiceInterface>)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (id <PBUIRenderServiceInterface>)remoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
@end

