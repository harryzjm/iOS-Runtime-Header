//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFDumpState-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMAccessoryCategory : NSObject <NSSecureCoding, HMObjectMerge, HMFDumpState>
{
    NSString *_categoryType;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)dumpState;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
@property(readonly, copy) NSString *description;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

