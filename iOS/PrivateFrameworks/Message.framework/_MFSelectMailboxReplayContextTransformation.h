//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFOfflineCacheReplayContextTransformation-Protocol.h>

@class NSString;

@interface _MFSelectMailboxReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation>
{
    NSString *_mailboxID;
}

- (void)applyToReplayContext:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxID:(id)arg1;

@end
