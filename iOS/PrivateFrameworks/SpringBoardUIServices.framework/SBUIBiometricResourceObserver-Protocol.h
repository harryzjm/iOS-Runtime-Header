//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@protocol SBUIBiometricResource;

@protocol SBUIBiometricResourceObserver <NSObject>

@optional
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 matchingEnabledDidChange:(_Bool)arg2;
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 matchingAllowedDidChange:(_Bool)arg2;
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 observeEvent:(unsigned long long)arg2;
@end

