//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSString;

@protocol SBUISystemApertureAutomaticallyInvalidatable <NSObject>
@property(nonatomic, getter=isAutomaticallyInvalidatable) _Bool automaticallyInvalidatable;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)resetAutomaticInvalidationTimer;
- (void)invalidateWithReason:(NSString *)arg1;
- (void)addInvalidationBlock:(void (^)(id <SBUISystemApertureAutomaticallyInvalidatable>, NSString *))arg1;
@end

