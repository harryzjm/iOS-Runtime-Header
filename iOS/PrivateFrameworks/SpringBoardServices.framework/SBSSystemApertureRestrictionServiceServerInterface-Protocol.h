//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol SBSSystemApertureRestrictionServiceServerInterface <NSObject>
- (oneway void)invalidateSystemApertureCompleteSuppressionAssertionWithIdentifier:(NSString *)arg1;
- (NSUUID *)acquireSystemApertureCompleteSuppressionAssertionIdentifierWithReason:(NSString *)arg1;
- (oneway void)invalidateRestrictSystemApertureLayoutToInertAssertionWithIdentifier:(NSString *)arg1;
- (NSUUID *)acquireRestrictSystemApertureLayoutToInertAssertionIdentifierWithReason:(NSString *)arg1;
@end

