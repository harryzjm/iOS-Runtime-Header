//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKDataFlowLink;

@protocol HKDataFlowLinkProcessor <NSObject>

@optional
- (void)dataFlowLink:(HKDataFlowLink *)arg1 didAddDestination:(HKDataFlowLink *)arg2 direct:(_Bool)arg3;
- (void)dataFlowLink:(HKDataFlowLink *)arg1 didAddSource:(HKDataFlowLink *)arg2 direct:(_Bool)arg3;
@end

