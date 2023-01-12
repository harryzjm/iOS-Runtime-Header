//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WBSCloudKitOperationRetryManager : NSObject
{
    NSDate *_dateRetryWasFirstRequested;
    unsigned long long _numberOfRetries;
    double _timeout;
}

- (void).cxx_destruct;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (long long)scheduleRetryIfNeededForError:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
