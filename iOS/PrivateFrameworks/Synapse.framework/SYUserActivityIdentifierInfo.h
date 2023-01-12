//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Synapse/NSSecureCoding-Protocol.h>
#import <Synapse/SYUserActivityInfo-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SYUserActivityIdentifierInfo : NSObject <NSSecureCoding, SYUserActivityInfo>
{
    NSString *_activityType;
    NSURL *_webpageURL;
    NSURL *_canonicalURL;
    NSString *_targetContentIdentifier;
    NSString *_persistentIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(copy) NSString *targetContentIdentifier; // @synthesize targetContentIdentifier=_targetContentIdentifier;
@property(copy) NSURL *canonicalURL; // @synthesize canonicalURL=_canonicalURL;
@property(copy) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(readonly, copy) NSString *activityType; // @synthesize activityType=_activityType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToActivityIdentifierInfo:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithActivityType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
