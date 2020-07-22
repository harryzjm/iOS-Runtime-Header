//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSUUID;

@interface CATNotificationMessage
{
    NSUUID *_taskUUID;
    NSString *_name;
    NSDictionary *_userInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSUUID *taskUUID; // @synthesize taskUUID=_taskUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;

@end

