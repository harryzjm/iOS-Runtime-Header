//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface NanoAppUsage : NSObject
{
    NSString *_watchBundleID;
    NSString *_companionBundleID;
    NSDate *_lastInForeground;
}

+ (id)fromDictionary:(id)arg1;
@property(retain, nonatomic) NSDate *lastInForeground; // @synthesize lastInForeground=_lastInForeground;
@property(retain, nonatomic) NSString *companionBundleID; // @synthesize companionBundleID=_companionBundleID;
@property(retain, nonatomic) NSString *watchBundleID; // @synthesize watchBundleID=_watchBundleID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)toDictionary;

@end
