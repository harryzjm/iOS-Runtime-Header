//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface ASDClipCardMetricsEvent : NSObject <NSSecureCoding>
{
    _Bool _thirdPartyWithNoAppReferrer;
    NSString *_bundleID;
    NSNumber *_itemID;
    NSString *_referralSource;
    NSString *_referralSourceBundleID;
    NSString *_referrerType;
    NSURL *_sourceURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) _Bool thirdPartyWithNoAppReferrer; // @synthesize thirdPartyWithNoAppReferrer=_thirdPartyWithNoAppReferrer;
@property(retain, nonatomic) NSString *referrerType; // @synthesize referrerType=_referrerType;
@property(retain, nonatomic) NSString *referralSourceBundleID; // @synthesize referralSourceBundleID=_referralSourceBundleID;
@property(retain, nonatomic) NSString *referralSource; // @synthesize referralSource=_referralSource;
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClipBundleID:(id)arg1;

@end
