//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;

@interface CalDAVPrincipalEmailDetailsResult : NSObject
{
    NSURL *_principalURL;
    NSString *_displayName;
    NSSet *_preferredAddresses;
}

+ (id)resultFromResponseItem:(id)arg1;
@property(retain, nonatomic) NSSet *preferredAddresses; // @synthesize preferredAddresses=_preferredAddresses;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
- (void).cxx_destruct;
- (id)description;
- (id)addresses;

@end

