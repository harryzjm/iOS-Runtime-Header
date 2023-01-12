//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDMediaContentProfileAccessControlModel;

@protocol HMDMediaContentProfileAccessControlModelUpdateReceiver <NSObject>
- (void)mediaContentProfileAccessControlModelRemoved:(HMDMediaContentProfileAccessControlModel *)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)mediaContentProfileAccessControlModelUpdated:(HMDMediaContentProfileAccessControlModel *)arg1 previousModel:(HMDMediaContentProfileAccessControlModel *)arg2 completion:(void (^)(HMBAction *))arg3;
@end

