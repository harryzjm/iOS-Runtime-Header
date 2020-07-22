//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface BBActionResponse : NSObject <NSSecureCoding>
{
    long long _actionType;
    unsigned long long _actionActivationMode;
    long long _actionBehavior;
    NSString *_actionID;
    NSString *_bulletinRecordID;
    NSString *_bulletinPublisherID;
    NSDictionary *_bulletinContext;
    NSString *_bulletinButtonID;
    NSDictionary *_context;
    NSString *_originID;
}

+ (_Bool)supportsSecureCoding;
+ (id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2;
@property(copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *bulletinButtonID; // @synthesize bulletinButtonID=_bulletinButtonID;
@property(copy, nonatomic) NSDictionary *bulletinContext; // @synthesize bulletinContext=_bulletinContext;
@property(copy, nonatomic) NSString *bulletinPublisherID; // @synthesize bulletinPublisherID=_bulletinPublisherID;
@property(copy, nonatomic) NSString *bulletinRecordID; // @synthesize bulletinRecordID=_bulletinRecordID;
@property(copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
@property(nonatomic) long long actionBehavior; // @synthesize actionBehavior=_actionBehavior;
@property(nonatomic) unsigned long long actionActivationMode; // @synthesize actionActivationMode=_actionActivationMode;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

