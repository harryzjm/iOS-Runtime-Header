//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NNMKAccountAuthenticationState : NSObject
{
    NSString *_accountId;
    unsigned long long _state;
    NSString *_displayName;
    NSString *_subsectionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subsectionId; // @synthesize subsectionId=_subsectionId;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;

@end
