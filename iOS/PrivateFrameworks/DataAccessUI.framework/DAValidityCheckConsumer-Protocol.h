//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataAccessUI/NSObject-Protocol.h>

@class DAAccount, NSError;

@protocol DAValidityCheckConsumer <NSObject>
- (void)account:(DAAccount *)arg1 isValid:(_Bool)arg2 validationError:(NSError *)arg3;
@end

