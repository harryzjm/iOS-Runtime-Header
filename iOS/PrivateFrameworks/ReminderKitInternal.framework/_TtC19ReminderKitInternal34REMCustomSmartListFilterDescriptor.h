//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC19ReminderKitInternal34REMCustomSmartListFilterDescriptor : NSObject
{
    MISSING_TYPE *hashtags;
    MISSING_TYPE *date;
    MISSING_TYPE *time;
    MISSING_TYPE *priorities;
    MISSING_TYPE *flagged;
    MISSING_TYPE *location;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
