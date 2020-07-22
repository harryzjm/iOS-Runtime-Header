//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircle/NSSecureCoding-Protocol.h>

@class FAFamilyCloudKitProperties, NSArray, NSDictionary;

@interface FAFamilyCircle : NSObject <NSSecureCoding>
{
    NSArray *_members;
    FAFamilyCloudKitProperties *_cloudKitProperties;
    NSDictionary *__serverResponse;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSDictionary *_serverResponse; // @synthesize _serverResponse=__serverResponse;
@property(readonly) FAFamilyCloudKitProperties *cloudKitProperties; // @synthesize cloudKitProperties=_cloudKitProperties;
@property(readonly) NSArray *members; // @synthesize members=_members;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;

@end
