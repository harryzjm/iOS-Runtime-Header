//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPUI/NSObject-Protocol.h>

@protocol CDPUIAdvancedDataProtectionStateManager <NSObject>
- (void)stopSpinner;
- (void)startSpinner;
- (void)setUnavailable;
- (void)setNetworkError;
- (void)setRepairError;
- (void)setRepaired;
- (void)setUnknown;
@end

