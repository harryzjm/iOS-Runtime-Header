//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, TKTokenID;

@interface TKTokenKeychainItem : NSObject
{
    NSData *_accessControl;
    id _objectID;
    NSString *_label;
    NSDictionary *_constraints;
    TKTokenID *_tokenID;
}

+ (id)keychainItemWithInfo:(id)arg1;
+ (id)accessControlForConstraints:(id)arg1 tokenID:(id)arg2 error:(id *)arg3;
+ (id)operationMap;
- (void).cxx_destruct;
@property(retain) TKTokenID *tokenID; // @synthesize tokenID=_tokenID;
@property(copy) NSDictionary *constraints; // @synthesize constraints=_constraints;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) id objectID; // @synthesize objectID=_objectID;
- (id)initWithItemInfo:(id)arg1;
@property(readonly, copy) NSMutableDictionary *keychainAttributes; // @dynamic keychainAttributes;
@property(retain) NSData *accessControl;
- (id)description;
- (id)initWithObjectID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSData *encodedObjectID; // @dynamic encodedObjectID;

@end
