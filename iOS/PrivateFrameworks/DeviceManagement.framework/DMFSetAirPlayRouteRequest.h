//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFSetAirPlayRouteRequest
{
    _Bool _suppressPasscodePrompt;
    NSString *_routeUID;
    NSString *_password;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool suppressPasscodePrompt; // @synthesize suppressPasscodePrompt=_suppressPasscodePrompt;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

