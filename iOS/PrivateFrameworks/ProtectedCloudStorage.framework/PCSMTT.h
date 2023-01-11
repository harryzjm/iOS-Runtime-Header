//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProtectedCloudStorage/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableArray, NSUUID;

@interface PCSMTT : NSObject <NSSecureCoding>
{
    NSDate *_startTime;
    NSMutableArray *_completedPoints;
    NSUUID *_parentUUID;
    NSUUID *_UUID;
    double _time;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) double time; // @synthesize time=_time;
@property(readonly) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property(retain) NSMutableArray *completedPoints; // @synthesize completedPoints=_completedPoints;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)completePoint:(id)arg1;
- (id)measurePoint:(id)arg1;
- (void)measure:(id)arg1 success:(_Bool)arg2 time:(double)arg3;
- (void)measure:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
- (id)jsonDict;
- (id)description;
- (id)initWithMTT:(id)arg1;
- (id)init;

@end
