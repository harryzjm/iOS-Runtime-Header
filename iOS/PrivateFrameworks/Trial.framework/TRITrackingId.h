//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSUUID, TRISubject, TRISubjectProvider;

@interface TRITrackingId : NSObject <NSSecureCoding>
{
    TRISubject *_subject;
    TRISubjectProvider *_subjectProvider;
    int _projectId;
    NSUUID *_uuid;
    NSDate *_time;
    NSArray *_treatments;
}

+ (_Bool)supportsSecureCoding;
+ (id)trackingIdWithProjectId:(int)arg1 paths:(id)arg2;
+ (id)trackingIdWithProjectId:(int)arg1 paths:(id)arg2 treatments:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *treatments; // @synthesize treatments=_treatments;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) TRISubject *subject;
- (id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subjectProvider:(id)arg4 projectId:(int)arg5;
- (id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subject:(id)arg4;
- (id)init;

@end
