//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface __NSCFTaskPerformanceTiming : NSObject <NSSecureCoding>
{
    _Bool __isBackground;
    NSDate *__resumeTime;
    NSUUID *__activityUUID;
    NSDate *__didCompleteWithError;
    long long __numberOfRetries;
}

+ (_Bool)supportsSecureCoding;
@property _Bool _isBackground; // @synthesize _isBackground=__isBackground;
@property long long _numberOfRetries; // @synthesize _numberOfRetries=__numberOfRetries;
@property(retain) NSDate *_didCompleteWithError; // @synthesize _didCompleteWithError=__didCompleteWithError;
@property(retain) NSUUID *_activityUUID; // @synthesize _activityUUID=__activityUUID;
@property(retain) NSDate *_resumeTime; // @synthesize _resumeTime=__resumeTime;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
