//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class DNDModeAssertionInvalidation, DNDModeAssertionService;

@protocol DNDModeAssertionUpdateListener <NSObject>
- (void)modeAssertionService:(DNDModeAssertionService *)arg1 didReceiveModeAssertionInvalidation:(DNDModeAssertionInvalidation *)arg2;
@end

