//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface SFUnlockState : NSObject <NSSecureCoding>
{
    NSNumber *_unlockEnabled;
    NSNumber *_remotePasscodeEnabled;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSNumber *remotePasscodeEnabled; // @synthesize remotePasscodeEnabled=_remotePasscodeEnabled;
@property(readonly) NSNumber *unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnlockEnabled:(id)arg1 remotePasscodeEnabled:(id)arg2;

@end
