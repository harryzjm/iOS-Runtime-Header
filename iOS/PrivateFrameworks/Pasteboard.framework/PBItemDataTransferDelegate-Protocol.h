//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pasteboard/NSObject-Protocol.h>

@class NSProgress, PBItem, PBItemRepresentation;

@protocol PBItemDataTransferDelegate <NSObject>
- (void)item:(PBItem *)arg1 representationFinishedDataTransfer:(PBItemRepresentation *)arg2;
- (void)item:(PBItem *)arg1 representation:(PBItemRepresentation *)arg2 beganDataTransferWithProgress:(NSProgress *)arg3;
@end

