//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSCopying-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface GKQuickAction : NSObject <NSCoding, NSCopying, NSSecureCoding>
{
    NSString *_type;
    NSString *_identifier;
    NSDictionary *_imageURLDictionary;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_titleText;
    NSString *_subText;
    NSDate *_date;
    NSString *_gameBundleID;
    NSString *_launchURL;
    NSData *_imageData;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain) NSString *launchURL; // @synthesize launchURL=_launchURL;
@property(retain) NSString *gameBundleID; // @synthesize gameBundleID=_gameBundleID;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *subText; // @synthesize subText=_subText;
@property(retain) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain) NSDictionary *imageURLDictionary; // @synthesize imageURLDictionary=_imageURLDictionary;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *type; // @synthesize type=_type;
- (void)processAction;
- (void)loadImageDataForDesiredSize:(long long)arg1 scale:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)description;
- (void)dealloc;
- (id)initWithSBSApplicationShortcutItem:(id)arg1;
- (id)initWithInvite:(id)arg1;
- (id)initWithMatch:(id)arg1;
- (id)initWithChallenge:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

