//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSString;

@protocol NPKTransientPassAssertionServerProtocol <NSObject>
- (void)requestPassSelectionFieldDetectorDelegationAssertion;
- (void)setDoublePressDelegationRequested:(_Bool)arg1;
- (void)setDisableCardSelection:(_Bool)arg1;
- (void)setServiceModeRequested:(_Bool)arg1;
- (void)setTransientPassUniqueID:(NSString *)arg1;
@end

