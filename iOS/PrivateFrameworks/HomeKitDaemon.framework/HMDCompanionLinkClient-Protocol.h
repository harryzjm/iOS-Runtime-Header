//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@protocol HMDCompanionLinkClient <NSObject>
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
- (void)stop;
- (void)start;
@end

