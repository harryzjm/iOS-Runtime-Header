//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSRemoteContentHostViewController, NSError;

@protocol CSRemoteContentHostDelegate <NSObject>
- (void)remoteContentHostViewController:(CSRemoteContentHostViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)didChangeStyle;
@end
