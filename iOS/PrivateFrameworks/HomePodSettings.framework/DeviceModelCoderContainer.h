//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface DeviceModelCoderContainer : NSObject
{
    MISSING_TYPE *groupID;
    MISSING_TYPE *groupName;
    MISSING_TYPE *model;
    MISSING_TYPE *name;
    MISSING_TYPE *pairID;
    MISSING_TYPE *pairName;
    MISSING_TYPE *roomID;
    MISSING_TYPE *roomName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSString *roomName;
@property(nonatomic, copy) NSString *roomID;
@property(nonatomic, copy) NSString *pairName;
@property(nonatomic, copy) NSString *pairID;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *model;
@property(nonatomic, copy) NSString *groupName;
@property(nonatomic, copy) NSString *groupID;

@end

