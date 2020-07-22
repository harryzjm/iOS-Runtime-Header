//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>
#import <CoreDuet/_DKProtobufConverting-Protocol.h>

@class NSNumber, NSString;

@interface _DKSource : NSObject <_DKProtobufConverting, NSSecureCoding>
{
    NSString *_sourceID;
    NSString *_bundleID;
    NSString *_itemID;
    NSString *_groupID;
    NSString *_deviceID;
    NSNumber *_userID;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultSourceID;
+ (id)sourceForInteraction:(id)arg1 bundleID:(id)arg2;
+ (id)intentsSourceID;
+ (id)fromPBCodable:(id)arg1;
+ (id)entityName;
+ (id)sourceForSearchableItem:(id)arg1 bundleID:(id)arg2;
+ (id)spotlightSourceID;
@property(readonly) NSNumber *userID; // @synthesize userID=_userID;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSString *sourceID; // @synthesize sourceID=_sourceID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 groupIdentifier:(id)arg4 deviceIdentifier:(id)arg5 userIdentifier:(id)arg6;
- (id)toPBCodable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
