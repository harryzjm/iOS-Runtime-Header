//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/NSObject-Protocol.h>

@class HMFLogCategory, NSString;

@protocol HMFLogging <NSObject>
+ (HMFLogCategory *)logCategory;

@optional
- (NSString *)logIdentifier;
@end

