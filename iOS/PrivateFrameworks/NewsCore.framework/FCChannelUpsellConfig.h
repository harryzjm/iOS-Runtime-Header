//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCEmailSignupConfig, FCHideMyEmailSignupConfig, NSDictionary, NSString;

@interface FCChannelUpsellConfig : NSObject
{
    NSString *_channelID;
    NSDictionary *_triggersByMethod;
    long long _presentationCap;
    long long _presentationCountResetInterval;
    long long _quiescenceInterval;
    long long _engagedUserQuiescenceInterval;
    FCEmailSignupConfig *_emailSignupConfiguration;
    FCHideMyEmailSignupConfig *_hideMyEmailSignupConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FCHideMyEmailSignupConfig *hideMyEmailSignupConfiguration; // @synthesize hideMyEmailSignupConfiguration=_hideMyEmailSignupConfiguration;
@property(retain, nonatomic) FCEmailSignupConfig *emailSignupConfiguration; // @synthesize emailSignupConfiguration=_emailSignupConfiguration;
@property(nonatomic) long long engagedUserQuiescenceInterval; // @synthesize engagedUserQuiescenceInterval=_engagedUserQuiescenceInterval;
@property(nonatomic) long long quiescenceInterval; // @synthesize quiescenceInterval=_quiescenceInterval;
@property(nonatomic) long long presentationCountResetInterval; // @synthesize presentationCountResetInterval=_presentationCountResetInterval;
@property(nonatomic) long long presentationCap; // @synthesize presentationCap=_presentationCap;
@property(retain, nonatomic) NSDictionary *triggersByMethod; // @synthesize triggersByMethod=_triggersByMethod;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (id)initWithChannelID:(id)arg1 configDictionary:(id)arg2;

@end
