//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/WFRemoteUserInterface-Protocol.h>

@class WFFileStorageServiceResult;

@protocol WFOpenInActionUserInterface <WFRemoteUserInterface>
- (void)showWithFile:(WFFileStorageServiceResult *)arg1 contentManaged:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
@end
