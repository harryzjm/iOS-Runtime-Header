//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHImportResults, PUImportController, PUImportSessionInfo;

@protocol PUImportControllerImportCompletionDelegate <NSObject>
- (void)importController:(PUImportController *)arg1 didCompleteImportWithImportSession:(PUImportSessionInfo *)arg2 results:(PHImportResults *)arg3 completion:(void (^)(void))arg4;
@end
